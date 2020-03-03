using System;
using System.Collections.Generic;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Drawing.Imaging;
using System.Drawing.Text;
using System.IO;
using System.Linq;
using System.Text;
using System.Web;
using System.Web.Security;

namespace jsTemplating.Helpers
{
    public static class Helpers
    {
        public static string EncryptData(string value)
        {
            return value + " encrypted";
        }

        public static string Encrypt(string plaintextValue)
        {
            var plaintextBytes = Encoding.UTF8.GetBytes(plaintextValue);
            return MachineKey.Encode(plaintextBytes, MachineKeyProtection.All);
        }

        public static string Decrypt(string encryptedValue)
        {
            try
            {
                var decryptedBytes = MachineKey.Decode(encryptedValue, MachineKeyProtection.All);
                return Encoding.UTF8.GetString(decryptedBytes);
            }
            catch
            {
                return null;
            }
        }

        public static string generateRandom()
        {
            Random rnd = new Random();
            int myRandom = rnd.Next(45);
            return myRandom.ToString();
        }

        public static string GetImgUrl(string text)
        {
            Bitmap bitmap = new Bitmap(1, 1);
            Font font = new Font("Arial", 25, FontStyle.Italic, GraphicsUnit.Pixel);
            Graphics graphics = Graphics.FromImage(bitmap);
            int width = (int)graphics.MeasureString(text, font).Width;
            int height = (int)graphics.MeasureString(text, font).Height;
            bitmap = new Bitmap(bitmap, new Size(width, height));
            graphics = Graphics.FromImage(bitmap);
            graphics.Clear(Color.White);
            graphics.SmoothingMode = SmoothingMode.AntiAlias;
            graphics.TextRenderingHint = TextRenderingHint.AntiAlias;
            graphics.DrawString(text, font, new SolidBrush(Color.FromArgb(255, 0, 0)), 0, 0);
            graphics.Flush();
            graphics.Dispose();
            string fileName = Path.GetFileNameWithoutExtension(Path.GetRandomFileName()) + ".jpg";
            bitmap.Save(HttpContext.Current.Server.MapPath("~/Images/") + fileName, ImageFormat.Jpeg);
            return "~/Images/" + fileName;

        }
    }
}
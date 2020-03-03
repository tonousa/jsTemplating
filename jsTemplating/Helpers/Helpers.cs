using System;
using System.Collections.Generic;
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
    }
}
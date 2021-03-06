﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace jsTemplating
{
    public partial class Encrypt : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            //if (IsPostBack)
            //{
            //    string valSubmitted = myVal.Text;
            //    myVal.Text = Helpers.Helpers.Encrypt(valSubmitted);
            //}
            string myRandomVal = Helpers.Helpers.generateRandom();
            myVal.Text = myRandomVal;

            string imgUrl = Helpers.Helpers.GetImgUrl(myRandomVal);

            decryptTextBox.Text = imgUrl;
            txtImage.ImageUrl = imgUrl;
            txtImage.Visible = true;
        }

        protected void EncryptBtn_Click(object sender, EventArgs e)
        {
            string valSubmitted = myVal.Text;
            myVal.Text = Helpers.Helpers.Encrypt(valSubmitted);
        }

        protected void DecryptBtn_Click(object sender, EventArgs e)
        {
            string encryptedVal = myVal.Text;
            decryptTextBox.Text = Helpers.Helpers.Decrypt(encryptedVal);
        }
    }
}
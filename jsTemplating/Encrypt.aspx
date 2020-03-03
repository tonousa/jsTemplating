<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Encrypt.aspx.cs" Inherits="jsTemplating.Encrypt" EnableViewState="false" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <asp:TextBox ID="myVal" runat="server"></asp:TextBox>
        <asp:Button runat="server" Text="Encrypt" ID="EncryptBtn" OnClick="EncryptBtn_Click"  />
        <asp:Image ID="txtImage" runat="server" Visible="false" />
    </div>
    <div>
        <asp:TextBox ID="decryptTextBox" runat="server"></asp:TextBox>
        <asp:Button runat="server" Text="Decrypt" ID="DecryptBtn" OnClick="DecryptBtn_Click" />
    </div>
    </form>
</body>
</html>

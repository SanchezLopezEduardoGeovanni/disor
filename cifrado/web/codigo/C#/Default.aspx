<%@ Page Title="Cifrador" Language="C#" MasterPageFile="~/Site.Master" AutoEventWireup="true" CodeFile="Default.aspx.cs" Inherits="_Default" %>

<asp:Content ID="BodyContent" ContentPlaceHolderID="MainContent" runat="server">

    <div class="jumbotron">
        <h1>Cifrador</h1>
         Texto plano:
         <asp:TextBox ID="textbox1" Runat="server" 
               Text="" 
               OnTextChanged="TextoPlanoCambia" />

    <div class="row">
        <div class="col-md-4">
            <h2>Cifrado Cesar</h2>
            <p>
                 Saltos:&nbsp;
                 <input id="Text2" type="text" /><br /><br /> Resultado:
                 <input id="Text3" type="text" /></p>
        </div>
        <div class="col-md-4">
            <h2>Cifrado inverso</h2>
            <p>
                 Resultado:&nbsp;
                 <input id="Text4" type="text" /></p>
        </div>
        <div class="col-md-4">
            <h2>Cifrado inverso con saltos</h2>
            <p>
                &nbsp;</p>
            <p>
                 Saltos:&nbsp;
                 <input id="Text5" type="text" /><br /><br /> Resultado:
                 <input id="Text6" type="text" /></p>
        </div>
    </div>
</asp:Content>

using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class _Default : Page
{
     private TextoPlano textoPlano;
     private Cifrado cesar;
     private Cifrado inverso;
     private Cifrado inversoSaltos;

     protected void Page_Load(object sender, EventArgs e)
    {
          textoPlano = new TextoPlano("");

    }

     protected void TextoPlanoCambia(object sender, EventArgs e) {
          //Method for the OnTextChanged event.
          textoPlano.CambiaTexto(sender.ToString());
     }

}
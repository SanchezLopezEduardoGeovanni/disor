using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

public class TextoPlano {

     private string textoPlano;

     public TextoPlano(string textoPlano) {
          this.textoPlano = textoPlano;
     }

     public void CambiaTexto(string nuevo) {
          textoPlano = nuevo;
     }

     public string Texto() {
          return textoPlano;
     }
}
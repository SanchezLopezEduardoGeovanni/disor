using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CifradoCesarGUI {
     class TextoCifrado {

          private string textoCifrado;

          public TextoCifrado(string textoCifrado) {
               this.textoCifrado = textoCifrado;
          }

          public string Texto { get => textoCifrado; set => textoCifrado = value; }

     }
}

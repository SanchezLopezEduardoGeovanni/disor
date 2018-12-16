using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CifradoCesarGUI {
     class TextoPlano {

          private string textoPlano;

          public TextoPlano(string textoPlano) {
               this.textoPlano = textoPlano;
          }

          public string Texto { get => textoPlano; set => textoPlano = value; }
     }
}

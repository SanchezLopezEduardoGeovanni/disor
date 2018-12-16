using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CifradoCesarGUI {
     class Inverso : Cifrado {

          public Inverso(TextoPlano textoPlano) : base(textoPlano) {
          }

          public override TextoCifrado cifrar() {
               return new TextoCifrado(Reverse(textoPlano.Texto));
          }

          private string Reverse(string s) {
               char[] charArray = s.ToCharArray();
               Array.Reverse(charArray);
               return new string(charArray);
          }

     }
}

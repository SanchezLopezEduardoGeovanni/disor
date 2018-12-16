using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CifradoCesarGUI {
     class InversoSaltos : Cifrado {

          private int saltos;

          public InversoSaltos(TextoPlano textoPlano, int saltos) : base(textoPlano) {
               this.saltos = saltos;
          }

          public override TextoCifrado cifrar() {
               return new TextoCifrado(Saltado(saltos, textoPlano.Texto));
          }

          private string Saltado(int saltos, string cadena) {
               string respuesta = "";
               string palabraTemporal = "";
               for (int i = 0; i < cadena.Length; i++) {
                    if (i % saltos == 0 && i != 0) {
                         respuesta += Reverse(palabraTemporal);
                         palabraTemporal = cadena[i].ToString();
                    } else palabraTemporal += cadena[i];
               }
               respuesta += palabraTemporal.Length == saltos ? Reverse(palabraTemporal) : palabraTemporal;
               return respuesta;
          }

          private string Reverse(string s) {
               char[] charArray = s.ToCharArray();
               Array.Reverse(charArray);
               return new string(charArray);
          }

     }

}

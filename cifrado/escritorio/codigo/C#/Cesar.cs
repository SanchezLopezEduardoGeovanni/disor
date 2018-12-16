using System;
using System.Linq;

namespace CifradoCesarGUI {
     class Cesar {

          private string Alfabeto() {
               string alfabeto = "abcdefghijklmnñopqrstuvwxyz";
               return alfabeto+alfabeto.ToUpper();
          }

          public string Cifrar(string texto,int avance) {
               string respuesta = "";
               for (int i = 0; i < texto.Length; i++)
                    respuesta += Alfabeto().Contains(texto[i]) ?
                         Alfabeto()[(Position(texto[i]) + avance) % Alfabeto().Length]:
                         texto[i];
               return respuesta;
          }

          private int Position(char c) {
               return Array.IndexOf(Alfabeto().ToCharArray(),c);
          }

     }
}

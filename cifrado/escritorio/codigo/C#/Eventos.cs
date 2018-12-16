using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CifradoCesarGUI {
     class Eventos {



          private Form1 formulario;
          private Cifrado cesar;
          private Cifrado inverso;
          private Cifrado inversoSaltos;
          private TextoPlano textoPlano;

          public Eventos(Form1 formulario) {
               this.formulario = formulario;
               //cesar = new Cesar();
               inverso = new Inverso(textoPlano);
               inversoSaltos = new InversoSaltos(textoPlano,0);
          }

          public void modificacionTextoPlano() {

          }

          public void modificacionSaltosCesar() {

          }

          public void modificacionSaltosInverso() {

          }

     }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

public abstract class Cifrado {

     protected TextoPlano textoPlano;

     public Cifrado(TextoPlano textoPlano) {
          this.textoPlano = textoPlano;
     }

     public abstract TextoCifrado cifrar();

}

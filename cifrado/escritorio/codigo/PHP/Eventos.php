<?php

require_once('./Textos/Alfabetos.php');
require_once('./Textos/TextoPlano.php');
require_once('./Textos/TextoCifrado.php');
require_once('./Cifrado/Cifrador.php');
require_once('./Cifrado/CifradoInverso.php');
require_once('./Cifrado/CifradoInversoSaltos.php');
require_once('./Cifrado/CifradoCesar.php');

class Eventos {

    private $ventana,$textoPlano,$cifrador,$cesar,$inverso,$inversoSaltos;

    function __construct($ventana){
        $this->ventana = $ventana;
        $this->textoPlano = new TextoPlano (Alfabetos::getAlfabetoEspaniol(), $this->ventana->textoPlano->get_text());
        $this->cifrador = new Cifrador ($this->textoPlano);
        $this->cesar = new CifradoCesar ( intval($this->ventana->avanceCesar->get_text()) ,Alfabetos::getAlfabetoEspaniol());
        $this->inverso = new CifradoInverso ();
        $this->inversoSaltos = new CifradoInversoSaltos(intval($this->ventana->avanceInversoSaltos->get_text()));
    }

    function cambiaTextoPlano(){
        $this->textoPlano->actualizacionTexto($this->ventana->textoPlano->get_text());
        $this->actualizaResultadoCesar();
        $this->actualizaResultadoInverso();
        $this->actualizaResultadoInversoSaltos();
    }

    function cambiaAvanceCesar(){
        $this->cesar->modificarSaltos(intval($this->ventana->avanceCesar->get_text()));
        $this->actualizaResultadoCesar();
    }

    function cambiaAvanceInversoSaltos(){
        $this->inversoSaltos->modificarSaltos(intval($this->ventana->avanceInversoSaltos->get_text()));
        $this->actualizaResultadoInversoSaltos();
    } 

    private function actualizaResultadoCesar(){
        $this->ventana->resultadoCesar->set_text($this->cifrador->cifrar($this->cesar)->textoCifrado);
    }

    private function actualizaResultadoInverso(){
        $this->ventana->resultadoInverso->set_text($this->cifrador->cifrar($this->inverso)->textoCifrado);
    }

    private function actualizaResultadoInversoSaltos(){
        $this->ventana->resultadoInversoSaltos->set_text($this->cifrador->cifrar($this->inversoSaltos)->textoCifrado);
    }

}

?>
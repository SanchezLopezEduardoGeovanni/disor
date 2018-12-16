<?php

class TextoPlano {

    public $textoPlano,$alfabeto;

    function __construct($alfabeto,$textoPlano){
    	$this->textoPlano = $textoPlano;
    	$this->alfabeto = $alfabeto;
    }

    function actualizacionTexto($nuevo){
    	$this->textoPlano = $nuevo;
    }

}

?>
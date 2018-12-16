<?php

require_once("./Textos/TextoCifrado.php");

class Cifrador{

	private $textoPlano;

	function __construct($textoPlano){
    	$this->textoPlano = $textoPlano;
    }

    function cifrar($metodo){
    	return new TextoCifrado($metodo->cifrar($this->textoPlano));
	}
}
?>
<?php 
class CifradoCesar{

	public $saltos,$alfabeto;

	function __construct($saltos,$alfabeto){
		$this->saltos = $saltos;
		$this->alfabeto = $alfabeto;
	}

	function modificarSaltos($nuevoSalto){
		$this->saltos = $nuevoSalto;
	}


	function cifrar($textoPlano){
		$respuesta = "";
    	for ($i=0; $i < strlen($textoPlano->textoPlano) ; $i++) { 
    		$index = ($this->posicion($textoPlano->textoPlano[$i])+$this->saltos)%strlen($this->alfabeto);
    		$respuesta .= strpos($this->alfabeto,$textoPlano->textoPlano[$i])!==false? $this->alfabeto[$index] : $textoPlano->textoPlano[$i];
    	}
    	return $respuesta;
	}

	private function posicion($c){
    	return strpos($this->alfabeto,$c);
	}
	
}
?>
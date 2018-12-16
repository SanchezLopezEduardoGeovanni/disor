<?php 
class CifradoInversoSaltos{

	private $saltos;

	function __construct($saltos){
		$this->modificarSaltos($saltos);
	}

	function modificarSaltos($nuevoSalto){
		$this->saltos = $nuevoSalto <= 0 ? 1 : $nuevoSalto;
	}

	function cifrar ($textoPlano){
    	$arregloSeparadas = $this->separarPalabra($textoPlano->textoPlano,$this->saltos);
    	$respuesta = "";
    	for ($i=0; $i < count($arregloSeparadas) ; $i++) { 
    		if(strlen($arregloSeparadas[$i]) == $this->saltos ) $respuesta .= strrev($arregloSeparadas[$i]);
    		else $respuesta .= $arregloSeparadas[$i];
    	}
    	return $respuesta;
    }

    private function separarPalabra($texto,$saltos){
    	$respuesta = array();
    	$palabra = "";
    	for ($i=0; $i < strlen($texto) ; $i++) {
    		if($i%$saltos==0 && $i!=0){
    			array_push($respuesta,$palabra);
    			$palabra = $texto[$i];
    		}else $palabra .= $texto[$i];
    	}
    	array_push($respuesta,$palabra);
    	return $respuesta;
    }
	
}
?>
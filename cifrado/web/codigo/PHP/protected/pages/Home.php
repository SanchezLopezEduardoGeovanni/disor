<?php

require_once('D:/Documentos/PradoProjects/CifradoCesar/protected/pages/Cifrado/Cifrador.php');
require_once('D:/Documentos/PradoProjects/CifradoCesar/protected/pages/Cifrado/CifradoCesar.php');
require_once('D:/Documentos/PradoProjects/CifradoCesar/protected/pages/Cifrado/CifradoInverso.php');
require_once('D:/Documentos/PradoProjects/CifradoCesar/protected/pages/Cifrado/CifradoInversoSaltos.php');
require_once('D:/Documentos/PradoProjects/CifradoCesar/protected/pages/Textos/TextoPlano.php');
require_once('D:/Documentos/PradoProjects/CifradoCesar/protected/pages/Textos/Alfabetos.php');

class Home extends TPage
{

	private $textoPlano,$cifrador,$cesar,$inverso,$inversoSaltos;

	public function onLoad($param){
		parent::onLoad($param);
        $this->textoPlano= $this->getGlobalState('TextoPlano');
        $this->cifrador=$this->getGlobalState('Cifrador');
        $this->cesar = $this->getGlobalState('Cesar');
        $this->inverso = $this->getGlobalState('Inverso');
        $this->inversoSaltos = $this->getGlobalState('inversoSaltos');
        echo $param;
	}

    public function textChanged($sender,$param){
        $this->getGlobalState('TextoPlano')->textoPlano->actualizacionTexto($this->tbTextoPlano->Text);
        //$this->textoPlano->actualizacionTexto($this->tbTextoPlano->Text);
    }
 
    public function cambioSaltoCesar($sender,$param){
        $this->getGlobalState('Cesar')->modificarSaltos(intval($this->saltosCesar->Text));
    	//$this->cesar->modificarSaltos(intval($this->saltosCesar->Text));
    }

    //public function cambioSaltoInverso($sender,$param){
    	//$this->resultadoInversoSaltos->Text = $this->textoPlanoObject->getCifradoPorInversoConSaltos(intval($this->saltosInverso->Text));
    //}

}
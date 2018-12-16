<?php

require_once('D:/Documentos/PradoProjects/CifradoCesar/protected/pages/Cifrado/Cifrador.php');
require_once('D:/Documentos/PradoProjects/CifradoCesar/protected/pages/Cifrado/CifradoCesar.php');
require_once('D:/Documentos/PradoProjects/CifradoCesar/protected/pages/Cifrado/CifradoInverso.php');
require_once('D:/Documentos/PradoProjects/CifradoCesar/protected/pages/Cifrado/CifradoInversoSaltos.php');
require_once('D:/Documentos/PradoProjects/CifradoCesar/protected/pages/Textos/TextoPlano.php');
require_once('D:/Documentos/PradoProjects/CifradoCesar/protected/pages/Textos/Alfabetos.php');

$frameworkPath='D:\Descargas\prado-3.3.3\prado-3.3.3\framework\prado.php';

// The following directory checks may be removed if performance is required
$basePath=dirname(__FILE__);
$assetsPath=$basePath.'/assets';
$runtimePath=$basePath.'/protected/runtime';

if(!is_file($frameworkPath))
	die("Unable to find prado framework path $frameworkPath.");
if(!is_writable($assetsPath))
	die("Please make sure that the directory $assetsPath is writable by Web server process.");
if(!is_writable($runtimePath))
	die("Please make sure that the directory $runtimePath is writable by Web server process.");


require_once($frameworkPath);
$application=new TApplication;
$textoPlano= new TextoPlano(Alfabetos::getAlfabetoEspaniol(),"");
$cifrador=new Cifrador($textoPlano);
$cesar = new CifradoCesar(0,$textoPlano->alfabeto);
$inverso = new CifradoInverso();
$inversoSaltos = new CifradoInversoSaltos(0);
$application->setGlobalState('TextoPlano',$textoPlano);
$application->setGlobalState('Cifrador',$cifrador);
$application->setGlobalState('Cesar',$cesar);
$application->setGlobalState('Inverso',$inverso);
$application->setGlobalState('InversoSaltos',$inversoSaltos);
$application->run();

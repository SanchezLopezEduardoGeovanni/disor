<?php 
class Alfabetos{
	static function getAlfabetoEspaniol(){
		$lower = "aábcdeéfghiíjklmnñoópqrstuúvwxyz";
		return $lower.strtoupper($lower);
	}
}

?>
class TextoPlano

	attr_accessor :textoPlano, :alfabeto

	def initialize alfabeto, textoPlano
		@alfabeto = alfabeto
		@textoPlano = textoPlano
	end

	def actualizacionTexto nuevo
		@textoPlano = nuevo
	end

end
require_relative("../Textos/TextoCifrado.rb")

class Cifrador

	def initialize textoPlano
		@textoPlano = textoPlano
	end

	def cifrar metodo
		TextoCifrado.new (metodo.cifrar(@textoPlano))
	end

end
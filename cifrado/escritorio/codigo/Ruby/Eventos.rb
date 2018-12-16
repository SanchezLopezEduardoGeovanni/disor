require_relative './Textos/Alfabetos.rb'
require_relative './Textos/TextoCifrado.rb'
require_relative './Textos/TextoPlano.rb'
require_relative './Cifrado/CifradoCesar.rb'
require_relative './Cifrado/Cifrador.rb'
require_relative './Cifrado/CifradoInverso.rb'
require_relative './Cifrado/CifradoInversoSaltos.rb'

class Eventos

	def initialize ventana
		@ventana = ventana
		@textoPlano = TextoPlano.new Alfabetos.getAlfabetoEspaniol, @ventana.textoPlano.text
		@cifrador = Cifrador.new @textoPlano
		@cesar = CifradoCesar.new  @ventana.avanceCesar.text.to_i, Alfabetos.getAlfabetoEspaniol
		@inverso = CifradoInverso.new 
		@inversoSaltos = CifradoInversoSaltos.new @ventana.avanceInversoSaltos.text.to_i
	end

	def cambiaTextoPlano
		@textoPlano.actualizacionTexto @ventana.textoPlano.text
		actualizaResultadoCesar
		actualizaResultadoInverso
		actualizaResultadoInversoSaltos
	end

	def cambiaAvanceCesar
		@cesar.modificarSaltos @ventana.avanceCesar.text.to_i
		actualizaResultadoCesar
	end

	def cambiaAvanceInversoPorSaltos
		@inversoSaltos.modificarSaltos @ventana.avanceInversoSaltos.text.to_i
		actualizaResultadoInversoSaltos
	end

	private 

	def actualizaResultadoCesar
		@ventana.resultadoCesar.text = (@cifrador.cifrar @cesar).textoCifrado
	end

	def actualizaResultadoInverso
		@ventana.resultadoInverso.text = (@cifrador.cifrar @inverso).textoCifrado
	end

	def actualizaResultadoInversoSaltos
		@ventana.resultadoInversoSaltos.text = (@cifrador.cifrar @inversoSaltos).textoCifrado
	end

end
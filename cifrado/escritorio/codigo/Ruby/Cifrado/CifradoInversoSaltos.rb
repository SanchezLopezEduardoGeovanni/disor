class CifradoInversoSaltos

	attr_reader :saltos

	def initialize saltos
		modificarSaltos saltos
	end

	def modificarSaltos nuevoSalto
		@saltos = nuevoSalto <= 0 ? 1 : nuevoSalto
	end

	def cifrar textoPlano
		arregloSeparadas = separarPalabra(textoPlano.textoPlano, @saltos)
		respuesta = ""
		arregloSeparadas.length.times do |i|
			if arregloSeparadas[i].length == saltos
				respuesta += arregloSeparadas[i].reverse
			else
				respuesta += arregloSeparadas[i]
			end
		end
		respuesta
	end

	private

	def separarPalabra texto, saltos
		respuesta = Array.new
		palabra = ""
		texto.length.times do |i|
			if i%saltos==0 and i != 0
				respuesta.push(palabra)
				palabra=texto[i]
			else
				palabra+=texto[i]
			end
		end
		respuesta.push(palabra)
	end

end
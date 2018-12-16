class CifradoCesar

	def initialize saltos, alfabeto
		@saltos = saltos
		@alfabeto = alfabeto
	end

	def modificarSaltos nuevoSalto
		@saltos = nuevoSalto
	end

	def cifrar textoPlano
		respuesta=""
		textoPlano.textoPlano.length.times do |i|
		   	respuesta += (@alfabeto.include?textoPlano.textoPlano[i]) ? @alfabeto[(posicion(textoPlano.textoPlano[i])+@saltos)% @alfabeto.length] : textoPlano.textoPlano[i]
		end
		respuesta
	end

	private

	def posicion c
		@alfabeto.index(c)
	end

end
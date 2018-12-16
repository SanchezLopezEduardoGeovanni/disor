require_relative("./Cifrado/CifradoCesar.rb")

class FormCesar
  include Inesita::Component

  def init
  	@cifradoCesar = CifradoCesar.new 0,store.textoPlano.alfabeto
  end

  def cambioSaltos e
  	@cifradoCesar.modificarSaltos e.target.value.to_i
  	render!
  end

  def render
    div do
    	label do 
    		text 'Cifrado Cesar'
    	end
    	div do
	      label do
	        text 'Saltos'          
	      end
	      input.saltos! type: "text", onkeyup: method(:cambioSaltos)
	      label do
	        text 'Resultado'          
	      end
	      input type: "text", value: store.cifrador.cifrar(@cifradoCesar).textoCifrado
	    end
    end
  end
end
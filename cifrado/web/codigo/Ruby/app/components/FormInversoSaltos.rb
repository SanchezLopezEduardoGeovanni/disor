require_relative("./Cifrado/CifradoInversoSaltos.rb")

class FormInversoSaltos
  include Inesita::Component

  def init
  	@cifradoInversoSaltos = CifradoInversoSaltos.new 0
  end

  def cambioSaltos e
  	@cifradoInversoSaltos.modificarSaltos e.target.value.to_i
  	render!
  end

  def render
    div do
    	label do 
    		text 'Cifrado Inverso con saltos'
    	end
    	div do
	      label do
	        text 'Saltos'          
	      end
	      input type: "text", onkeyup: method(:cambioSaltos)
	      label do
	        text 'Resultado'          
	      end
	      input type: "text", value: store.cifrador.cifrar(@cifradoInversoSaltos).textoCifrado
	    end
    end
  end
end
require_relative("./Cifrado/CifradoInverso.rb")

class FormInverso
  include Inesita::Component

  def init
  	@cifradoInverso = CifradoInverso.new
  end

  def render
    div do
      label do
        text 'Cifrado Inverso'          
      end
      div do
        label do
          text 'Resultado'          
        end
        input type: "text", value: store.cifrador.cifrar(@cifradoInverso).textoCifrado
      end
    end
  end
end
require_relative("./components/Textos/TextoPlano.rb")
require_relative("./components/Textos/Alfabetos.rb")
require_relative("./components/Cifrado/Cifrador.rb")

class Store
  include Inesita::Injection

  attr_accessor :textoPlano,:cifrador

  def initialize 
  	@textoPlano = TextoPlano.new Alfabetos.getAlfabetoEspaniol,""
    @cifrador = Cifrador.new @textoPlano
  end

  def actualizarTexto texto
    @textoPlano.actualizacionTexto texto
  end

end

class Home
  include Inesita::Component


  def cambioTextoPlano e
    store.actualizarTexto e.target.value
    render!
  end

  def render
    div do
      label do
        text 'Texto plano'          
      end
      input type: "text", onkeyup: method(:cambioTextoPlano)
      component FormCesar
      component FormInverso
      component FormInversoSaltos
      #component Counter, props: {header: 'This is a sample counter'}
    end
  end
end

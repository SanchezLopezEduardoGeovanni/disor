class NavBar
  include Inesita::Component

  def render
    nav.navbar.navbar_expand_lg.navbar_light.bg_light do
      span.navbar_brand do
        text 'Cifrador'
      end
    end
  end
end

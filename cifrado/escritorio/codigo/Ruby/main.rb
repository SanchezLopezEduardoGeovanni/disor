#!/usr/bin/env ruby

require "gtk3"
require_relative 'Eventos.rb'

class Principal < Gtk::Window

	attr_accessor :textoPlano, :resultadoCesar, :resultadoInverso, :resultadoInversoSaltos, :avanceCesar, :avanceInversoSaltos

	def initialize
		super("Cifrado Cesar")
		set_border_width(10)
		hbox = Gtk::Box.new(:vertical, 3)
		boxContenedor = Gtk::Box.new(:horizontal, 3)
		boxCesar = Gtk::Box.new(:vertical, 5)
		boxInverso = Gtk::Box.new(:vertical, 3)
		boxInveroSaltos = Gtk::Box.new(:vertical, 5)
		@textoPlano = Gtk::Entry.new
		@avanceCesar = Gtk::Entry.new
		@resultadoCesar = Gtk::Entry.new
		@resultadoInverso = Gtk::Entry.new
		@avanceInversoSaltos = Gtk::Entry.new
		@resultadoInversoSaltos = Gtk::Entry.new
		#Cesar
		boxCesar.add(Gtk::Label.new("Cifrado Cesar"))
		boxCesar.add(Gtk::Label.new("Avance"))
		boxCesar.add(@avanceCesar)
		boxCesar.add(Gtk::Label.new("Resultado"))
		boxCesar.add(@resultadoCesar)
		#Inverso
		boxInverso.add(Gtk::Label.new("Cifrado inverso"))
		boxInverso.add(Gtk::Label.new("Resultado"))
		boxInverso.add(@resultadoInverso)
		#InversoSaltos
		boxInveroSaltos.add(Gtk::Label.new("Inverso con saltos"))
		boxInveroSaltos.add(Gtk::Label.new("Saltos"))
		boxInveroSaltos.add(@avanceInversoSaltos)
		boxInveroSaltos.add(Gtk::Label.new("Resultado"))
		boxInveroSaltos.add(@resultadoInversoSaltos)
		#Contenedor
		boxContenedor.add(boxCesar)
		boxContenedor.add(boxInverso)
		boxContenedor.add(boxInveroSaltos)
		#Principal
		hbox.add(Gtk::Label.new("Texto plano"))
		hbox.add(@textoPlano)
		hbox.add(boxContenedor)
		add(hbox)
		signal_connect("delete-event") { |_widget| Gtk.main_quit }
		show_all
	
		#Eventos
		handler = Eventos.new(self)
		@textoPlano.signal_connect("key_release_event"){handler.cambiaTextoPlano}
		@avanceCesar.signal_connect("key_release_event"){handler.cambiaAvanceCesar}
		@avanceInversoSaltos.signal_connect("key_release_event"){handler.cambiaAvanceInversoPorSaltos}
	end

end

exit if defined?(Ocra)
Principal.new
Gtk.main
#!/usr/bin/python3 -W ignore

import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

class ourwindow(Gtk.Window):

    def __init__(self):
        Gtk.Window.__init__(self, title="My Hello World Program")
        Gtk.Window.set_default_size(self, 400,325)
        Gtk.Window.set_position(self, Gtk.WindowPosition.CENTER)

        button1 = Gtk.Button("Hello, World!")
        button1.connect("clicked", self.whenbutton1_clicked)

        self.add(button1)
        
    def whenbutton1_clicked(self, button):
    		print ("clicked: Hello, World!")

window = ourwindow()        
window.connect("delete-event", Gtk.main_quit)
window.show_all()
Gtk.main() 


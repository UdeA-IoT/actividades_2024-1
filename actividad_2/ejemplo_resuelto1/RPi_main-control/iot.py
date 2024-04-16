from _thread import start_new_thread

from kivy.clock import mainthread
from kivy.properties import StringProperty, BooleanProperty
from kivy.uix.screenmanager import Screen

from comm import Listener, Publisher

class IoT(Screen):
    estadoLuz = BooleanProperty(False)
    imagen_luz = StringProperty('light_off.png')

    def __init__(self, **kw):
        super().__init__(**kw)
        escuchador = Listener(self)
        try:
            start_new_thread(escuchador.start, ())
        except Exception as ex:
            print("Error: no se pudo iniciar el hilo. ex: {}".format(ex))

    def alternarLuz(self):
        if not(self.estadoLuz):
            Publisher.send_message('{"lamp":1}')
            self.imagen_luz = 'light_on.png'
        else:
            Publisher.send_message('{"lamp":0}')
            self.imagen_luz = 'light_off.png'
        self.estadoLuz = not self.estadoLuz
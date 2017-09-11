#include "inicia.h"
#include <allegro.h>

void inicia_allegro(int ANCHO_ , int ALTO_){
   allegro_init();
   install_keyboard();

   set_color_depth(32);
   set_gfx_mode(GFX_AUTODETECT_WINDOWED, ANCHO_, ALTO_, 0, 0);
}



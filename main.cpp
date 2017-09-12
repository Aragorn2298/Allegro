#include <allegro.h>
#include "inicia.h"

int main ()
{
        allegro_init();
        inicia_allegro(1360,799);
        install_mouse();

        BITMAP *buffer = create_bitmap(1360,799);
        BITMAP *fondo1 = load_bitmap("Fondo1.bmp",NULL);
        BITMAP *fondo2 = load_bitmap("Fondo2.bmp",NULL);
        BITMAP *fondo3 = load_bitmap("Fondo3.bmp",NULL);
        BITMAP *fondo4 = load_bitmap("Fondo4.bmp",NULL);
        BITMAP *cursor = load_bitmap("cursor.bmp",NULL);

        bool salida = false;
        while(!salida)
        {
            if(mouse_x > 170 && mouse_x < 395 &&
                mouse_y > 386 && mouse_y < 488)
            {
                blit(fondo2,buffer,0,0,0,0,1360,799);
                if(mouse_b & 1)
                {
                    salida=true;
                }
            }else if(mouse_x > 176 && mouse_x <681 &&
                         mouse_y >503 && mouse_y < 603)
                {
                    blit(fondo3,buffer,0,0,0,0,1360,799);
                    if(mouse_b & 1)
                    {
                    salida=true;
                    }
                }else if(mouse_x>177 && mouse_x < 367 &&
                         mouse_y >643 && mouse_y < 735)
                {
                    blit(fondo4,buffer,0,0,0,0,1360,799);
                    if(mouse_b & 1)
                    {
                    salida=true;
                    }
                }else blit(fondo1,buffer,0,0,0,0,1360,799);

                masked_blit(cursor,buffer,0,0,mouse_x,mouse_y,330,418);
                blit(buffer,screen,0,0,0,0,1360,799);

    }
    destroy_bitmap(buffer);
    return 0;
}
END_OF_MAIN ();

#include <allegro.h>
#include <iostream>
#include "inicia.h"
#include <stdio.h>
#define BACKGROUND_FILE     "background.png"

using namespace std;
// Variables Globales
int y = 330;        // coordenada y de megaman
int x = 60;         // coordenada x de megaman
int i = 1;          // coordenada y de megaman cayendo del cielo
int pos = 1;        // pos 1 = megaman a la derecha , pos 2 = megaman a la izquierda
//int R=0;
int poscorrdisp=1; // varable para el contro de dibujo de megaman corriendo y disparando
int bb = 350;
bool disparo = false;

BITMAP *bala;

// Variables para guardar imagenes de megaman
BITMAP *inicio_1;          BITMAP *megaman_2a;                        BITMAP *corrdisp_1;   BITMAP *corrdisp_1a;
BITMAP *inicio_2;          BITMAP *megamancorr_1a;                    BITMAP *corrdisp_2;   BITMAP *corrdisp_2a;
BITMAP *megaman_1;         BITMAP *megamancorr_2a;                    BITMAP *corrdisp_3;   BITMAP *corrdisp_3a;
BITMAP *megaman_2;         BITMAP *megamancorr_3a;                    BITMAP *corrdisp_4;   BITMAP *corrdisp_4a;
BITMAP *megaman_3;         BITMAP *megamancorr_5a;                    BITMAP *corrdisp_5;   BITMAP *corrdisp_5a;
BITMAP *megaman_4;         BITMAP *megamancorr_4a;                    BITMAP *corrdisp_6;   BITMAP *corrdisp_6a;
BITMAP *megamancorr_1;     BITMAP *megamancorr_6a;                    BITMAP *corrdisp_7;   BITMAP *corrdisp_7a;
BITMAP *megamancorr_2;     BITMAP *megamancorr_7a;                    BITMAP *corrdisp_8;   BITMAP *corrdisp_8a;
BITMAP *megamancorr_3;     BITMAP *megamancorr_8a;                    BITMAP *corrdisp_9;   BITMAP *corrdisp_9a;
BITMAP *megamancorr_4;     BITMAP *megamancorr_9a;                    BITMAP *corrdisp_10;  BITMAP *corrdisp_10a;
BITMAP *megamancorr_5;     BITMAP *megamancorr_10a;
BITMAP *megamancorr_6;     BITMAP *megcd_1;    BITMAP *megcd_1a;
BITMAP *megamancorr_7;     BITMAP *megcd_2;    BITMAP *megcd_2a;
BITMAP *megamancorr_8;     BITMAP *cordisp_1;  BITMAP *cordisp_2;
BITMAP *megamancorr_9;     BITMAP *megdisp_1;  BITMAP *megdisp_1a;
BITMAP *megamancorr_10;

BITMAP *brica_1;   BITMAP *brica_1a;    BITMAP *golpe_1;   BITMAP *golpe_1a;
BITMAP *brica_2;   BITMAP *brica_2a;    BITMAP *golpe_2;   BITMAP *golpe_2a;
BITMAP *brica_3;   BITMAP *brica_3a;    BITMAP *golpe_3;   BITMAP *golpe_3a;
BITMAP *brica_4;   BITMAP *brica_4a;    BITMAP *golpe_4;   BITMAP *golpe_4a;
BITMAP *brica_5;   BITMAP *brica_5a;    BITMAP *golpe_5;   BITMAP *golpe_5a;
BITMAP *brica_6;   BITMAP *brica_6a;    BITMAP *golpe_6;   BITMAP *golpe_6a;
BITMAP *brica_7;   BITMAP *brica_7a;

 BITMAP *bmp;


void Inicio_1(void)    // Funcion que muestra la animacion inicial (Megaman cayendo del cielo)
{

     blit(inicio_1,screen,0,0,x,-30+i,85,124);
     rest(0);
     i++;

}
void Inicio_2(void)   // megaman parpadeando
{
     blit(inicio_2,screen,0,0,x,y,85,93);
     rest(200);
     blit(megaman_1,screen,0,0,x,y,85,93);
     rest(200);
     blit(megaman_2,screen,0,0,x,y,85,93);
     rest(200);
     blit(megaman_3,screen,0,0,x,y,85,93);
     rest(200);
     blit(megaman_4,screen,0,0,x,y,85,93);
     rest(200);
     blit(megaman_3,screen,0,0,x,y,85,93);
     rest(200);
     blit(megaman_2,screen,0,0,x,y,85,93);

     i = 0;
}

void pintarbala(void)
{
     if(disparo)
     {
        if(pos == 1)
            bb+= 60;
        else
           bb-=60;

         blit(bala,screen,0,0,bb+x,360,21,20);

     }
     if (x+bb > 1300)
         {
              bb =0;
              disparo = false;
         }
     if (x+bb < 0)
     {
          bb =0;
          disparo = false;
     }
}


void diparar_parado1(void) // Disparar a la derecha
{

    BITMAP *borrar = create_bitmap(1300, 450);

    for(int j = 0 ; j<=3 ; j++) {

            pintarbala();
            blit(megdisp_1,screen,0,0,x,y,85,93);
            rest(120);
            blit(borrar,screen,0,0,0,0,1300, 450);
      }

    //pintarbala();
}
void diparar_parado2(void)  // Disparar a la izquierda
{

    BITMAP *borrar = create_bitmap(1300, 450);
    for(int j = 0 ; j<=4 ; j++) {

           pintarbala();
           blit(megdisp_1a,screen,0,0,x,y,85,93);
           rest(120);
           blit(borrar,screen,0,0,0,0,1300, 450);
    }



}

void brincar1(void)
{
     BITMAP *borrar = create_bitmap(1300, 450);
     while(key[KEY_S])
     {

          pintarbala();
          x += 30;
          blit(brica_1,screen,0,0,x,y-20,85,111);
          rest(120);
          blit(borrar,screen,0,0,0,0,1300, 450);

          pintarbala();
          x += 30;
          y -= 30;
          blit(brica_2,screen,0,0,x,y-20,85,111);
          rest(120);
          blit(borrar,screen,0,0,0,0,1300, 450);

          pintarbala();
          x += 30;
          y -= 30;
          blit(brica_3,screen,0,0,x,y-20,85,111);
          rest(120);
          blit(borrar,screen,0,0,0,0,1300, 450);

          pintarbala();
          x += 30;
          y -= 30;
          blit(brica_4,screen,0,0,x,y-20,85,111);
          rest(120);
          blit(borrar,screen,0,0,0,0,1300, 450);

          pintarbala();
          x += 30;
          y += 30;
          blit(brica_5,screen,0,0,x,y-20,85,111);
          rest(120);
          blit(borrar,screen,0,0,0,0,1300, 450);

          pintarbala();
          x += 30;
          y += 30;
          blit(brica_6,screen,0,0,x,y-20,85,111);
          rest(120);
          blit(borrar,screen,0,0,0,0,1300, 450);

          pintarbala();
          x += 30;
          y += 30;
          blit(brica_7,screen,0,0,x,y-25,85,111);
          rest(120);
          blit(borrar,screen,0,0,0,0,1300, 450);
          }
}


void brincar2(void)
{
     BITMAP *borrar = create_bitmap(1300, 450);
     while(key[KEY_S])
     {
          pintarbala();
          x -= 30;
          blit(brica_1a,screen,0,0,x,y-20,85,111);
          rest(120);
          blit(borrar,screen,0,0,0,0,1300, 450);

          pintarbala();
          x -= 30;
          y -= 30;
          blit(brica_2a,screen,0,0,x,y-20,85,111);
          rest(120);
          blit(borrar,screen,0,0,0,0,1300, 450);

          pintarbala();
          x -= 30;
          y -= 30;
          blit(brica_3a,screen,0,0,x,y-20,85,111);
          rest(120);
          blit(borrar,screen,0,0,0,0,1300, 450);

          pintarbala();
          x -= 30;
          y -= 30;
          blit(brica_4a,screen,0,0,x,y-20,85,111);
          rest(120);
          blit(borrar,screen,0,0,0,0,1300, 450);

          pintarbala();
          x -= 30;
          y += 30;
          blit(brica_5a,screen,0,0,x,y-20,85,111);
          rest(120);
          blit(borrar,screen,0,0,0,0,1300, 450);

          pintarbala();
          x -= 30;
          y += 30;
          blit(brica_6a,screen,0,0,x,y-20,85,111);
          rest(120);
          blit(borrar,screen,0,0,0,0,1300, 450);

          pintarbala();
          x -= 30;
          y += 30;
          blit(brica_7a,screen,0,0,x,y-25,85,111);
          rest(120);
          blit(borrar,screen,0,0,0,0,1300, 450);
          }

}

void brincar_parado1(void)
{

     BITMAP *borrar = create_bitmap(1300, 450);
     int j = 0;

     if(key[KEY_S])
     {

          pintarbala();
          if(key[KEY_RIGHT]) j+=25;
          blit(brica_1,screen,0,0,x+j,y-20,85,111);
          rest(120);
          blit(borrar,screen,0,0,0,0,1300, 450);
          if(key[KEY_S])
          {

               pintarbala();
               if(key[KEY_RIGHT]) j+=25;
               y -= 30;
               blit(brica_2,screen,0,0,x+j,y-20,85,111);
               rest(120);
               blit(borrar,screen,0,0,0,0,1300, 450);
               if(key[KEY_S])
               {

                     pintarbala();
                     if(key[KEY_RIGHT]) j+=25;
                     y -= 30;
                     blit(brica_3,screen,0,0,x+j,y-20,85,111);
                     rest(120);
                     blit(borrar,screen,0,0,0,0,1300, 450);
                     if(key[KEY_S])
                     {


                          pintarbala();
                          if(key[KEY_RIGHT]) j+=25;
                          y -= 30;
                          blit(brica_4,screen,0,0,x+j,y-20,85,111);
                          rest(120);
                          blit(borrar,screen,0,0,0,0,1300, 450);
                          if(key[KEY_S])
                          {

                                  pintarbala();
                                  if(key[KEY_RIGHT]) j+=25;
                                  y += 30;
                                  blit(brica_5,screen,0,0,x+j,y-20,85,111);
                                  rest(120);
                                  blit(borrar,screen,0,0,0,0,1300, 450);
                                  if(key[KEY_S])
                                  {

                                         pintarbala();
                                         if(key[KEY_RIGHT]) j+=25;
                                         y += 30;
                                         blit(brica_6,screen,0,0,x+j,y-20,85,111);
                                         rest(120);
                                         blit(borrar,screen,0,0,0,0,1300, 450);
                                         if(key[KEY_S])
                                         {

                                               pintarbala();
                                               if(key[KEY_RIGHT]) j+=25;
                                               y += 30;
                                               blit(brica_7,screen,0,0,x+j,y-20,85,111);
                                               rest(120);
                                               blit(borrar,screen,0,0,0,0,1300, 450);

                                         }

                                  }
                                  else
                                  {



                                       if(key[KEY_RIGHT]) j+=25;
                                       blit(borrar,screen,0,0,0,0,1300, 450);
                                       pintarbala();
                                       y += 30;
                                       blit(brica_3,screen,0,0,x+j,y-20,85,111);
                                       rest(120);


                                       blit(borrar,screen,0,0,0,0,1300, 450);
                                       y += 30;
                                       pintarbala();
                                       blit(brica_2,screen,0,0,x+j,y-20,85,111);
                                       rest(120);


                                       blit(borrar,screen,0,0,0,0,1300, 450);
                                       blit(brica_1,screen,0,0,x+j,y-20,85,111);
                                       pintarbala();
                                       rest(120);

                                       blit(borrar,screen,0,0,0,0,1300, 450);

                                  }

                          }
                          else
                          {


                              pintarbala();
                              if(key[KEY_RIGHT]) j+=25;
                              y += 30;
                              blit(brica_3,screen,0,0,x+j,y-20,85,111);
                              rest(120);
                              blit(borrar,screen,0,0,0,0,1300, 450);

                              pintarbala();
                              y += 30;
                              blit(brica_2,screen,0,0,x+j,y-20,85,111);
                              rest(120);
                              blit(borrar,screen,0,0,0,0,1300, 450);

                              pintarbala();
                              y += 30;
                              blit(brica_1,screen,0,0,x+j,y-20,85,111);
                              rest(120);
                              blit(borrar,screen,0,0,0,0,1300, 450);

                          }

                     }
                     else
                     {

                         pintarbala();
                         if(key[KEY_RIGHT]) j+=25;
                         y += 30;
                         blit(brica_2,screen,0,0,x+j,y-20,85,111);
                         rest(120);
                         blit(borrar,screen,0,0,0,0,1300, 450);

                         pintarbala();
                         y += 30;
                         blit(brica_1,screen,0,0,x+j,y-20,85,111);
                         rest(120);
                         blit(borrar,screen,0,0,0,0,1300, 450);

                     }

               }
               else
               {

                  pintarbala();
                  if(key[KEY_RIGHT]) j+=25;
                  y += 30;
                  blit(brica_1,screen,0,0,x+j,y-20,85,111);
                  rest(120);
                  blit(borrar,screen,0,0,0,0,1300, 450);
               }
          }
          else
          {


             pintarbala();
             if(key[KEY_RIGHT]) j+=25;
             blit(brica_1,screen,0,0,x+j,y-20,85,111);
             rest(120);
             blit(borrar,screen,0,0,0,0,1300, 450);
          }
     }

     x = x+j;
     y = 330;
     //pintarbala();

}



void brincar_parado2(void)
{

     BITMAP *borrar = create_bitmap(1300, 450);
     int j = 0;
     if(key[KEY_S])
     {
          pintarbala();
          blit(brica_1a,screen,0,0,x,y-20,85,111);
          rest(120);
          blit(borrar,screen,0,0,0,0,1300, 450);
          if(key[KEY_S])
          {
               pintarbala();
               if(key[KEY_LEFT]) j-=25;
               y -= 30;
               blit(brica_2a,screen,0,0,x+j,y-20,85,111);
               rest(120);
               blit(borrar,screen,0,0,0,0,1300, 450);
               if(key[KEY_S])
               {

                     pintarbala();
                     if(key[KEY_LEFT]) j-=25;
                     y -= 30;
                     blit(brica_3a,screen,0,0,x+j,y-20,85,111);
                     rest(120);
                     blit(borrar,screen,0,0,0,0,1300, 450);
                     if(key[KEY_S])
                     {

                          pintarbala();
                          if(key[KEY_LEFT]) j-=25;
                          y -= 30;
                          blit(brica_4a,screen,0,0,x+j,y-20,85,111);
                          rest(120);
                          blit(borrar,screen,0,0,0,0,1300, 450);
                          if(key[KEY_S])
                          {

                                  pintarbala();
                                  if(key[KEY_LEFT]) j-=25;
                                  y += 30;
                                  blit(brica_5a,screen,0,0,x+j,y-20,85,111);
                                  rest(120);
                                  blit(borrar,screen,0,0,0,0,1300, 450);
                                  if(key[KEY_S])
                                  {

                                         pintarbala();
                                         if(key[KEY_LEFT]) j-=25;
                                         y += 30;
                                         blit(brica_6a,screen,0,0,x+j,y-20,85,111);
                                         rest(120);
                                         blit(borrar,screen,0,0,0,0,1300, 450);
                                         if(key[KEY_S])
                                         {

                                               pintarbala();
                                               if(key[KEY_LEFT]) j-=25;
                                               y += 30;
                                               blit(brica_7a,screen,0,0,x+j,y-20,85,111);
                                               rest(120);
                                               blit(borrar,screen,0,0,0,0,1300, 450);

                                         }

                                  }
                                  else
                                  {

                                       if(key[KEY_LEFT]) j-=25;
                                       blit(borrar,screen,0,0,0,0,1300, 450);
                                       y += 30;
                                       pintarbala();

                                       blit(brica_3a,screen,0,0,x+j,y-20,85,111);
                                       rest(120);
                                       blit(borrar,screen,0,0,0,0,1300, 450);
                                       y += 30;
                                       pintarbala();
                                       blit(brica_2a,screen,0,0,x+j,y-20,85,111);
                                       rest(120);
                                       blit(borrar,screen,0,0,0,0,1300, 450);

                                       pintarbala();
                                       blit(brica_1a,screen,0,0,x+j,y-20,85,111);
                                       rest(120);
                                       blit(borrar,screen,0,0,0,0,1300, 450);

                                  }

                          }
                          else
                          {

                              pintarbala();
                              if(key[KEY_LEFT]) j-=25;
                              y += 30;
                              blit(brica_3a,screen,0,0,x+j,y-20,85,111);
                              rest(120);
                              blit(borrar,screen,0,0,0,0,1300, 450);

                              pintarbala();
                              y += 30;
                              blit(brica_2a,screen,0,0,x+j,y-20,85,111);
                              rest(120);
                              blit(borrar,screen,0,0,0,0,1300, 450);

                              pintarbala();
                              y += 30;
                              blit(brica_1a,screen,0,0,x+j,y-20,85,111);
                              rest(120);
                              blit(borrar,screen,0,0,0,0,1300, 450);

                          }

                     }
                     else
                     {

                         pintarbala();
                         if(key[KEY_LEFT]) j-=25;
                         y += 30;
                         blit(brica_2a,screen,0,0,x+j,y-20,85,111);
                         rest(120);
                         blit(borrar,screen,0,0,0,0,1300, 450);

                         pintarbala();
                         y += 30;
                         blit(brica_1a,screen,0,0,x+j,y-20,85,111);
                         rest(120);
                         blit(borrar,screen,0,0,0,0,1300, 450);

                     }

               }
               else
               {

                  pintarbala();
                  if(key[KEY_LEFT]) j-=25;
                  y += 30;
                  blit(brica_1a,screen,0,0,x+j,y-20,85,111);
                  rest(120);
                  blit(borrar,screen,0,0,0,0,1300, 450);
               }
          }
          else
          {

             pintarbala();
             if(key[KEY_LEFT]) j-=25;
             blit(brica_1a,screen,0,0,x+j,y-20,85,111);
             rest(120);
             blit(borrar,screen,0,0,0,0,1300, 450);
          }
     }

     y = 330;
     x = x+j;
     //blit(borrar,screen,0,0,0,0,1300, 450);

}

void dispar_corriendo1(void) // Correr y disparar a la derecha
{
       BITMAP *borrar = create_bitmap(1300, 450);
       while(key[KEY_D] )

       {

               disparo = true;
               pintarbala();
               x += 20;
               blit(corrdisp_8,screen,0,0,x,y,92,93);
               rest(120);
               blit(borrar,screen,0,0,0,0,1300, 450);

               pintarbala();
               x += 20;
               blit(corrdisp_9,screen,0,0,x,y,92,93);
               rest(120);
               blit(borrar,screen,0,0,0,0,1300, 450);

               pintarbala();
               x += 20;
               blit(corrdisp_10,screen,0,0,x,y,92,93);
               rest(120);
               blit(borrar,screen,0,0,0,0,1300, 450);

               if (key[KEY_D])
               {

                     pintarbala();
                     x += 20;
                     blit(corrdisp_1,screen,0,0,x,y,92,93);
                     rest(120);
                     blit(borrar,screen,0,0,0,0,1300, 450);

                     pintarbala();
                     x += 20;
                     blit(corrdisp_2,screen,0,0,x,y,92,93);
                     rest(120);
                     blit(borrar,screen,0,0,0,0,1300, 450);

                     pintarbala();
                     x += 20;
                     blit(corrdisp_3,screen,0,0,x,y,92,93);
                     rest(120);
                     blit(borrar,screen,0,0,0,0,1300, 450);

                     if (key[KEY_D])
                     {

                          pintarbala();
                          x += 20;
                          blit(corrdisp_4,screen,0,0,x,y,92,93);
                          rest(120);
                          blit(borrar,screen,0,0,0,0,1300, 450);

                          pintarbala();
                          x += 20;
                          blit(corrdisp_5,screen,0,0,x,y,92,93);
                          rest(120);
                          blit(borrar,screen,0,0,0,0,1300, 450);

                          pintarbala();
                          x += 20;
                          blit(corrdisp_6,screen,0,0,x,y,92,93);
                          rest(120);
                          blit(borrar,screen,0,0,0,0,1300, 450);

                          if (key[KEY_D])
                          {

                                pintarbala();
                                x += 20;
                                blit(corrdisp_7,screen,0,0,x,y,92,93);
                                rest(120);
                                blit(borrar,screen,0,0,0,0,1300, 450);

                          }

                     }

               }


       }

       pintarbala();

}


void dispar_corriendo2(void)  // Correr y disparar a a izquierda
{
       BITMAP *borrar = create_bitmap(1300, 450);

       while(key[KEY_D] )

       {

               disparo = true;
               pintarbala();
               x -= 20;
               blit(corrdisp_8a,screen,0,0,x,y,92,93);
               rest(120);
               blit(borrar,screen,0,0,0,0,1300, 450);

               pintarbala();
               x -= 20;
               blit(corrdisp_9a,screen,0,0,x,y,92,93);
               rest(120);
               blit(borrar,screen,0,0,0,0,1300, 450);

               pintarbala();
               x -= 20;
               blit(corrdisp_10a,screen,0,0,x,y,92,93);
               rest(120);
               blit(borrar,screen,0,0,0,0,1300, 450);

               if (key[KEY_D])
               {

                     pintarbala();
                     x -= 20;
                     blit(corrdisp_1a,screen,0,0,x,y,92,93);
                     rest(120);
                     blit(borrar,screen,0,0,0,0,1300, 450);

                     pintarbala();
                     x -= 20;
                     blit(corrdisp_2a,screen,0,0,x,y,92,93);
                     rest(120);
                     blit(borrar,screen,0,0,0,0,1300, 450);

                     pintarbala();
                     x -= 20;
                     blit(corrdisp_3a,screen,0,0,x,y,92,93);
                     rest(120);
                     blit(borrar,screen,0,0,0,0,1300, 450);

                     if (key[KEY_D])
                     {

                          pintarbala();
                          x -= 20;
                          blit(corrdisp_4a,screen,0,0,x,y,92,93);
                          rest(120);
                          blit(borrar,screen,0,0,0,0,1300, 450);

                          pintarbala();
                          x -= 20;
                          blit(corrdisp_5a,screen,0,0,x,y,92,93);
                          rest(120);
                          blit(borrar,screen,0,0,0,0,1300, 450);

                          pintarbala();
                          x -= 20;
                          blit(corrdisp_6a,screen,0,0,x,y,92,93);
                          rest(120);
                          blit(borrar,screen,0,0,0,0,1300, 450);

                          if (key[KEY_D])
                          {
                                pintarbala();
                                x -= 20;
                                blit(corrdisp_7a,screen,0,0,x,y,92,93);
                                rest(120);
                                blit(borrar,screen,0,0,0,0,1300, 450);

                          }

                     }

               }


       }

}
void volar(void) // Megaman rapido a la derecha
{
      BITMAP *borrar = create_bitmap(1300, 450);
      while(key[KEY_SPACE])
          {

               for(int j = 0 ; j <= 5 ; j++){

                          pintarbala();
                          x += 50;
                          blit(megcd_2,screen,0,0,x,y,88,121);
                          rest(120);
                          blit(borrar,screen,0,0,0,0,1300, 450);
                          while (key[KEY_D]) // dispara mientras vuela
                          {

                               disparo = true;
                               for(int j = 0 ; j<=3; j++){

                                    pintarbala();
                                    blit(cordisp_1,screen,0,0,x+20,y,121,93);
                                    rest(120);
                                    blit(borrar,screen,0,0,0,0,1300, 450);
                                    x+=50;

                                    if(x>1300)
                                    x=0;

                                    }
                          }
                         while(key[KEY_S])
                         {

                               pintarbala();
                               x += 50;
                               blit(brica_1,screen,0,0,x,y-20,85,111);
                               rest(120);
                               blit(borrar,screen,0,0,0,0,1300, 450);

                               pintarbala();
                               x += 50;
                               y -= 40;
                               blit(brica_2,screen,0,0,x,y-20,85,111);
                               rest(120);
                               blit(borrar,screen,0,0,0,0,1300, 450);

                               pintarbala();
                               x += 50;
                               y -= 40;
                               blit(brica_3,screen,0,0,x,y-20,85,111);
                               rest(120);
                               blit(borrar,screen,0,0,0,0,1300, 450);

                               pintarbala();
                               x += 50;
                               y -= 40;
                               blit(brica_4,screen,0,0,x,y-20,85,111);
                               rest(120);
                               blit(borrar,screen,0,0,0,0,1300, 450);

                               pintarbala();
                               x += 50;
                               y += 40;
                               blit(brica_5,screen,0,0,x,y-20,85,111);
                               rest(120);
                               blit(borrar,screen,0,0,0,0,1300, 450);

                               pintarbala();
                               x += 50;
                               y += 40;
                               blit(brica_6,screen,0,0,x,y-20,85,111);
                               rest(120);
                               blit(borrar,screen,0,0,0,0,1300, 450);

                               pintarbala();
                               x += 50;
                               y += 40;
                               blit(brica_7,screen,0,0,x,y-25,85,111);
                               rest(120);
                               blit(borrar,screen,0,0,0,0,1300, 450);
                         }

                          if(x>1300)
                          x=0;

                     }
               pintarbala();
               blit(megcd_1,screen,0,0,x,y,88,121);
               rest(120);
               blit(borrar,screen,0,0,0,0,1300, 450);
          }
          //pintarbala();

}

void volar2(void) // Megaman rapido a la izquierda
{
      BITMAP *borrar = create_bitmap(1300, 450);
      while(key[KEY_SPACE])
          {

               for(int j = 0 ; j <= 5 ; j++){

                          pintarbala();
                          x -= 50;
                          blit(megcd_2a,screen,0,0,x,y,88,121);
                          rest(120);
                          blit(borrar,screen,0,0,0,0,1300, 450);
                          while (key[KEY_D]) // disparar mientras se desliza
                          {

                               disparo = true;
                               for(int j = 0 ; j<=3; j++){


                                    pintarbala();
                                    blit(cordisp_2,screen,0,0,x-50,y,121,93);
                                    rest(120);
                                    blit(borrar,screen,0,0,0,0,1300, 450);
                                    x-=50;

                                    if(x>1300)
                                    x=0;
                                    else if(x<0)
                                    x=1300;

                                    }
                          }
                          while(key[KEY_S])
                         {

                               pintarbala();
                               x -= 50;
                               blit(brica_1a,screen,0,0,x,y-20,85,111);
                               rest(120);
                               blit(borrar,screen,0,0,0,0,1300, 450);

                               pintarbala();
                               x -= 50;
                               y -= 40;
                               blit(brica_2a,screen,0,0,x,y-20,85,111);
                               rest(120);
                               blit(borrar,screen,0,0,0,0,1300, 450);

                               pintarbala();
                               x -= 50;
                               y -= 40;
                               blit(brica_3a,screen,0,0,x,y-20,85,111);
                               rest(120);
                               blit(borrar,screen,0,0,0,0,1300, 450);

                               pintarbala();
                               x -= 50;
                               y -= 40;
                               blit(brica_4a,screen,0,0,x,y-20,85,111);
                               rest(120);
                               blit(borrar,screen,0,0,0,0,1300, 450);


                               pintarbala();
                               x -= 50;
                               y += 40;
                               blit(brica_5a,screen,0,0,x,y-20,85,111);
                               rest(120);
                               blit(borrar,screen,0,0,0,0,1300, 450);

                               pintarbala();
                               x -= 50;
                               y += 40;
                               blit(brica_6a,screen,0,0,x,y-20,85,111);
                               rest(120);
                               blit(borrar,screen,0,0,0,0,1300, 450);

                               pintarbala();
                               x -= 50;
                               y += 40;
                               blit(brica_7a,screen,0,0,x,y-25,85,111);
                               rest(120);
                               blit(borrar,screen,0,0,0,0,1300, 450);
                         }
                          if(x>1300)
                          x=0;
                          else if(x<0)
                          x=1300;
                     }

               pintarbala();
               blit(megcd_1a,screen,0,0,x,y,88,121);
               rest(120);
               blit(borrar,screen,0,0,0,0,1300, 450);
          }

}



void correr1(void) // correr derecha
{
     BITMAP *borrar = create_bitmap(1300, 450);
     blit(borrar,screen,0,0,0,0,1300, 450);
     pos=1;

     //pintarbala();
     if(key[KEY_RIGHT])
     {


         poscorrdisp = 1; // variable para el control de dispar_corriendo1();
         //dispar_corriendo1();
         blit(borrar,screen,0,0,0,0,1300, 450);
         x += 20;

         pintarbala();
         blit(megamancorr_1,screen,0,0,x,y,85,93);
         rest(120);
         blit(borrar,screen,0,0,0,0,1300, 450);
         volar();
         brincar1();

         if(key[KEY_RIGHT]){


              poscorrdisp = 2;
              // dispar_corriendo1();
              x += 20;

              pintarbala();
              blit(megamancorr_2,screen,0,0,x,y,85,93);
              rest(120);
              blit(borrar,screen,0,0,0,0,1300, 450);
              volar();
              brincar1();

              if(key[KEY_RIGHT]){


                       poscorrdisp = 2;
                       //dispar_corriendo1();
                       x += 20;

                       pintarbala();
                       blit(megamancorr_3,screen,0,0,x,y,85,93);
                       rest(120);
                       blit(borrar,screen,0,0,0,0,1300, 450);
                       volar();
                       brincar1();

                       if(key[KEY_RIGHT]){


                                  poscorrdisp = 2;
                                  //dispar_corriendo1();
                                  x += 20;

                                  pintarbala();
                                  blit(megamancorr_4,screen,0,0,x,y,85,93);
                                  rest(120);
                                  blit(borrar,screen,0,0,0,0,1300, 450);
                                  volar();
                                  brincar1();

                                  if(key[KEY_RIGHT]){


                                            poscorrdisp = 3;
                                            //dispar_corriendo1();
                                            x += 20;
                                            pintarbala();
                                            blit(megamancorr_5,screen,0,0,x,y,85,93);
                                            rest(120);
                                            blit(borrar,screen,0,0,0,0,1300, 450);
                                            volar();
                                            brincar1();

                                            if(key[KEY_RIGHT]){


                                                     poscorrdisp = 3;
                                                     //dispar_corriendo1();
                                                     x += 20;

                                                     pintarbala();
                                                     blit(megamancorr_6,screen,0,0,x,y,85,93);
                                                     rest(120);
                                                     blit(borrar,screen,0,0,0,0,1300, 450);
                                                     volar();
                                                     brincar1();

                                                     if(key[KEY_RIGHT]){


                                                              poscorrdisp = 3;
                                                              //dispar_corriendo1();
                                                              x += 20;

                                                              pintarbala();
                                                              blit(megamancorr_7,screen,0,0,x,y,85,93);
                                                              rest(120);
                                                              blit(borrar,screen,0,0,x,y,1300, 450);
                                                              volar();
                                                              brincar1();

                                                              if(key[KEY_RIGHT]){


                                                                         poscorrdisp = 4;
                                                                         //dispar_corriendo1();
                                                                         x += 20;

                                                                         pintarbala();
                                                                         blit(megamancorr_8,screen,0,0,x,y,85,93);
                                                                         rest(120);
                                                                         blit(borrar,screen,0,0,0,0,1300, 450);
                                                                         volar();
                                                                         brincar1();

                                                                         if(key[KEY_RIGHT]){


                                                                                  poscorrdisp = 4;
                                                                                  dispar_corriendo1();
                                                                                  x += 20;

                                                                                  pintarbala();
                                                                                  blit(megamancorr_9,screen,0,0,x,y,85,93);
                                                                                  rest(120);
                                                                                  blit(borrar,screen,0,0,0,0,1300, 450);
                                                                                  volar();
                                                                                  brincar1();

                                                                                  if(key[KEY_RIGHT]){


                                                                                          poscorrdisp = 4;
                                                                                          dispar_corriendo1();
                                                                                          x += 20;

                                                                                          pintarbala();
                                                                                          blit(megamancorr_10,screen,0,0,x,y,85,93);
                                                                                          rest(120);
                                                                                          blit(borrar,screen,0,0,0,0,1300, 450);
                                                                                          volar();
                                                                                          brincar1();

                                                                                          }
                                                                                  }
                                                                         }
                                                              }
                                                     }
                                            }
                                  }   // fin del ... if
                       } // fin del segundo if
              }
         } // Fin del primes if

         //pintarbala();

}// Fin de la funcion Correr


void correr2(void) // correr izquierda
{
       BITMAP *borrar = create_bitmap(1300, 450);
       pos = 2;
     if(key[KEY_LEFT])
     {

         pintarbala();
         //dispar_corriendo2();
         blit(borrar,screen,0,0,0,0,1300, 450);
         x -= 20;
         blit(megamancorr_1a,screen,0,0,x,y,85,93);
         rest(100);
         blit(borrar,screen,0,0,0,0,1300, 450);
         volar2();
         brincar2();

         if(key[KEY_LEFT]){


              pintarbala();
              //dispar_corriendo2();
              x -= 20;
              blit(megamancorr_2a,screen,0,0,x,y,85,93);
              rest(120);
              blit(borrar,screen,0,0,0,0,1300, 450);
              volar2();
              brincar2();

              if(key[KEY_LEFT]){


                       pintarbala();
                       //dispar_corriendo2();
                       x -= 20;
                       blit(megamancorr_3a,screen,0,0,x,y,85,93);
                       rest(120);
                       blit(borrar,screen,0,0,0,0,1300, 450);
                       volar2();
                       brincar2();

                       if(key[KEY_LEFT]){


                                  pintarbala();
                                  //dispar_corriendo2();
                                  x -= 20;
                                  blit(megamancorr_4a,screen,0,0,x,y,85,93);
                                  rest(120);
                                  blit(borrar,screen,0,0,0,0,1300, 450);
                                  volar2();
                                  brincar2();

                                  if(key[KEY_LEFT]){


                                            pintarbala();
                                            //dispar_corriendo2();
                                            x -= 20;
                                            blit(megamancorr_5a,screen,0,0,x,y,85,93);
                                            rest(120);
                                            blit(borrar,screen,0,0,0,0,1300, 450);
                                            volar2();
                                            brincar2();

                                            if(key[KEY_LEFT]){


                                                     pintarbala();
                                                     //dispar_corriendo2();
                                                     x -= 20;
                                                     blit(megamancorr_6a,screen,0,0,x,y,85,93);
                                                     rest(120);
                                                     blit(borrar,screen,0,0,0,0,1300, 450);
                                                     volar2();
                                                     brincar2();

                                                     if(key[KEY_LEFT]){


                                                              pintarbala();
                                                              //dispar_corriendo2();
                                                              x -= 20;
                                                              blit(megamancorr_7a,screen,0,0,x,y,85,93);
                                                              rest(120);
                                                              blit(borrar,screen,0,0,x,y,1300, 450);
                                                              volar2();
                                                              brincar2();

                                                              if(key[KEY_LEFT]){


                                                                         pintarbala();
                                                                         //dispar_corriendo2();
                                                                         x -= 20;
                                                                         blit(megamancorr_8a,screen,0,0,x,y,85,93);
                                                                         rest(120);
                                                                         blit(borrar,screen,0,0,0,0,1300, 450);
                                                                         volar2();
                                                                         brincar2();

                                                                         if(key[KEY_LEFT]){


                                                                                  pintarbala();
                                                                                  dispar_corriendo2();
                                                                                  x -= 20;
                                                                                  blit(megamancorr_9a,screen,0,0,x,y,85,93);
                                                                                  rest(120);
                                                                                  blit(borrar,screen,0,0,0,0,1300, 450);
                                                                                  volar2();
                                                                                  brincar2();

                                                                                  if(key[KEY_LEFT]){


                                                                                          pintarbala();
                                                                                          dispar_corriendo2();
                                                                                          x -= 20;
                                                                                          blit(megamancorr_10a,screen,0,0,x,y,85,93);
                                                                                          rest(120);
                                                                                          blit(borrar,screen,0,0,0,0,1300, 450);
                                                                                          volar2();
                                                                                          brincar2();

                                                                                          }
                                                                                  }
                                                                         }
                                                              }
                                                     }
                                            }
                                  }
                       }
              }
         }


}

void golpe(void)
{
     BITMAP *buffer = create_bitmap(1300, 450);

     if(pos ==1)
     {


         blit(golpe_1, screen , 0,0,x,y-35,80,125);
         rest(120);
         blit(buffer, screen , 0,0,0,0,1300,450);

         y-=25;
         x+=25;

         blit(golpe_2, screen , 0,0,x,y-35,80,125);
         rest(120);
         blit(buffer, screen , 0,0,0,0,1300,450);

         y-=25;
         x+=25;

         blit(golpe_3, screen , 0,0,x,y-35,80,125);
         rest(120);
         blit(buffer, screen , 0,0,0,0,1300,450);


         x+=25;

         blit(golpe_4, screen , 0,0,x,y-35,80,125);
         rest(120);
         blit(buffer, screen , 0,0,0,0,1300,450);

         y+=25;
         x+=25;

         blit(golpe_5, screen , 0,0,x,y-35,80,125);
         rest(120);
         blit(buffer, screen , 0,0,0,0,1300,450);

         y+=25;
         x+=25;

         blit(golpe_6, screen , 0,0,x,y-35,80,125);
         rest(120);
         blit(buffer, screen , 0,0,0,0,1300,450);





     }

     else if( pos == 2)
     {


         blit(golpe_1a, screen , 0,0,x,y-35,80,125);
         rest(120);
         blit(buffer, screen , 0,0,0,0,1300,450);

         y-=25;
         x-=25;

         blit(golpe_2a, screen , 0,0,x,y-35,80,125);
         rest(120);
         blit(buffer, screen , 0,0,0,0,1300,450);

         y-=25;
         x-=25;

         blit(golpe_3a, screen , 0,0,x,y-35,80,125);
         rest(120);
         blit(buffer, screen , 0,0,0,0,1300,450);


         x-=25;

         blit(golpe_4a, screen , 0,0,x,y-35,80,125);
         rest(120);
         blit(buffer, screen , 0,0,0,0,1300,450);

         y+=25;
         x-=25;

         blit(golpe_5a, screen , 0,0,x,y-35,80,125);
         rest(120);
         blit(buffer, screen , 0,0,0,0,1300,450);

         y+=25;
         x-=25;

         blit(golpe_6a, screen , 0,0,x,y-35,80,125);
         rest(120);
         blit(buffer, screen , 0,0,0,0,1300,450);





     }



}
void jugar(void) // Rutina para hacer todos los movimientos de megaman
{

      BITMAP *buffer = create_bitmap(1300, 450);
     while(i>0 && i<300){

            Inicio_1();
            if(i==300)
               {
                   blit(buffer, screen , 0,0,0,0,1300,450);
                   Inicio_2();

               }

        }

    while(! key[KEY_ESC])
       {



               if(pos == 1)
               {
                   pintarbala();
                   blit(megaman_2,screen,0,0,x,y,85,93);
                   rest(120);
                   blit(buffer, screen , 0,0,0,0,1300,450);

               }
               else
               {
                   pintarbala();
                   blit(megaman_2a,screen,0,0,x,y,85,93);
                   rest(120);
                   blit(buffer, screen , 0,0,0,0,1300,450);


               }

               while(key[KEY_RIGHT]){
                        correr1();
                        pos = 1;
                      }

               while(key[KEY_LEFT]){
                        correr2();
                        pos = 2;
                       }

                while(pos == 1 && key[KEY_D])
                {

                      disparo = true;
                      //pintarbala();
                      diparar_parado1();


                }

                while(pos == 2 && key[KEY_D])
                {

                      disparo = true;
                      //pintarbala();
                      diparar_parado2();


                }

                if(pos == 2 && key[KEY_D])
                       diparar_parado2();


                 if(key[KEY_S] && pos == 1)
                    brincar_parado1();

                 else if(key[KEY_S] && pos == 2)
                    brincar_parado2();

                 if(key[KEY_A])
                    golpe();


                if(x>1300)
                    x=0;
                else if(x<0)
                    x=1300;
                //blit(buffer, screen , 0,0,0,0,1300,450);
       }

}

int main ()
{
        allegro_init();
        install_keyboard();
        install_mouse();
        set_color_depth(16);
        set_gfx_mode(GFX_AUTODETECT_WINDOWED,1300,450,0,0);

        BITMAP *buffer = create_bitmap(765,450);
        BITMAP *men = load_bitmap("menu.bmp",NULL);
        BITMAP *m1 = load_bitmap("m1.bmp",NULL);
        BITMAP *m2 = load_bitmap("m2.bmp",NULL);
        BITMAP *m3 = load_bitmap("m3.bmp",NULL);
        BITMAP *m4 = load_bitmap("m4.bmp",NULL);
        BITMAP *m5 = load_bitmap("m5.bmp",NULL);
        BITMAP *m6 = load_bitmap("m6.bmp",NULL);
        BITMAP *m7 = load_bitmap("m7.bmp",NULL);
        BITMAP *instru = load_bitmap("instru.bmp",NULL);
        BITMAP *sal = load_bitmap("salir.bmp",NULL);
        BITMAP *cursor = load_bitmap("c.bmp",NULL);
        BITMAP *ins = load_bitmap("Instrucciones.bmp",NULL);
        bool salida = false;

        while(!salida)
        {

            if(mouse_x > 13 && mouse_x < 126 &&
                mouse_y > 213 && mouse_y < 251)
            {
                blit(m1,buffer,0,0,0,0,765,450);
                if(mouse_b & 1)
                {
                    salida=true;
                }
            }else if(mouse_x > 138 && mouse_x < 251 &&
                         mouse_y > 218 && mouse_y < 244)
                {
                    blit(m2,buffer,0,0,0,0,765,450);
                    if(mouse_b & 1)
                    {
                        salida = true;
                    }
                }else if(mouse_x>270 && mouse_x < 381 &&
                         mouse_y >219 && mouse_y < 242)
                {
                    blit(m3,buffer,0,0,0,0,765,450);
                    if(mouse_b & 1)
                    {
                    salida=true;
                    }
                }else if(mouse_x>16 && mouse_x < 123 &&
                         mouse_y >255 && mouse_y < 279)
                {
                    blit(m4,buffer,0,0,0,0,765,450);
                    if(mouse_b & 1)
                    {
                    salida=true;
                    }
                }else if(mouse_x>144 && mouse_x < 250 &&
                         mouse_y >253 && mouse_y < 279)
                {
                    blit(m5,buffer,0,0,0,0,765,450);
                    if(mouse_b & 1)
                    {
                    salida=true;
                    }
                }else if(mouse_x>273 && mouse_x < 382 &&
                         mouse_y >253 && mouse_y < 277)
                {
                    blit(m6,buffer,0,0,0,0,765,450);
                    if(mouse_b & 1)
                    {
                    salida=true;
                    }
                }else if(mouse_x>142 && mouse_x < 252 &&
                         mouse_y >287 && mouse_y < 315)
                {
                    blit(m7,buffer,0,0,0,0,765,450);
                    if(mouse_b & 1)
                    {
                    salida=true;
                    }
                }else if(mouse_x>25 && mouse_x < 208 &&
                         mouse_y >348 && mouse_y < 370)
                {
                    blit(instru,buffer,0,0,0,0,765,450);
                    if(mouse_b & 1)
                    {
                    blit(ins,buffer,0,0,0,0,765,450);
                    }
                }
                else if(mouse_x>238 && mouse_x < 321 &&
                         mouse_y >347 && mouse_y < 373)
                {
                    blit(sal,buffer,0,0,0,0,765,450);
                    if(mouse_b & 1)
                    {
                    salida=true;
                    }
                }
                else blit(men,buffer,0,0,0,0,765,450);
                masked_blit(cursor,buffer,0,0,mouse_x,mouse_y,330,418);
                blit(buffer,screen,0,0,0,0,1360,799);

    }
    destroy_bitmap(buffer);
    destroy_bitmap(cursor);
    return 0;
}
END_OF_MAIN ();

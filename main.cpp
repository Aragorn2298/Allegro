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
        //inicia_allegro(1360,799);
        install_keyboard();
        install_mouse();
        set_color_depth(16);
        set_gfx_mode(GFX_AUTODETECT_WINDOWED,1300,450,0,0);

        BITMAP *buffer = create_bitmap(765,450);
        BITMAP *fondo1 = load_bitmap("Fondo1.bmp",NULL);
        BITMAP *fondo2 = load_bitmap("Fondo2.bmp",NULL);
        BITMAP *fondo3 = load_bitmap("Fondo3.bmp",NULL);
        BITMAP *fondo4 = load_bitmap("Fondo4.bmp",NULL);
        BITMAP *cursor = load_bitmap("c.bmp",NULL);
        BITMAP *instr  = load_bitmap("Instrucciones.bmp",NULL);
        bool salida = false;
        while(!salida)
        {

            if(mouse_x > 93 && mouse_x < 226 &&
                mouse_y > 217 && mouse_y < 278)
            {
                blit(fondo2,buffer,0,0,0,0,765,450);
                if(mouse_b & 1)
                {
                   set_window_title("Megaman BG created ");

                    allegro_message("Ganaste");

                    BITMAP *buffer = create_bitmap(1300, 450);

                    BITMAP *backgr = load_bitmap("backs.bmp",NULL);

                    /******************        Aqui Definimos las imagenes que tendra cada variable       ******************/
                    //Background
                    //blit(backgr,screen,0,0,0,0,1300,941);
                    //megaman normal invertido
                    megaman_2a = load_bitmap("meg_2a.bmp",NULL);
                    //meg rapido
                    megcd_1 = load_bitmap("megcd_1.bmp",NULL);
                    megcd_2 = load_bitmap("megcd_2.bmp",NULL);
                    cordisp_1 = load_bitmap("cordisp_1.bmp",NULL);
                    //meg rapido invertido
                    megcd_1a = load_bitmap("megcd_1a.bmp",NULL);
                    megcd_2a = load_bitmap("megcd_2a.bmp",NULL);
                    cordisp_2 = load_bitmap("cordisp_2.bmp",NULL);
                    //megaman disparando parado
                    megdisp_1 = load_bitmap("megdisp_1.bmp",NULL);
                    megdisp_1a = load_bitmap("megdisp_1a.bmp",NULL);
                    bala = load_bitmap("bala.bmp",NULL);
                    // Imagenes de inicio
                    inicio_1 =  load_bitmap("1.bmp",NULL);
                    inicio_2 =  load_bitmap("2.bmp",NULL);
                    megaman_1 = load_bitmap("meg_1.bmp",NULL);
                    megaman_2 = load_bitmap("meg_2.bmp",NULL);
                    megaman_3 = load_bitmap("meg_3.bmp",NULL);
                    megaman_4 = load_bitmap("meg_4.bmp",NULL);
                    // Imagenes megaman corriendo
                    megamancorr_1  = load_bitmap("megcorr_1.bmp",NULL);
                    megamancorr_2  = load_bitmap("megcorr_2.bmp",NULL);
                    megamancorr_3  = load_bitmap("megcorr_3.bmp",NULL);
                    megamancorr_4  = load_bitmap("megcorr_4.bmp",NULL);
                    megamancorr_5  = load_bitmap("megcorr_5.bmp",NULL);
                    megamancorr_6  = load_bitmap("megcorr_6.bmp",NULL);
                    megamancorr_7  = load_bitmap("megcorr_7.bmp",NULL);
                    megamancorr_8  = load_bitmap("megcorr_8.bmp",NULL);
                    megamancorr_9  = load_bitmap("megcorr_9.bmp",NULL);
                    megamancorr_10 = load_bitmap("megcorr_10.bmp",NULL);
                    // corriendo invertidas
                    megamancorr_1a  = load_bitmap("megcorr_1a.bmp",NULL);
                    megamancorr_2a  = load_bitmap("megcorr_2a.bmp",NULL);
                    megamancorr_3a  = load_bitmap("megcorr_3a.bmp",NULL);
                    megamancorr_4a  = load_bitmap("megcorr_4a.bmp",NULL);
                    megamancorr_5a  = load_bitmap("megcorr_5a.bmp",NULL);
                    megamancorr_6a  = load_bitmap("megcorr_6a.bmp",NULL);
                    megamancorr_7a  = load_bitmap("megcorr_7a.bmp",NULL);
                    megamancorr_8a  = load_bitmap("megcorr_8a.bmp",NULL);
                    megamancorr_9a  = load_bitmap("megcorr_9a.bmp",NULL);
                    megamancorr_10a = load_bitmap("megcorr_10a.bmp",NULL);

                    //coriendo y disparando
                    corrdisp_1  = load_bitmap("corrdisp_1.bmp",NULL);
                    corrdisp_2  = load_bitmap("corrdisp_2.bmp",NULL);
                    corrdisp_3  = load_bitmap("corrdisp_3.bmp",NULL);
                    corrdisp_4  = load_bitmap("corrdisp_4.bmp",NULL);
                    corrdisp_5  = load_bitmap("corrdisp_5.bmp",NULL);
                    corrdisp_6  = load_bitmap("corrdisp_6.bmp",NULL);
                    corrdisp_7  = load_bitmap("corrdisp_7.bmp",NULL);
                    corrdisp_8  = load_bitmap("corrdisp_8.bmp",NULL);
                    corrdisp_9  = load_bitmap("corrdisp_9.bmp",NULL);
                    corrdisp_10 = load_bitmap("corrdisp_10.bmp",NULL);

                    corrdisp_1a  = load_bitmap("corrdisp_1a.bmp",NULL);
                    corrdisp_2a  = load_bitmap("corrdisp_2a.bmp",NULL);
                    corrdisp_3a  = load_bitmap("corrdisp_3a.bmp",NULL);
                    corrdisp_4a  = load_bitmap("corrdisp_4a.bmp",NULL);
                    corrdisp_5a  = load_bitmap("corrdisp_5a.bmp",NULL);
                    corrdisp_6a  = load_bitmap("corrdisp_6a.bmp",NULL);
                    corrdisp_7a  = load_bitmap("corrdisp_7a.bmp",NULL);
                    corrdisp_8a  = load_bitmap("corrdisp_8a.bmp",NULL);
                    corrdisp_9a  = load_bitmap("corrdisp_9a.bmp",NULL);
                    corrdisp_10a = load_bitmap("corrdisp_10a.bmp",NULL);

                    //brincando
                    brica_1  = load_bitmap("brica_1.bmp",NULL);
                    brica_2  = load_bitmap("brica_2.bmp",NULL);
                    brica_3  = load_bitmap("brica_3.bmp",NULL);
                    brica_4  = load_bitmap("brica_4.bmp",NULL);
                    brica_5  = load_bitmap("brica_5.bmp",NULL);
                    brica_6  = load_bitmap("brica_6.bmp",NULL);
                    brica_7  = load_bitmap("brica_7.bmp",NULL);
                    brica_1a  = load_bitmap("brica_1a.bmp",NULL);
                    brica_2a  = load_bitmap("brica_2a.bmp",NULL);
                    brica_3a  = load_bitmap("brica_3a.bmp",NULL);
                    brica_4a  = load_bitmap("brica_4a.bmp",NULL);
                    brica_5a  = load_bitmap("brica_5a.bmp",NULL);
                    brica_6a  = load_bitmap("brica_6a.bmp",NULL);
                    brica_7a  = load_bitmap("brica_7a.bmp",NULL);

                    //golpe
                    golpe_1  = load_bitmap("golpe_1.bmp",NULL);
                    golpe_2  = load_bitmap("golpe_2.bmp",NULL);
                    golpe_3  = load_bitmap("golpe_3.bmp",NULL);
                    golpe_4  = load_bitmap("golpe_4.bmp",NULL);
                    golpe_5  = load_bitmap("golpe_5.bmp",NULL);
                    golpe_6  = load_bitmap("golpe_6.bmp",NULL);
                    golpe_1a  = load_bitmap("golpe_1a.bmp",NULL);
                    golpe_2a = load_bitmap("golpe_2a.bmp",NULL);
                    golpe_3a = load_bitmap("golpe_3a.bmp",NULL);
                    golpe_4a = load_bitmap("golpe_4a.bmp",NULL);
                    golpe_5a = load_bitmap("golpe_5a.bmp",NULL);
                    golpe_6a = load_bitmap("golpe_6a.bmp",NULL);



                    jugar();

                    readkey();

                    // Liberamos memoria usada para las imagenes
                    destroy_bitmap(buffer)        ;destroy_bitmap(inicio_1)       ;destroy_bitmap(inicio_2);
                    destroy_bitmap(megaman_1)     ;destroy_bitmap(megaman_2)      ;destroy_bitmap(megaman_3);
                    destroy_bitmap(megaman_4)     ;destroy_bitmap(megamancorr_1)  ;destroy_bitmap(megamancorr_2);
                    destroy_bitmap(megamancorr_3) ;destroy_bitmap(megamancorr_4)  ;destroy_bitmap(megamancorr_5);
                    destroy_bitmap(megamancorr_6) ;destroy_bitmap(megamancorr_7)  ;destroy_bitmap(megamancorr_8);
                    destroy_bitmap(megamancorr_9) ;destroy_bitmap(megamancorr_10) ;
                    ;destroy_bitmap(megamancorr_1a) ;destroy_bitmap(megamancorr_2a) ;
                    destroy_bitmap(megamancorr_3a) ;destroy_bitmap(megamancorr_4a)  ;destroy_bitmap(megamancorr_5a);
                    destroy_bitmap(megamancorr_6a) ;destroy_bitmap(megamancorr_7a)  ;destroy_bitmap(megamancorr_8a);
                    destroy_bitmap(megamancorr_9a) ;destroy_bitmap(megamancorr_10a) ;
                }
            }else if(mouse_x > 98 && mouse_x <383 &&
                         mouse_y > 284 && mouse_y < 343)
                {
                    blit(fondo3,buffer,0,0,0,0,765,450);
                    if(mouse_b & 1)
                    {
                        blit(instr,buffer,0,0,0,0,765,450);
                    }else if(keypressed()){
                        readkey();
                    }
                }else if(mouse_x>99 && mouse_x < 210 &&
                         mouse_y >357 && mouse_y < 413)
                {
                    blit(fondo4,buffer,0,0,0,0,765,450);
                    if(mouse_b & 1)
                    {
                    salida=true;
                    }
                }else blit(fondo1,buffer,0,0,0,0,765,450);
                masked_blit(cursor,buffer,0,0,mouse_x,mouse_y,330,418);
                blit(buffer,screen,0,0,0,0,1360,799);

    }
    destroy_bitmap(buffer);
    destroy_bitmap(cursor);
    return 0;
}
END_OF_MAIN ();

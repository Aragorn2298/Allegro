/*#ifndef INICIA_H_INCLUDED
#define INICIA_H_INCLUDED

void inicia_allegro(int ANCHO_ , int ALTO_);
int inicia_audio(int izquierda, int derecha);

#endif // INICIA_H_INCLUDED*/
/*set_color_depth(16);                                        //           de Allegro
                    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 1300, 450, 0, 0);

                    set_window_title("Megaman BG created ");

                    allegro_message("Ganaste");

                    BITMAP *buffer = create_bitmap(1300, 450);



                    /******************        Aqui Definimos las imagenes que tendra cada variable       ******************/
                    //Background

                    //megaman normal invertido
                    /*megaman_2a = load_bitmap("meg_2a.bmp",NULL);
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
                    */

//Utilisation limité sous linux car l'application utilise un format audio propriétaire abadie.jo
// dépendance apt-get install libsdl2-dev

// pour compiler g++ main.cpp monmix.cpp pourleger.cpp convertisseur.cpp AdnForme.cpp AdnForme1.cpp AdnForme2.cpp AdnForme3.cpp AdnForme4.cpp AdnForme5.cpp AdnForme6.cpp AdnForme7.cpp AdnForme8.cpp AdnForme9.cpp AdnForme10.cpp AdnForme11.cpp AdnForme12.cpp AdnForme13.cpp AdnForme14.cpp AdnForme15.cpp AdnForme16.cpp AdnForme17.cpp AdnForme18.cpp AdnForme19.cpp AdnForme20.cpp AdnForme21.cpp AdnForme22.cpp AdnForme23.cpp AdnForme24.cpp AdnForme25.cpp AdnForme26.cpp AdnForme27.cpp AdnForme28.cpp AdnForme29.cpp AdnForme30.cpp AdnForme31.cpp AdnForme32.cpp AdnForme33.cpp AdnForme34.cpp AdnForme35.cpp AdnForme36.cpp AdnForme37.cpp AdnForme38.cpp AdnForme39.cpp AdnForme40.cpp AdnForme41.cpp -w -lSDL2 -o sequanbaul

#include "SDL2/SDL.h"
#include <stdio.h>
#include <iostream>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include "monmix.h"
#include "convertisseur.h"
#include "pourleger.h"
#include "AdnForme.h"


//Taille de la fenêtre
const int IMAGE_LARGEUR = 640;
const int IMAGE_HAUTEUR = 450;
const int IMAGE_BPP = 32;

//Démarre SDL 
bool init();

//The window we'll be rendering to
SDL_Window* gWindow = NULL;
	
//The surface contained by the window
SDL_Surface* gScreenSurface = NULL;


bool init()
{

	bool success = true;


	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "SDL n'arrive pas à démarrer: %s\n", SDL_GetError() );
		success = false;
	}
	else
	{
		gWindow = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, IMAGE_LARGEUR, IMAGE_HAUTEUR, SDL_WINDOW_SHOWN );
		if( gWindow == NULL )
		{
			printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
			success = false;
		}
		else
		{
			gScreenSurface = SDL_GetWindowSurface( gWindow );
		}
	}

	return success;
}


int main( int argc, char* args[] )
{

    char donne[15];
    char donne1[15];
      for(int i=1; i<17; i++)
       {
  snprintf(donne, 15,"fichier%d",  i);
    snprintf(donne1, 15,"piste%d.txt",  i);
   FILE* donne = NULL;
   donne = fopen (donne1, "w+");
    if (donne != NULL)
    {
          fprintf(donne, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d \n", 41, 1, 133, 130, 50, 50, 12, 12, 0, 0, 1, 7, 50, 5, 10, 2);
        fclose(donne);
    }
        }
        
	int x,y;  // position x,y   
	int piste;  // piste     
        

    SDL_Window* window = NULL;
    window = SDL_CreateWindow
    (
        "SequanBaul", SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640,
        480,
        SDL_WINDOW_SHOWN
    );

    SDL_Renderer* renderer = NULL;
    renderer =  SDL_CreateRenderer( window, 0, SDL_RENDERER_ACCELERATED);
    
        // met la couleur de fond
    SDL_SetRenderDrawColor( renderer, 255, 0, 0, 100 );


    SDL_RenderClear( renderer );
    
    /********************************************/

// piste1 position
    SDL_Rect piste1;
    piste1.x = 24;
    piste1.y = 1;
    piste1.w = 240;
    piste1.h = 24; 
 // piste2 position
   SDL_Rect piste2;
    piste2.x = 24;
    piste2.y = 26;
    piste2.w = 240;
    piste2.h = 24;
// piste3 position
    SDL_Rect piste3;
    piste3.x = 24;
    piste3.y = 52;
    piste3.w = 240;
    piste3.h = 24;
// piste4 position
   SDL_Rect piste4;
    piste4.x = 24;
    piste4.y = 78;
    piste4.w = 240;
    piste4.h = 24;
// piste5 position
    SDL_Rect piste5;
    piste5.x = 24;
    piste5.y = 104;
    piste5.w = 240;
    piste5.h = 24;
// piste6 position
   SDL_Rect piste6;
    piste6.x = 24;
    piste6.y = 130;
    piste6.w = 240;
    piste6.h = 24;
// piste7 position
    SDL_Rect piste7;
    piste7.x = 24;
    piste7.y = 156;
    piste7.w = 240;
    piste7.h = 24;
// piste8 position
   SDL_Rect piste8;
    piste8.x = 24;
    piste8.y = 182;
    piste8.w = 240;
    piste8.h = 24;
// piste9 position
    SDL_Rect piste9;
    piste9.x = 24;
    piste9.y = 208;
    piste9.w = 240;
    piste9.h = 24;
// piste10 position
   SDL_Rect piste10;
    piste10.x = 24;
    piste10.y = 234;
    piste10.w = 240;
    piste10.h = 24;
// piste11 position
    SDL_Rect piste11;
    piste11.x = 24;
    piste11.y = 260;
    piste11.w = 240;
    piste11.h = 24;
// piste12 position
   SDL_Rect piste12;
    piste12.x = 24;
    piste12.y = 286;
    piste12.w = 240;
    piste12.h = 24;
// piste13 position
    SDL_Rect piste13;
    piste13.x = 24;
    piste13.y = 312;
    piste13.w = 240;
    piste13.h = 24;
// piste14 position
   SDL_Rect piste14;
    piste14.x = 24;
    piste14.y = 338;
    piste14.w = 240;
    piste14.h = 24;
// piste15 position
    SDL_Rect piste15;
    piste15.x = 24;
    piste15.y = 364;
    piste15.w = 240;
    piste15.h = 24;
// piste16 position
   SDL_Rect piste16;
    piste16.x = 24;
    piste16.y = 390;
    piste16.w = 240;
    piste16.h = 24;
// mix1 position
    SDL_Rect monmix1;
    monmix1.x = 320;
    monmix1.y = 1;
    monmix1.w = 240;
    monmix1.h = 24;
// mix position
   SDL_Rect monmix2;
    monmix2.x = 320;
    monmix2.y = 26;
    monmix2.w = 240;
    monmix2.h = 24;
// mix3 position
    SDL_Rect monmix3;
    monmix3.x = 320;
    monmix3.y = 52;
    monmix3.w = 240;
    monmix3.h = 24;
// mix4 position
   SDL_Rect monmix4;
    monmix4.x = 320;
    monmix4.y = 78;
    monmix4.w = 240;
    monmix4.h = 24;
// mix5 position
    SDL_Rect monmix5;
    monmix5.x = 320;
    monmix5.y = 104;
    monmix5.w = 240;
    monmix5.h = 24;
// mix6 position
   SDL_Rect monmix6;
    monmix6.x = 320;
    monmix6.y = 130;
    monmix6.w = 240;
    monmix6.h = 24;
// mix7 position
    SDL_Rect monmix7;
    monmix7.x = 320;
    monmix7.y = 156;
    monmix7.w = 240;
    monmix7.h = 24;
// mix8 position
   SDL_Rect monmix8;
    monmix8.x = 320;
    monmix8.y = 182;
    monmix8.w = 240;
    monmix8.h = 24;
// mix9 position
    SDL_Rect monmix9;
    monmix9.x = 320;
    monmix9.y = 208;
    monmix9.w = 240;
    monmix9.h = 24;
// mix10 position
   SDL_Rect monmix10;
    monmix10.x = 320;
    monmix10.y = 234;
    monmix10.w = 240;
    monmix10.h = 24;
// mix11 position
    SDL_Rect monmix11;
    monmix11.x = 320;
    monmix11.y = 260;
    monmix11.w = 240;
    monmix11.h = 24;
// mix12 position
   SDL_Rect monmix12;
    monmix12.x = 320;
    monmix12.y = 286;
    monmix12.w = 240;
    monmix12.h = 24;
// mix13 position
    SDL_Rect monmix13;
    monmix13.x = 320;
    monmix13.y = 312;
    monmix13.w = 240;
    monmix13.h = 24;
// mix14 position
   SDL_Rect monmix14;
    monmix14.x = 320;
    monmix14.y = 338;
    monmix14.w = 240;
    monmix14.h = 24;
// mix15 position
    SDL_Rect monmix15;
    monmix15.x = 320;
    monmix15.y = 364;
    monmix15.w = 240;
    monmix15.h = 24;
// mix16 position
   SDL_Rect monmix16;
    monmix16.x = 320;
    monmix16.y = 390;
    monmix16.w = 240;
    monmix16.h = 24;
// efface position
    SDL_Rect efface;
    efface.x = 120;
    efface.y = 425;
    efface.w = 100;
    efface.h = 40;
// quite position
   SDL_Rect sort;
    sort.x = 350;
    sort.y = 425;
    sort.w = 100;
    sort.h = 40;
    
// Crée la couleur de fond
    SDL_SetRenderDrawColor( renderer, 0, 50, 100, 100 );

    // Render rect
    SDL_RenderFillRect( renderer, &piste1 );
    SDL_RenderFillRect( renderer, &piste2 );
    SDL_RenderFillRect( renderer, &piste3 );
    SDL_RenderFillRect( renderer, &piste4 );
    SDL_RenderFillRect( renderer, &piste5 );
    SDL_RenderFillRect( renderer, &piste6 );
    SDL_RenderFillRect( renderer, &piste7 );
    SDL_RenderFillRect( renderer, &piste8 );
    SDL_RenderFillRect( renderer, &piste9 );
    SDL_RenderFillRect( renderer, &piste10 );
    SDL_RenderFillRect( renderer, &piste11 );
    SDL_RenderFillRect( renderer, &piste12 );
    SDL_RenderFillRect( renderer, &piste13 );
    SDL_RenderFillRect( renderer, &piste14 );
    SDL_RenderFillRect( renderer, &piste15 );
    SDL_RenderFillRect( renderer, &piste16 );
    
    SDL_RenderFillRect( renderer, &monmix1 );
    SDL_RenderFillRect( renderer, &monmix2 );
    SDL_RenderFillRect( renderer, &monmix3 );
    SDL_RenderFillRect( renderer, &monmix4 );
    SDL_RenderFillRect( renderer, &monmix5 );
    SDL_RenderFillRect( renderer, &monmix6 );
    SDL_RenderFillRect( renderer, &monmix7 );
    SDL_RenderFillRect( renderer, &monmix8 );
    SDL_RenderFillRect( renderer, &monmix9 );
    SDL_RenderFillRect( renderer, &monmix10 );
    SDL_RenderFillRect( renderer, &monmix11 );
    SDL_RenderFillRect( renderer, &monmix12 );
    SDL_RenderFillRect( renderer, &monmix13 );
    SDL_RenderFillRect( renderer, &monmix14 );
    SDL_RenderFillRect( renderer, &monmix15 );
    SDL_RenderFillRect( renderer, &monmix16 );
    
    SDL_RenderFillRect( renderer, &efface );
    SDL_RenderFillRect( renderer, &sort );

    // envoie sur l'écran des cases
    SDL_RenderPresent(renderer);




		
			//Main loop flag
			bool quit = false;


			// regarde ce qui se passe avec SDL_Event
			SDL_Event resteavecmoi;

			//action avec la fenêtre SDL
			while( !quit )
			{

				while( SDL_PollEvent( &resteavecmoi ) != 0 )
				{
				//mise en place d'une sortie même application masquée par autre fenêtre

					if( resteavecmoi.type == SDL_QUIT )
					{
						quit = true;
					}
					
					switch (resteavecmoi.type)
       					 {
 
        				    case SDL_QUIT:
             				   exit(0);
            					break;
            					/*******************************/


/**********************************************/
        				case SDL_MOUSEBUTTONDOWN:

		
              if (   resteavecmoi.button.y > 1
                  && resteavecmoi.button.y <= 25   // clic sur piste1
                  && resteavecmoi.button.x > 24
                  && resteavecmoi.button.x <= 264 ) 
		system("xdg-open piste1.txt");
              if (   resteavecmoi.button.y > 26
                  && resteavecmoi.button.y <= 50   // clic sur piste2
                  && resteavecmoi.button.x > 24
                  && resteavecmoi.button.x <= 264 ) 
		system("xdg-open piste2.txt");
              if (   resteavecmoi.button.y > 52
                  && resteavecmoi.button.y <= 76   // clic sur piste3
                  && resteavecmoi.button.x > 24
                  && resteavecmoi.button.x <= 264 ) 
		system("xdg-open piste3.txt");
              if (   resteavecmoi.button.y > 78
                  && resteavecmoi.button.y <= 102   // clic sur piste4
                  && resteavecmoi.button.x > 24
                  && resteavecmoi.button.x <= 264 ) 
		system("xdg-open piste4.txt");
              if (   resteavecmoi.button.y > 104
                  && resteavecmoi.button.y <= 128   // clic sur piste5
                  && resteavecmoi.button.x > 24
                  && resteavecmoi.button.x <= 264 ) 
		system("xdg-open piste5.txt");
              if (   resteavecmoi.button.y > 130
                  && resteavecmoi.button.y <= 154   // clic sur piste6
                  && resteavecmoi.button.x > 24
                  && resteavecmoi.button.x <= 264 ) 
		system("xdg-open piste6.txt");
              if (   resteavecmoi.button.y > 156
                  && resteavecmoi.button.y <= 180   // clic sur piste7
                  && resteavecmoi.button.x > 24
                  && resteavecmoi.button.x <= 264 ) 
		system("xdg-open piste7.txt");
              if (   resteavecmoi.button.y > 182
                  && resteavecmoi.button.y <= 206   // clic sur piste8
                  && resteavecmoi.button.x > 24
                  && resteavecmoi.button.x <= 264 ) 
		system("xdg-open piste8.txt");
              if (   resteavecmoi.button.y > 208
                  && resteavecmoi.button.y <= 232   // clic sur piste9
                  && resteavecmoi.button.x > 24
                  && resteavecmoi.button.x <= 264 ) 
		system("xdg-open piste9.txt");
              if (   resteavecmoi.button.y > 234
                  && resteavecmoi.button.y <= 258   // clic sur piste10
                  && resteavecmoi.button.x > 24
                  && resteavecmoi.button.x <= 264 ) 
		system("xdg-open piste10.txt");
              if (   resteavecmoi.button.y > 260
                  && resteavecmoi.button.y <= 284   // clic sur piste11
                  && resteavecmoi.button.x > 24
                  && resteavecmoi.button.x <= 264 ) 
		system("xdg-open piste11.txt");
              if (   resteavecmoi.button.y > 286
                  && resteavecmoi.button.y <= 310   // clic sur piste12
                  && resteavecmoi.button.x > 24
                  && resteavecmoi.button.x <= 264 ) 
		system("xdg-open piste12.txt");
              if (   resteavecmoi.button.y > 312
                  && resteavecmoi.button.y <= 336   // clic sur piste13
                  && resteavecmoi.button.x > 24
                  && resteavecmoi.button.x <= 264 ) 
		system("xdg-open piste13.txt");
              if (   resteavecmoi.button.y > 338
                  && resteavecmoi.button.y <= 362   // clic sur piste14
                  && resteavecmoi.button.x > 24
                  && resteavecmoi.button.x <= 264 ) 
		system("xdg-open piste14.txt");
              if (   resteavecmoi.button.y > 364
                  && resteavecmoi.button.y <= 386   // clic sur piste15
                  && resteavecmoi.button.x > 24
                  && resteavecmoi.button.x <= 264 ) 
		system("xdg-open piste15.txt");
              if (   resteavecmoi.button.y > 390
                  && resteavecmoi.button.y <= 414   // clic sur piste16
                  && resteavecmoi.button.x > 24
                  && resteavecmoi.button.x <= 264 ) 
		system("xdg-open piste16.txt");
              if (   resteavecmoi.button.y > 1
                  && resteavecmoi.button.y <= 25   // clic sur mix1
                  && resteavecmoi.button.x > 320
                  && resteavecmoi.button.x <= 560 ) 
		{
		piste = 1;
		monmixleger(piste); 
		system("play 1.wav");
		}
              if (   resteavecmoi.button.y > 26
                  && resteavecmoi.button.y <= 50   // clic sur mix2
                  && resteavecmoi.button.x > 320
                  && resteavecmoi.button.x <= 560 ) 
		{
     		 for(int i=1; i<3; i++)
       		{
		piste = i;
		monmixleger(piste);
		}    

		system("sox -m 1.wav 2.wav mixed.wav && play mixed.wav");
		}
              if (   resteavecmoi.button.y > 52
                  && resteavecmoi.button.y <= 76   // clic sur mix3
                  && resteavecmoi.button.x > 320
                  && resteavecmoi.button.x <= 560 ) 
		{
      		for(int i=1; i<4; i++)
       		{
		piste = i;
		monmixleger(piste);
		}
		system("sox -m 1.wav 2.wav 3.wav mixed.wav && play mixed.wav");
		}
              if (   resteavecmoi.button.y > 78
                  && resteavecmoi.button.y <= 102   // clic sur mix4
                  && resteavecmoi.button.x > 320
                  && resteavecmoi.button.x <= 560 ) 
		{
      		for(int i=1; i<5; i++)
       		{
		piste = i;
		monmixleger(piste);
		}
		system("sox -m 1.wav 2.wav 3.wav 4.wav mixed.wav && play mixed.wav");
		}
              if (   resteavecmoi.button.y > 104
                  && resteavecmoi.button.y <= 128   // clic sur mix5
                  && resteavecmoi.button.x > 320
                  && resteavecmoi.button.x <= 560 ) 
		{
      		for(int i=1; i<6; i++)
       		{
		piste = i;
		monmixleger(piste);
		}
		system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav mixed.wav && play mixed.wav");
		}
              if (   resteavecmoi.button.y > 130
                  && resteavecmoi.button.y <= 154   // clic sur mix6
                  && resteavecmoi.button.x > 320
                  && resteavecmoi.button.x <= 560 ) 
		{
      		for(int i=1; i<7; i++)
      		 {
		piste = i;
		monmixleger(piste);
		}
		system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav mixed.wav && play mixed.wav");
		}
              if (   resteavecmoi.button.y > 156
                  && resteavecmoi.button.y <= 180   // clic sur mix7
                  && resteavecmoi.button.x > 320
                  && resteavecmoi.button.x <= 560 ) 
		{
     		 for(int i=1; i<8; i++)
       		{
		piste = i;
		monmixleger(piste);
		}
		system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav mixed.wav && play mixed.wav");
		}
              if (   resteavecmoi.button.y > 182
                  && resteavecmoi.button.y <= 206   // clic sur mix8
                  && resteavecmoi.button.x > 320
                  && resteavecmoi.button.x <= 560 ) 
		{
      		for(int i=1; i<9; i++)
       		{
		piste = i;
		monmixleger(piste);
		}
		system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav mixed.wav && play mixed.wav");
		}
              if (   resteavecmoi.button.y > 208
                  && resteavecmoi.button.y <= 232   // clic sur mix9
                  && resteavecmoi.button.x > 320
                  && resteavecmoi.button.x <= 560 ) 
		{
      		for(int i=1; i<10; i++)
      	 	{
		piste = i;
		monmixleger(piste);
		}
		system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav mixed.wav && play mixed.wav");
		}
              if (   resteavecmoi.button.y > 234
                  && resteavecmoi.button.y <= 258   // clic sur mix10
                  && resteavecmoi.button.x > 320
                  && resteavecmoi.button.x <= 560 ) 
		{
      		for(int i=1; i<11; i++)
       		{
		piste = i;
		monmixleger(piste);
		}
		system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav mixed.wav && play mixed.wav");
		}
              if (   resteavecmoi.button.y > 260
                  && resteavecmoi.button.y <= 284   // clic sur mix11
                  && resteavecmoi.button.x > 320
                  && resteavecmoi.button.x <= 560 ) 
		{
      		for(int i=1; i<12; i++)
       		{
		piste = i;
		monmixleger(piste);
		}
		system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav mixed.wav && play mixed.wav");
		}
              if (   resteavecmoi.button.y > 286
                  && resteavecmoi.button.y <= 310   // clic sur mix12
                  && resteavecmoi.button.x > 320
                  && resteavecmoi.button.x <= 560 ) 
		{
      		for(int i=1; i<13; i++)
       		{
		piste = i;
		monmixleger(piste);
		}
		system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav 12.wav mixed.wav && play mixed.wav");
		}
              if (   resteavecmoi.button.y > 312
                  && resteavecmoi.button.y <= 336   // clic sur mix13
                  && resteavecmoi.button.x > 320
                  && resteavecmoi.button.x <= 560 ) 
		{
      		for(int i=1; i<14; i++)
       		{
		piste = i;
		monmixleger(piste);
		}
		system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav 12.wav 13.wav mixed.wav && play mixed.wav");
		}
              if (   resteavecmoi.button.y > 338
                  && resteavecmoi.button.y <= 362   // clic sur mix14
                  && resteavecmoi.button.x > 320
                  && resteavecmoi.button.x <= 560 ) 
		{
      		for(int i=1; i<15; i++)
       		{
		piste = i;
		monmixleger(piste);
		}
		system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav 12.wav 13.wav 14.wav mixed.wav && play mixed.wav");
		}
              if (   resteavecmoi.button.y > 364
                  && resteavecmoi.button.y <= 386   // clic sur mix15
                  && resteavecmoi.button.x > 320
                  && resteavecmoi.button.x <= 560 ) 
		{
      		for(int i=1; i<16; i++)
       		{
		piste = i;
		monmixleger(piste);
		}
		system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav 12.wav 13.wav 14.wav 15.wav mixed.wav && play mixed.wav");
		}
              if (   resteavecmoi.button.y > 390
                  && resteavecmoi.button.y <= 414   // clic sur mix16
                  && resteavecmoi.button.x > 320
                  && resteavecmoi.button.x <= 560 ) 
		{
      		for(int i=1; i<17; i++)
       		{
		piste = i;
		monmixleger(piste);
		}
		system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav 12.wav 13.wav 14.wav 15.wav 16.wav mixed.wav && play mixed.wav");
		}
		  if (   resteavecmoi.button.y > 425
                  && resteavecmoi.button.y <= 465   // clic efface
                  && resteavecmoi.button.x > 120
                  && resteavecmoi.button.x <= 220 ) 
        	system("rm *.jo");
              if (   resteavecmoi.button.y > 425
                  && resteavecmoi.button.y <= 465   // clic sur quite
                  && resteavecmoi.button.x > 350
                  && resteavecmoi.button.x <= 450 ) 
		exit(0);



                    			break;






            					case SDL_KEYDOWN:
                switch (resteavecmoi.key.keysym.sym)
                {
                    case SDLK_ESCAPE:
                        exit(0);
                    break;
                    case SDLK_a:
                    system("xdg-open piste1.txt");
                    break;




            					
            					
            									}	
            					/*********************************/
            					
            					
            					
            					
            					
            					
					}
					
					
				}


			}    
			/*******************************************************/
			



	return 0;
}

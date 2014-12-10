#include "monmix.h"
#include <iostream>
#include <fstream>
#include <string>

#include <iostream>
using namespace std;
#include <stdlib.h>
#include <stdio.h>

#include <dirent.h>


int piste = 1;

void ouvrirCompose1()
{
system("xdg-open piste1.txt");
}
void ouvrirCompose2()
{
system("xdg-open piste2.txt");
}
void ouvrirCompose3()
{
system("xdg-open piste3.txt");
}
void ouvrirCompose4()
{
system("xdg-open piste4.txt");
}
void ouvrirCompose5()
{
system("xdg-open piste5.txt");
}
void ouvrirCompose6()
{
system("xdg-open piste6.txt");
}
void ouvrirCompose7()
{
system("xdg-open piste7.txt");
}
void ouvrirCompose8()
{
system("xdg-open piste8.txt");
}
void ouvrirCompose9()
{
system("xdg-open piste9.txt");
}
void ouvrirCompose10()
{
system("xdg-open piste10.txt");
}
void ouvrirCompose11()
{
system("xdg-open piste11.txt");
}
void ouvrirCompose12()
{
system("xdg-open piste12.txt");
}
void ouvrirCompose13()
{
system("xdg-open piste13.txt");
}
void ouvrirCompose14()
{
system("xdg-open piste14.txt");
}
void ouvrirCompose15()
{
system("xdg-open piste15.txt");
}
void ouvrirCompose16()
{
system("xdg-open piste16.txt");
}

void effaceMix16()
{
system("rm *.jo");
}

void ouvrirMix1()
{

piste = 1;
monmixleger(piste); 
  if(!fork())
   {
//system("play 1.wav");
    execlp("sox", "sox", "1.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }

}
void ouvrirMix2()
{
      for(int i=1; i<3; i++)
       {
piste = i;
monmixleger(piste);
	}    
system("sox -m 1.wav 2.wav mixed.wav");

  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void ouvrirMix3()
{
      for(int i=1; i<4; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}

void ouvrirMix4()
{
      for(int i=1; i<5; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void ouvrirMix5()
{
      for(int i=1; i<6; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void ouvrirMix6()
{
      for(int i=1; i<7; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void ouvrirMix7()
{
      for(int i=1; i<8; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void ouvrirMix8()
{
      for(int i=1; i<9; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void ouvrirMix9()
{
      for(int i=1; i<10; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void ouvrirMix10()
{
      for(int i=1; i<11; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void ouvrirMix11()
{
      for(int i=1; i<12; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void ouvrirMix12()
{
      for(int i=1; i<13; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav 12.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void ouvrirMix13()
{
      for(int i=1; i<14; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav 12.wav 13.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void ouvrirMix14()
{
      for(int i=1; i<15; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav 12.wav 13.wav 14.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void ouvrirMix15()
{
      for(int i=1; i<16; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav 12.wav 13.wav 14.wav 15.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void ouvrirMix16()
{
      for(int i=1; i<17; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav 12.wav 13.wav 14.wav 15.wav 16.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}

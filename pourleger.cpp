#include "pourleger.h"
#include <iostream>
#include <fstream>
#include <string>

#include <iostream>
using namespace std;
#include <stdlib.h>
#include <stdio.h>

#include <dirent.h>


void monmixleger(int piste)
{
    int quelpiano;
    int quelpiano1;
    int quelpiano2;
    int quelpiano3;
    int quelpiano4;
    int quelpiano5;
    int quelpiano6;
    int quelpiano7;
    int quelpiano8;
    int quelpiano9;
    int quelpiano10;
    int quelpiano11;
    int quelpiano12;
    int quelpiano13;
    int quelpiano14;
    int quelpiano15;

  // Nom du fichier piste
  char nomfichierpiste[32];
  snprintf(nomfichierpiste, 32, "piste%d.txt", piste);

   FILE* ouvrepiste = NULL; 
    ouvrepiste = fopen(nomfichierpiste, "r"); 
    if (ouvrepiste != NULL)
    {

while ( fscanf(ouvrepiste,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &quelpiano, &quelpiano1, &quelpiano2, &quelpiano3, &quelpiano4, &quelpiano5, &quelpiano6, &quelpiano7, &quelpiano8, &quelpiano9, &quelpiano10, &quelpiano11, &quelpiano12, &quelpiano13, &quelpiano14, &quelpiano15)!=EOF )
{

     switch (quelpiano) {

case 1 :
      genereFichierJo(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 2 :
      genereFichierJo1(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 3 :
      genereFichierJo2(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 4 :
      genereFichierJo3(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 5 :
      genereFichierJo4(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 6 :
      genereFichierJo5(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 7 :
      genereFichierJo6(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 8 :
      genereFichierJo7(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;

case 9 :
      genereFichierJo8(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 10 :
      genereFichierJo9(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 11 :
      genereFichierJo10(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 12 :
      genereFichierJo11(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 13 :
      genereFichierJo12(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 14 :
      genereFichierJo13(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 15 :
      genereFichierJo14(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 16 :
      genereFichierJo15(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 17 :
      genereFichierJo16(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 18 :
      genereFichierJo17(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 19 :
      genereFichierJo18(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 20 :
      genereFichierJo19(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 21 :
      genereFichierJo20(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 22 :
      genereFichierJo21(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 23 :
      genereFichierJo22(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 24 :
      genereFichierJo23(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 25 :
      genereFichierJo24(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 26 :
      genereFichierJo25(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 27 :
      genereFichierJo26(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 28 :
      genereFichierJo27(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 29 :
      genereFichierJo28(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 30 :
      genereFichierJo29(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 31 :
      genereFichierJo30(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;

case 32 :
      genereFichierJo31(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 33 :
      genereFichierJo32(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 34 :
      genereFichierJo33(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 35 :
      genereFichierJo34(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 36 :
      genereFichierJo35(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 37 :
      genereFichierJo36(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 38 :
      genereFichierJo37(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 39 :
      genereFichierJo38(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 40 :
      genereFichierJo39(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 41 :
      genereFichierJo40(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;
case 42 :
      genereFichierJo41(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
 break;


default: 
      genereFichierJo(piste, quelpiano2, quelpiano3, quelpiano4, quelpiano5, quelpiano6, quelpiano7, quelpiano8, quelpiano9, quelpiano10, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
}
      conversionJoWav (piste);
}
        fclose(ouvrepiste);
    }
    }

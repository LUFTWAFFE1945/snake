#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "wenze.h"


typedef struct Move_list
{
    int y;
    int x;
    struct Move_list*nast;
}move_list;

int ocena (baza*B)
{
    waz*wazz1;
    waz*wazz2;
    B->waz1=wazz1;
    B->waz2=wazz2;
    int ocenaa;
    if (B->kolejka%2==0)
    {
    ocenaa=wazz1->długosc-wazz2->długosc;
    }
    else
    {
    ocenaa=wazz2->długosc-wazz1->długosc;
    }
    return ocenaa;
}

int posibility_move (baza*B)
{
    move_list*m;
     if (B->kolejka%2==0)
     {
         if(B->waz1->r==0)
            if(B->plansza[(B->waz1->r)-1][B->waz1->c]!='Y')
                 if(B->plansza[(B->waz1->r)-1][B->waz1->c]!='x')
                 {
                        waz*stara_glowa=B->waz1;
                        waz*nowa_glowa = (waz*) malloc(sizeof(waz));
                        nowa_glowa->r = (stara_glowa->r)-1;
                        nowa_glowa->c = stara_glowa->c;
                        nowa_glowa->nast = stara_glowa; 
                        stara_glowa->poprz = nowa_glowa;
                        nowa_glowa->poprz = NULL;                    
                        B->waz1=nowa_glowa;
                 }
    



}

int ruch (baza*B,)
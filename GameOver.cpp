
#include<bits/stdc++.h>
#include<graphics.h>

#include "Struct.h"
#include "Init.h"
#include "GameOver.h"
#include "Graphics.h"

//CONDITIA PENTRU A CONTINUA JOCUL
void game_over(int &die,int &sc,int &hsc, obst OBS, flap bird)
{
    sc=0;
    hsc=0;
    for(int i=0; i<5; i++)
    {

        if(((OBS.o[i].x<bird.fl.x && OBS.o[i].x+75>bird.fl.x) &&(bird.fl.y<OBS.o[i].y || bird.fl.y>OBS.o[i].y+130)) || bird.fl.y<0  || bird.fl.y>600 )
        {
            die=1;
            cleardevice();
            game_over_grafic(sc,hsc);
        }
        else
        {
            sc++;
            if (sc>hsc)
                hsc=sc;
        }
    }
}



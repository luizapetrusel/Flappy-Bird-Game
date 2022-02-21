
#include<bits/stdc++.h>
#include<graphics.h>

#include "Struct.h"
#include "Init.h"
#include "GameOver.h"
#include "Controls.h"
#include "Graphics.h"

flap bird;
obst OBS;

int die=0;
int culoare=11;
int font=1;
int scor=0;
int highscore=0;
char a;



int main()
{

    StartPage();
    getch();
    do
    {

        initwindow(1000,600,"FLAPPY BIRD");
        die=0;
        scor=0;
        init(bird, OBS);
        lume(culoare,font);
        BIRD(bird);
        display(OBS);
        outtextxy(200,560,"PRESS ANY KEY TO START");
        getch();
        while(die==0)
        {
            delay(0.1);
            control(bird);
            DLBIRD(bird);
            BIRD(bird);
            display(OBS);
            delay(0.01);
            lume(font,culoare);
            game_over(die,scor,highscore,OBS,bird);
        }

        a=getch();
        if(a=='y'||a=='Y')
            closegraph();
        else
            exit(1);
    }
    while(a=='y'||a=='Y');

    return 0;
}

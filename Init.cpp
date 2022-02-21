
#include<bits/stdc++.h>
#include<graphics.h>

#include "Init.h"
#include "Struct.h"

//INITIALIZARE

void createBird(flap &bird )
{
    bird.fl.x=100;
    bird.fl.y=300;
}

void createObst(obst &OBS)
{
    for(int i=0; i<5; i++)
    {
        OBS.o[i].x=500+i*200;
        OBS.o[i].y=rand()%301+100;

    }
}

void init(flap &bird, obst &OBS)
{
    createBird(bird);
    createObst(OBS);
}

void StartPage()
{
    initwindow(1000,600,"FLAPPY BIRD");
    readimagefile("2.jpg",0,0,1000,600);
    setbkcolor(CYAN);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    settextstyle(10,HORIZ_DIR,6);
    outtextxy(340,60,"LOW BUDGET");
    settextstyle(10,HORIZ_DIR,4);
    setbkcolor(BROWN);
    outtextxy(450,550,"PLAY");

}

//DESIGN
void lume(int culoare,int font)
{
    readimagefile("1.jpg",0,0,1000,600);
    setfillstyle(font,culoare);
    setcolor(culoare);
    setbkcolor(15);
}

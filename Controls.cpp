
#include<bits/stdc++.h>
#include<graphics.h>

#include "Struct.h"
#include "Init.h"
#include "Controls.h"

void control(flap &bird)
{
    bird.fl.y+=10;

    if(kbhit())
    {
        getch();
        bird.fl.y-=65;
        delay(1);
    }
}


void primulObst( obst &OBS)
{
    //PRIMUL OBSTACOL
    for(int i=0; i<5; i++)
    {

        bar(OBS.o[i].x,0,OBS.o[i].x+75,OBS.o[i].y);//BARA SUS
        bar(OBS.o[i].x,OBS.o[i].y+130,OBS.o[i].x+75,600);//BARA JOS

    }

}

void miscareObst( obst &OBS)
{

//MISCAREA OBSTACOLELOR

    for (int i=0; i<5; i++)
    {
        OBS.o[i].x=OBS.o[i].x-5;
        if(OBS.o[i].x==-50)
        {
            OBS.o[i].x=1000;
            OBS.o[i].y=rand()%301+100;

        }
    }
}


void urmatorulObst(obst &OBS)
{
    //GENERAREA URMATOARELOR OBSTACOL
    for(int i=0; i<5; i++)
    {

        bar(OBS.o[i].x,0,OBS.o[i].x+75,OBS.o[i].y);//BARA SUS
        bar(OBS.o[i].x,OBS.o[i].y+130,OBS.o[i].x+75,600);//BARA JOS


    }
}


// GENERAREA ONSTACOLELOR
void display(obst &OBS)
{
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    primulObst(OBS);
    miscareObst(OBS);
    urmatorulObst(OBS);


}



#include<bits/stdc++.h>
#include<graphics.h>

#include "Struct.h"
#include "Init.h"
#include "Graphics.h"


//GRAFICA PASARE
void CreateBirdBody(flap bird)
{
    setfillstyle(1,14);
    setcolor(14);
    fillellipse(bird.fl.x,bird.fl.y,25,18);//body
}

void CreateBirdEyes(flap bird)
{
    setfillstyle(1,15);
    setcolor(15);
    fillellipse(bird.fl.x+12,bird.fl.y-9,8,4); //eye
    setfillstyle(1,0);
    setcolor(0);
    fillellipse(bird.fl.x+12,bird.fl.y-9,2,2); //eye

}

void CreateBirdWing(flap bird)
{
    setfillstyle(1, 4);
    setcolor(14);
    fillellipse(bird.fl.x-13,bird.fl.y,15,7);//wing
}


void BIRD(flap bird)
{
    int arr[] = {bird.fl.x+15, bird.fl.y+10, bird.fl.x+35, bird.fl.y-3,
                 bird.fl.x+15, bird.fl.y-7, bird.fl.x+15, bird.fl.y+10
                };

    CreateBirdBody(bird);
    CreateBirdEyes(bird);
    CreateBirdWing(bird);
    setcolor(4);
    fillpoly(4, arr);//beak


}

void DLBIRD(flap bird)
{
    setfillstyle(1,0);
    setcolor(0);
    fillellipse(bird.fl.x,bird.fl.y,25,18);//body
    setfillstyle(1,0);
    setcolor(0);
    fillellipse(bird.fl.x+12,bird.fl.y-9,8,4); //eye
    setfillstyle(1,0);
    setcolor(0);
    fillellipse(bird.fl.x-13,bird.fl.y,15,7);//wing

}


//GRAFICA GAME OVER
void game_over_grafic(int scor,int hscore)
{
    char SCORE[50];

    readimagefile("bk.jpg",0,0,1000,600);
    setcolor(GREEN);
    setbkcolor(WHITE);

    settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
    outtextxy(230,150,"GAME OVER");


    sprintf(SCORE,"SCORE: %d", scor);
    settextstyle(DEFAULT_CHARSET,HORIZ_DIR,2);
    outtextxy(300,550,SCORE);


    sprintf(SCORE,"HIGHSCORE: %d",hscore);
    outtextxy(500,550,SCORE);


    settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
    outtextxy(270,200,"Play Again?");
    outtextxy(350,240,"YES<>NO");

}



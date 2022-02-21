#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED

struct coord
{
    int x,y;
};

struct flap
{
    coord fl;
};

struct obst
{
    coord o[10];
};



#endif // STRUCT_H_INCLUDED

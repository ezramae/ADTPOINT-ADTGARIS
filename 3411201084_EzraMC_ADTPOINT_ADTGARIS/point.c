/* NIM : 3411201084
   Nama : EZRA M.C
   Kelas : Informatika - C
*/
#include "boolean.h"
#include "point.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

Point MakePoint(int x, int y)
{
    Point P;
    P.X = x;
    P.Y = y;
    return P;
}
int GetAbsis(Point P)
{
    return P.X;
}
int GetOrdinat(Point P)
{
    return P.Y;
}
void SetAbsis(Point *P, int x)
{
    (*P).X = x;
}
void SetOrdinat(Point *P, int y)
{
    (*P).Y = y;
}
void BacaPoint(Point *P)
{
    int x, y;
    printf("Buat Point (X,Y) :");
    scanf("%d %d", &x, &y);
    *P = MakePoint(x, y);
}
void TulisPoint(Point *P)
{
    printf("(%d,%d)", P->X, P->Y);
}
Point Tambah(Point P1, Point P2)
{
    Point P;
    P.X = P1.X + P2.X;
    P.Y = P1.Y + P2.X;
    return P;
}
Point Kurang(Point P1, Point P2)
{
    Point P;
    P.X = P1.X + P2.X;
    P.Y = P1.Y + P2.Y;
    return P;
}
Point Dot(Point P1, Point P2)
{
    Point P;
    P.X = P1.X * P2.X;
    P.Y = P1.Y * P2.Y;
    P.X + P.Y;
    return P;
}
Point Cross(Point P1, Point P2)
{
    Point P;
    P.X = P1.X * P2.X;
    P.Y = P1.Y * P2.Y;
    P.X - P.Y;
    return P;
}
boolean EQ(Point P1, Point P2)
{
    boolean sama;
    if ((P1.X == P2.X) && (P1.Y == P2.Y))
    {
        sama = true;
    }
    else
    {
        sama = false;
    }
    return sama;
}
boolean NEQ(Point P1, Point P2)
{
    boolean tidaksama;
    if ((P1.X != P2.X) || (P1.Y != P2.Y))
    {
        tidaksama = true;
    }
    else
    {
        tidaksama = false;
    }
    return tidaksama;
}
boolean LebihKecil(Point P1, Point P2)
{
    boolean LK;
    if ((P1.X < P2.X) && (P1.Y < P2.Y))
    {
        LK = true;
    }
    else
    {
        LK = false;
    }
    return LK;
}
boolean LebihBesar(Point P1, Point P2)
{
    boolean LB;
    if ((P1.X > P2.X) && (P1.Y > P2.Y))
    {
        LB = true;
    }
    else
    {
        LB = false;
    }
    return LB;
}
boolean IsOrigin(Point P)
{
    boolean Ori;
    if ((P.X == 0) && (P.Y == 0))
    {
        Ori = true;
    }
    else
    {
        Ori = false;
    }
    return Ori;
}
boolean IsOnSbX(Point P)
{
    boolean SbX;
    if (P.Y == 0)
    {
        SbX = true;
    }
    else
    {
        SbX = false;
    }
    return SbX;
}
boolean IsOnSbY(Point P)
{
    boolean SbY;
    if (P.X == 0)
    {
        SbY = true;
    }
    else
    {
        SbY = false;
    }
    return SbY;
}
int Kuadran(Point P)
{
    int x;
    if ((P.X > 0) && (P.Y > 0))
    {
        x = 1;
    }
    else if ((P.X < 0) && (P.Y > 0))
    {
        x = 2;
    }
    else if ((P.X < 0) && (P.Y < 0))
    {
        x = 3;
    }
    else if ((P.X > 0) && (P.Y < 0))
    {
        x = 4;
    }
    return x;
}
Point NextX(Point P)
{
    Point tempo;
    tempo.X = P.X + 1;
    tempo.Y = P.Y;
    return tempo;
}
Point NextY(Point P)
{
    Point tempo;
    tempo.X = P.X;
    tempo.Y = P.Y + 1;
    return tempo;
}
Point PlusDelta(Point P, int deltaX, int deltaY)
{
    Point del;
    del.X = P.X + deltaX;
    del.Y = P.Y + deltaY;
    return del;
}
Point MirrorOf(Point P, boolean SbX, boolean SbY)
{
    Point mirror;
    if (SbX == true)
    {
        mirror.X = P.X * -1;
        mirror.Y = P.Y;
    }
    if (SbY == true)
    {
        mirror.X = P.X;
        mirror.Y = P.Y * -1;
    }
    return mirror;
}
float Jarak0(Point P)
{
    int jarak;
    P.X = P.X * P.X;
    P.Y = P.Y * P.Y;
    jarak = P.X + P.Y;
    jarak = sqrt(jarak);
    return jarak;
}
void Geser(Point *P, int deltaX, int deltaY)
{
    (*P).X += deltaX;
    (*P).Y += deltaY;
}
void GeserKeSbX(Point *P)
{
    (*P).Y = 0;
}
void GeserKeSbY(Point *P)
{
    (*P).X = 0;
}
void Mirror(Point *P, boolean SbX, boolean SbY)
{
    Point Tempo;
    if (SbX)
    {
        Tempo.X = -1 * ((*P).X);
        Tempo.Y = (*P).Y;
    }
    else if (SbY)
    {
        Tempo.X = (*P).X;
        Tempo.Y = -1 * ((*P).Y);
    }
    return Tempo;
}
void Putar(Point *P, float Sudut)
{
    int x, y;
    x = ((*P).X * cos(Sudut)) - ((*P).Y * sin(Sudut));
    y = ((*P).X * sin(Sudut)) + ((*P).Y * cos(Sudut));
}

/* NIM : 3411201084
   Nama : EZRA M.C
   Kelas : Informatika - C
*/
#include "line.h"

void MakeGARIS(Point P1, Point P2, Line *L)
{
    (*L).PAw = P1;
    (*L).PAkh = P2;
}
void BacaGARIS(Line *L)
{
    Point P1, P2;
    BacaPoint(&P1);
    BacaPoint(&P2);
    MakeGARIS(P1, P2, L);
}
void TulisGARIS(Line *L)
{
    printf("(%d %d),(%d %d)", L->PAw.X, L->PAw.Y, L->PAkh.X, L->PAkh.Y);
}
boolean EQL(Line L1, Line L2)
{
    boolean cek;
    if ((L1.PAw.X == L2.PAw.X) && (L1.PAw.Y == L2.PAw.Y) && (L1.PAkh.X == L2.PAkh.X) && (L1.PAkh.Y == L2.PAkh.Y))
    {
        cek = true;
    }
    else
    {
        cek = false;
    }
    return cek;
}
boolean NEQL(Line L1, Line L2)
{
    boolean cek;
    if ((L1.PAw.X != L2.PAw.X) && (L1.PAw.Y != L2.PAw.Y) && (L1.PAkh.X != L2.PAkh.X) && (L1.PAkh.Y != L2.PAkh.Y))
    {
        cek = true;
    }
    else
    {
        cek = false;
    }
    return cek;
}
boolean IsOnSbXL(Line L)
{
    boolean cek;
    if ((L.PAw.Y == 0) && (L.PAkh.Y == 0))
    {
        cek = true;
    }
    else
    {
        cek = false;
    }
    return cek;
}
boolean IsOnSbYL(Line L)
{
    boolean cek;
    if ((L.PAw.X == 0) && (L.PAkh.X == 0))
    {
        cek = true;
    }
    else
    {
        cek = false;
    }
    return cek;
}
int KuadranL(Line L)
{
    int kuadran;
    if (((L.PAw).X > 0) && ((L.PAkh).X > 0) && ((L.PAw).Y > 0) && ((L.PAkh).Y > 0))
    {
        kuadran = 1;
    }
    else if (((L.PAw).X < 0) && ((L.PAkh).X < 0) && ((L.PAw).Y > 0) && ((L.PAkh).Y > 0))
    {
        kuadran = 2;
    }
    else if (((L.PAw).X < 0) && ((L.PAkh).X < 0) && ((L.PAw).Y < 0) && ((L.PAkh).Y < 0))
    {
        kuadran = 3;
    }
    else if (((L.PAw).X > 0) && ((L.PAkh).X > 0) && ((L.PAw).Y < 0) && ((L.PAkh).Y < 0))
    {
        kuadran = 4;
    }
    return kuadran;
}
boolean IsTegakLurus(Line L, Line L1)
{
    boolean cek;
    int g1, g2, gt;
    g1 = (L.PAkh.Y - L.PAw.Y) / (L.PAkh.X - L.PAw.X);
    g2 = (L1.PAkh.Y - L1.PAw.Y) / (L1.PAkh.X - L1.PAw.X);
    gt = g1 * g2;
    if (gt == (-1))
    {
        cek = true;
    }
    else
    {
        cek = false;
    }
    return cek;
}
boolean IsSejajar(Line L, Line L1)
{
    boolean cek;
    int g1, g2;
    g1 = (L.PAkh.Y - L.PAw.Y) / (L.PAkh.X - L.PAw.X);
    g2 = (L1.PAkh.Y - L1.PAw.Y) / (L1.PAkh.X - L1.PAw.X);
    if (g1 == g2)
    {
        cek = true;
    }
    else
    {
        cek = false;
    }
    return cek;
}
void GeserL(Line *L, int deltaX, int deltaY)
{
    (*L).PAw.X = (*L).PAw.X + deltaX;
    (*L).PAw.Y = (*L).PAw.Y + deltaY;
    (*L).PAkh.X = (*L).PAkh.X + deltaX;
    (*L).PAkh.Y = (*L).PAkh.Y + deltaY;
}
void MirrorOfL(Line *L, boolean SbX, boolean SbY)
{
    if (SbX == true)
    {
        (*L).PAw.X = -((*L).PAw.X);
        (*L).PAkh.X = -((*L).PAkh.X);
    }
    else if (SbY == true)
    {
        (*L).PAw.Y = -((*L).PAw.Y);
        (*L).PAkh.Y = -((*L).PAkh.Y);
    }
}
float Panjang(Line L)
{
    float selisihX, selisihY, temp;
    selisihX = (L.PAkh.X) - (L.PAw.X);
    selisihY = (L.PAkh.Y) - (L.PAw.Y);
    selisihX = selisihX * selisihX;
    selisihY = selisihY * selisihY;
    temp = selisihX + selisihY;
    temp = sqrt(temp);
    return temp;
}
float Arah(Line L)
{
    float arah;

    arah = tan(abs(L.PAw.Y - L.PAkh.Y) / abs(L.PAw.X - L.PAkh.X)) * 180 / 3.14;

    if (L.PAw.X < L.PAkh.X && L.PAw.Y > L.PAkh.Y)
    {

        arah = arah;
    }
    else if (L.PAw.X > L.PAkh.X && L.PAw.Y > L.PAkh.Y)
    {

        arah = 180 - arah;
    }
    else if (L.PAw.X > L.PAkh.X && L.PAw.Y < L.PAkh.Y)
    {
        arah = 180 + arah;
    }
    else if (L.PAw.X < L.PAkh.X && L.PAw.Y < L.PAkh.Y)
    {
        arah = 360 - arah;
    }
    else if (L.PAw.X == L.PAkh.X && L.PAw.Y > L.PAkh.Y)
    {
        arah = 90;
    }
    else if (L.PAw.X == L.PAkh.X && L.PAw.Y < L.PAkh.Y)
    {
        return arah = 270;
    }
    else if (L.PAw.X > L.PAkh.X && L.PAw.Y == L.PAkh.Y)
    {
        return arah = 180;
    }
    else if (L.PAw.X < L.PAkh.X && L.PAw.Y == L.PAkh.Y)
    {
        return arah = 0;
    }
}

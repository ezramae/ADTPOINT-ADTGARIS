/* NIM : 3411201084
   Nama : EZRA M.C
   Kelas : Informatika - C
*/
#include "boolean.h"

typedef struct
{
    int X;
    int Y;
} Point;

Point MakePoint(int x, int y);
int GetAbsis(Point P);
int GetOrdinat(Point P);
void SetAbsis(Point *P, int x);
void SetOrdinat(Point *P, int y);
void BacaPoint(Point *P);
void TulisPoint(Point *P);
Point Tambah(Point P1, Point P2);
Point Kurang(Point P1, Point P2);
Point Dot(Point P1, Point P2);
Point Cross(Point P1, Point P2);
boolean EQ(Point P1, Point P2);
boolean NEQ(Point P1, Point P2);
boolean LebihKecil(Point P1, Point P2);
boolean LebihBesar(Point P1, Point P2);
boolean IsOrigin(Point P);
boolean IsOnSbX(Point P);
boolean IsOnSbY(Point P);
int Kuadran(Point P);
Point NextX(Point P);
Point NextY(Point P);
Point PlusDelta(Point P, int deltaX, int deltaY);
Point MirrorOf(Point P, boolean SbX, boolean SbY);
float Jarak0(Point P);
void Geser(Point *P, int deltaX, int deltaY);
void GeserKeSbX(Point *P);
void GeserKeSbY(Point *P);
void Mirror(Point *P, boolean SbX, boolean SbY);
void Putar(Point *P, float Sudut);

/* NIM : 3411201084
   Nama : EZRA M.C
   Kelas : Informatika - C
*/
#include "boolean.h"
#include "point.h"

typedef struct
{
    Point PAw;
    Point PAkh;
} Line;

void MakeGARIS(Point P1, Point P2, Line *L);
Point GetPAw(Line G);
Point GetPAkh(Line G);
void SetPAw(Line *G, Point newPAw);
void SetPAkh(Line *G, Point newPAkh);
void BacaGARIS(Line *L);
void TulisGARIS(Line L);
boolean EQL(Line L1, Line L2);
boolean NEQL(Line L1, Line L2);
boolean IsOnSbXL(Line L);
boolean IsOnSbYL(Line L);
int KuadranL(Line L);
boolean IsTegakLurus(Line L, Line L1);
boolean IsSejajar(Line L, Line L1);
Line HslGeser(Line L, int DX, int DY);
Line MirrorOfL(Line L, boolean SbX, boolean SbY);
float Panjang(Line L);
float Arah(Line L);
float SudutGaris(Line L, Line L1);
void GeserL(Line *L, int deltaX, int deltaY);
void MirrorL(Line *L, float Sudut);
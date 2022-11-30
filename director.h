#ifndef DIRECTOR_H_INCLUDED
#define DIRECTOR_H_INCLUDED

struct DirectorE;

typedef struct DirectorE * DirectorP;

DirectorP creardirectorvacio();

void mostrardirector(DirectorP d);

int buscarvacio(DirectorP d);

void agregarobras(DirectorP d,char n[20],char a[20],int p);

void setnombreyap(DirectorP d,char n[20]);

void setdni(DirectorP d,int d1);;

#endif // DIRECTOR_H_INCLUDED

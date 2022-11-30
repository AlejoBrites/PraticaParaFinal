#ifndef MUSEO_H_INCLUDED
#define MUSEO_H_INCLUDED

struct MuseoE;

typedef struct MuseoE * MuseoP;

MuseoP cargarmuseovacio();

void crearmuseoporparametro(MuseoP m,char n[20],char n2[20]);

void agregardirector(MuseoP m,char n[20],int dni);

void agregarobrasmuseo(MuseoP m,char n[20],char a[20],int p);

void mostrarmuseo(MuseoP m);

#endif // MUSEO_H_INCLUDED

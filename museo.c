#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "director.h"
#include "obras.h"
#include "museo.h"

struct MuseoE{

    char nombremuseo[20];
    char direccion[20];
    DirectorP direc;

};



MuseoP cargarmuseovacio(){

    MuseoP m=malloc(sizeof(struct MuseoE));

    strcpy(m->nombremuseo,"VACIO");
    strcpy(m->direccion,"VACIO");

    m->direc=creardirectorvacio();

return m;
};

void crearmuseoporparametro(MuseoP m,char n[20],char n2[20]){

    strcpy(m->nombremuseo,n);
    strcpy(m->direccion,n2);

};

void agregardirector(MuseoP m,char n[20],int dni){

    setnombreyap(m->direc,n);
    setdni(m->direc,dni);

};

void agregarobrasmuseo(MuseoP m,char n[20],char a[20],int p){

    agregarobras(m->direc,n,a,p);

};

void mostrarmuseo(MuseoP m){

    printf("\nNombre del museo: %s",m->nombremuseo);
    printf("\nDireccion del museo: %s\n",m->direccion);

    mostrardirector(m->direc);

};

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "director.h"
#include "obras.h"
#include "museo.h"

struct ObrasE{

     char nombre[20];
     char autor[20];
     int precio;

};

ObrasP cargarobrasvacia(){

    ObrasP o=malloc(sizeof(struct ObrasE));

    strcpy(o->nombre,"VACIO");
    strcpy(o->autor,"VACIO");
    o->precio=-1;

return o;
};

void mostrarobras(ObrasP o){

   printf("\n       Nombre de la obra: %s",o->nombre);
   printf("\n       Nombre del autor: %s",o->autor);
   printf("\n       Precio de la obra: %d Millones\n",o->precio);



};

int getprecio(ObrasP o){


return o->precio;
};


void setnombreobra(ObrasP o,char n[20]){

    strcpy(o->nombre,n);

};

void setautorobra(ObrasP o,char n[20]){

    strcpy(o->autor,n);

};

void setprecioobra(ObrasP o,int p){

    o->precio=p;

};

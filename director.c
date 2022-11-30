#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "director.h"
#include "obras.h"
#include "museo.h"
#define TAM 10

struct DirectorE{

    char nombreyapellido[20];
    int dni;
    ObrasP obrass[TAM];

};

DirectorP creardirectorvacio(){

    DirectorP d=malloc(sizeof(struct DirectorE));

    strcpy(d->nombreyapellido,"VACIO");
    d->dni=-1;

    for(int i=0;i<TAM;i++){

        d->obrass[i]=cargarobrasvacia();

    }

return d;
};

void mostrardirector(DirectorP d){

    printf("\n    Nombre del director: %s",d->nombreyapellido);
    printf("\n    Dni del director: %d",d->dni);
    printf("\n\n***********************************************\n");

    for(int i=0;i<TAM;i++){


        mostrarobras(d->obrass[i]);

    }
};

int buscarvacio(DirectorP d){
    int vacio=-1;

    for(int i=0;i<TAM;i++){

        if(getprecio(d->obrass[i])==-1){
            vacio=i;
            i=TAM;
        }

    }
return vacio;
};

void agregarobras(DirectorP d,char n[20],char a[20],int p){

    int vacio=buscarvacio(d);

    if(vacio!=-1){
        setnombreobra(d->obrass[vacio],n);
        setautorobra(d->obrass[vacio],a);
        setprecioobra(d->obrass[vacio],p);
    }
};

void setnombreyap(DirectorP d,char n[20]){

     strcpy(d->nombreyapellido,n);

};

void setdni(DirectorP d,int d1){

    d->dni=d1;

};

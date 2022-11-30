#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "director.h"
#include "obras.h"
#include "museo.h"

int main()
{

    MuseoP m1=cargarmuseovacio();

    crearmuseoporparametro(m1,"Historico Nacional","Defensa 1600");

    agregardirector(m1,"Garbiel Di Meglio",11222333);

    agregarobrasmuseo(m1,"Novhe estrellada","Van Gogh",23);
    agregarobrasmuseo(m1,"El Beso","Gustav Klimt",17);
    agregarobrasmuseo(m1,"El Grito","Edvard Munch",11);
    agregarobrasmuseo(m1,"La zurda magica","Messi",10000);


    mostrarmuseo(m1);


    return 0;
}

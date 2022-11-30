#ifndef OBRAS_H_INCLUDED
#define OBRAS_H_INCLUDED

struct ObrasE;

typedef struct ObrasE * ObrasP;

ObrasP cargarobrasvacia();

void mostrarobras(ObrasP o);

int getprecio(ObrasP o);

void setnombreobra(ObrasP o,char n[20]);
void setautorobra(ObrasP o,char n[20]);
void setprecioobra(ObrasP o,int p);

#endif // OBRAS_H_INCLUDED

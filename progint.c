#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "Ponto.h"
 struct ponto{//definir o tipo de ponteiro pra essa estrutura
    float x;
    float y;
 };
    //aloca e retorna um ponto com coordenadas x e y
    Ponto* pto_cria(float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if(p!= NULL){
        p->x=x;
        p->y=y;

    }
    return p;
    }
    void pto_libera(Ponto* p){
    free(p);
         }
    void pto_acessa(Ponto* p, float* x, float* y){
    *x= p->x;
    *y = p->y;


    }
    void pto_atribui(Ponto* p, float x, float y){
    p->x = x;
    p->y = y;

    }
    float pto_distancia(Ponto* p1, Ponto* p2){
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx *  dx + dy * dy);

    }
int main(){
    float d;
     Ponto *p, *q;
     p = pto_cria(15,21);
     q = pto_cria(7,25);
     d = pto_distancia(p,q);
     printf("distancia entre os pontos %f\n " ,d);
     pto_libera(q);
     pto_libera(p);

     system("pause");
     return 0;


    };


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "circulo.h"

Circulo* circ_cria(float x, float y, float r){
    Circulo *c = malloc(sizeof(Circulo));
    
    c -> x = x;
    c -> y = y;
    c -> raio = r;

    return c; 
}

void circ_libera (Circulo *c){
    free(c);
}

float circ_area(Circulo *c){
    float area = M_PI * (pow(c -> raio, 2));
    return area; 
}

int circ_concentricos(Circulo *c1, Circulo *c2){
    if(c1 -> x == c2 -> x && c1 -> y == c2 -> y)
        return 1;
    else 
        return 0;
}

float circ_raio(Circulo *c){
    return c-> raio;
}
#include <stdio.h>
#include "circulo.h"

int main(){
    float x, y, r, raio;
    char conc; 

    Circulo* c = circ_cria(1, 5, 6); 
    float area = circ_area(c);
    printf("Area do circulo criado: %.3fcm2\n", area);
    raio = circ_raio(c);
    printf("O raio do circulo e: %.3fcm\n", raio);

    void circ_libera(Circulo *c);
    printf("\nMemoria circulo c apagada com sucesso.\n");

    Circulo* c1 = circ_cria(15, 10, 30); 

    area = circ_area(c1);
    printf("\nArea do circulo c1 criado: %.3fcm2\n", area);
    raio = circ_raio(c1);
    printf("O raio do circulo c1 e: %.3fcm\n", raio);

    Circulo* c2 = circ_cria(15, 10, 15); 
    area = circ_area(c2);
    printf("\nArea do circulo c2 criado: %.3fcm2\n", area);
    raio = circ_raio(c2);
    printf("O raio do circulo c2 e: %.3fcm\n", raio);
    
    conc = circ_concentricos(c1, c2);

    if(conc == 1)
        printf("Os circulos sao concentricos.\n");
    else   
        printf("O circulos nao sao concentricos.\n");
    
    return 0;
}
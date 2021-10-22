# pisosPonteiro-c
#include <stdio.h>
void pisos(int, int, int*, int*);

int main(){
    int largura, comprimento, PrimeiroTipo, SegundoTipo;
    scanf ("%d %d", &largura, &comprimento);
    pisos(largura, comprimento, &PrimeiroTipo, &SegundoTipo);
    printf("%d\n%d\n", PrimeiroTipo, SegundoTipo);
    return 0;
}
void pisos(int largura, int comprimento , int *PrimeiroTipo, int *SegundoTipo){
    
    
 
*PrimeiroTipo = (comprimento *  largura) +  (comprimento-1) * (largura - 1);
*SegundoTipo = (comprimento -1) * 2  + (largura-1) *2;
    
    
}

#include <stdio.h>
 
int main() {
    float nota1, nota2, nota3, nota4, media;
    
    printf("...Encontre sua média...\n\n");
    
    printf("Entre com a primeira nota: ");
    scanf("%f", &nota1);
    printf("\nEntre com a segunda nota: ");
    scanf("%f", &nota2);
    printf("\nEntre com a terceira nota: ");
    scanf("%f", &nota3);
    printf("\nEntre com a quarta nota: ");
    scanf("%f", &nota4);
    media = (nota1+nota2+nota3+nota4)/4;
    

    printf("\nA média é: %.2f", media);

 
    return 0;
}
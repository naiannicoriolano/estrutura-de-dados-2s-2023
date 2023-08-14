#include <stdio.h>


void main(){
    int num, cont = 0;
    printf("Digite um número: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
        if (num % i == 0)
            cont++;
    if (cont == 2)
        printf("O número %d é primo", num);
    else printf("O número %d não é primo", num);
}
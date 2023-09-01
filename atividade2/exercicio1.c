#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int i[4];
    int soma=0;
    int conta;
	
	for(conta=0; conta<4; conta++){
		printf("Digite os numeros da array [%d]: ",conta);
		scanf("%d", &i[conta]);	
	}
	
	for(conta=0;conta<4; conta++){
		soma= soma+ i[conta];
		
		
	}
	 printf("O somatorio e = %d\n", soma);
	
	return 0;
}
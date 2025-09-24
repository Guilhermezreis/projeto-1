/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int jogador, maquina;
    char continuar;
    do{
    printf("0: Pedra 1: Papel: 2 Tesoura\n");
    scanf("%d", &jogador);
    maquina = rand() % 3;
    if(jogador == maquina){
        printf("Empate");
    }
    else if(jogador == 0 && maquina == 2 || jogador == 1 && maquina == 0 || jogador == 2 && maquina == 1){
        printf("Ganhou");
    }
    else{
        printf("Perdeu");
    }
    printf("\nQuer parar?\n");
    scanf("%s", &continuar);
    
    }while( continuar != 's' && continuar != 'S');
    
    

    return 0;
}

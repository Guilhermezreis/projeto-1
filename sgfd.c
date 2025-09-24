#include <stdio.h>

int main()
{
	int jogador, maquina;
	printf(" 1 = papel\n 2 = pedra\n 3 = tesoura\n");
	scanf("%d", &jogador);
	maquina = rand() % 3;
	if (jogador == maquina){
	    printf("empate");
	}else if (jogador == 1 && maquina == 2){
	    printf("jogador ganhou");
	}else if (jogador == 1 && maquina == 3){
	    printf("maquina ganhou");
	}else if (jogador == 2 && maquina == 1){
	    printf("maquina ganhou");
	}else if (jogador == 2 && maquina == 3){
	    printf("jogador ganhou");
	}else if (jogador == 3 && maquina == 2){
	    printf("maquina ganhou");
	}else if (jogador == 3 && maquina == 1){
	    printf("jogador ganhou");
	}

	return 0;
}

#ifdef COFFE_H
#define COFFE_H

#include <stdio.h>

void apresentacao() 
{
	printf ("Seja bem vindo a biblioteca coffe.h\n");
}

void fazerCafe(int marca) {

	switch(marca) {
		case 1:
			printf("Você escolheu Melita a Negar mais linda do Brasil\n");
			break;
		case 2:
			printf("Você escolheu Café pilão o mais saboroso entre os cafés\n");
			break;
		case 3:
			printf("Você escolheu café 3 corações o café dos apaixonados\n");
			break;
		default:
			printf("Deu erro tome um chimarrão\n");
	
	
	}

}

void cafezinho() {

	printf("Corre no cafezinho do congresso que o Saney morreu, aleluia irmãos\n");

}

void vidaDeSUporte(int frase) {

	switch(frase) {
		case 1:
			printf ("Onde está o café?\n");
			break;
		case 2:
			printf("Estagiário acabou o café, vá fazer mais\n");
			break;
		case 3:
			printf("Se a empresa é boa o café é bom\n");
			break;
		case 4:
			printf("10 anos nessa indústria vital para desistalar o Baidu\n");
			break;
	
	}
	
float tempoDePreparo(float ml) {

	float vazao = 50/17; // Vazão nespresso ml/s
	return vazao * ml;
}
	
}






#endif /* COFFE_H *?

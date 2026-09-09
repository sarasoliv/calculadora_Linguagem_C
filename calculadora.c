#include<stdio.h>

int main(void){
    //calculadora
    float num1, num2, conta;
    char opcao;


    printf("\n\n----------calculadora----------\n\n\n"\
        "Digite o primeiro numero: ");
        
if (scanf(" %f", &num1) == 1){
    printf("\nDigite o segundo numero: ");
}
else{
	printf("Digito invalido!");
	return 0;
}
if (scanf(" %f", &num2) == 1){
    printf("\n\n----------Escolha a operacao da sua conta----------\n\n"\
    "(+) - adicao\n"\
    "(-) - subtracao\n"\
    "(*) - multiplicacao\n"\
    "(/) - divisao\n");

    printf("\nopcao: ");
    scanf(" %c", &opcao);
}
else{
	printf("Digito invalido!");
	return 0;
}	
	
	if (opcao == '+'){
        conta = num1 + num2;
        printf("o resultado da sua conta e: %f ", conta);
	}	
	else if (opcao == '-'){
        conta = num1 - num2;
        printf("o resultado da sua conta e: %f ", conta);
	}
	else if (opcao == '*'){
        conta = num1 * num2;
        printf("o resultado da sua conta e: %f ", conta);
	}
	else if (opcao == '/'){
        conta = num1 / num2;
        printf("o resultado da sua conta e: %f ", conta);
    }
    else{
    	printf("Digito invalido!");
    	return 0;
	}




	return 0;
}

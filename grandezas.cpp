#include <stdio.h>

int main()
{
	int p1,v1,i1,r1;
	int esc, meio1;
	
	printf("DESCUBRA O VALOR DA GRANDEZA ELETRICA: \n\n");

	printf("Escolha a grandeza que voce quer descobrir: \n");	
	
	printf("Escolha \n\n");
	printf("1 - Tensao \n");
	printf("2 - Corrente \n");
	printf("3 - Potencia \n");
	printf("4 - Resistencia \n\n");
	scanf("%d", &esc);
	printf("\n");
	
	r1=0;
	i1=0;
	v1=0;
	p1=0;
	
	switch(esc)
	{
		case 1:
			//Tensao
			
			printf("Voce tem o valor da Resistencia? \n");
			printf("1-Sim ou 2-Nao \n\n");
			scanf("%d", &meio1);
			printf("\n");
			
			if (meio1==1)
			{
				printf("Digite o valor da Resistencia: \n\n");
				scanf("%d", &r1);
				printf("\n");
				
				printf("Digite o valor da Corrente: \n\n");
				scanf("%d", &i1);
				printf("\n");
				
				v1=r1*i1;
				
				printf("Resultado da Tensao e: %d", v1);
				printf(" Volts.");
				
			}
			
			else 
			{
				
				printf("Digite o valor da Potencia: \n\n");
				scanf("%d", &p1);
				printf("\n");
				
				printf("Digite o valor da Corrente: \n\n");
				scanf("%d", &i1);
				printf("\n");
				
				v1=p1/i1;
				
				printf("Resultado da Tensao e: %d", v1 );	
				printf(" Volts.");
								
			}
			
			break;
			
		case 2: 
		//Corrente
			
			printf("Voce tem o valor da Resistencia? \n");
			printf("1-Sim ou 2-Nao \n\n");
			scanf("%d", &meio1);
			printf("\n");
			
			if (meio1==1)
			{
				printf("Digite o valor da Resistencia: \n\n");
				scanf("%d", &r1);
				printf("\n");
				
				printf("Digite o valor da Tensao: \n\n");
				scanf("%d", &v1);
				printf("\n");
				
				i1=r1/v1;
				
				printf("Resultado da Corrente e: %d", i1);
				printf(" Ampers.");
				
			}
			
			else 
			{
				
				printf("Digite o valor da Potencia: \n\n");
				scanf("%d", &p1);
				printf("\n");
				
				printf("Digite o valor da Tensao: \n\n");
				scanf("%d", &v1);
				printf("\n");
				
				i1=p1/v1;
				
				printf("Resultado da Corrente e: %d", i1 );	
				printf(" Ampers.");
								
			}
			
			break;

		case 3: 
		//Potencia
			
			printf("Digite o valor da Tensao: \n\n");
			scanf("%d", &v1);
			printf("\n");
			
			printf("Digite o valor da Corrente: \n\n");
			scanf("%d", &i1);
			printf("\n");
			
			p1=v1*i1;
			
			printf("Resultado da Potencia e: %d", p1 );	
			printf(" Watls.");
			
			break;	
			
		case 4: 
			// Resistencia
			
			printf("Digite o valor da Tensao: \n\n");
			scanf("%d", &v1);
			printf("\n");
			
			printf("Digite o valor da Corrente: \n\n");
			scanf("%d", &i1);
			printf("\n");
			
			r1=v1/i1;
			
			printf("Resultado da Resistencia e: %d", r1 );	
			printf(" Ohms.");
		
			
			break;	
				
	}
	return 0;
}

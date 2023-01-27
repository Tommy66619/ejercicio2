#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
	char num[10];
	char *str1;

	printf("Ingrese un numero decimal del 0 al 9\n");
	gets(num);
	
	if(strlen(num)<=1){
		
		if(num[0]=='0'){	printf("\nEl Numero Binario Es: 0000");	}
		else if(num[0] == '1'){	printf("\nEl Numero Binario Es: 0001");	}
		else if(num[0] == '2'){	printf("\nEl Numero Binario Es: 0010");	}
		else if(num[0] == '3'){	printf("\nEl Numero Binario Es: 0011");	}
		else if(num[0] == '4'){	printf("\nEl Numero Binario Es: 0100");	}
		else if(num[0] == '5'){	printf("\nEl Numero Binario Es: 0101");	}
		else if(num[0] == '6'){	printf("\nEl Numero Binario Es: 0110");	}
		else if(num[0] == '7'){	printf("\nEl Numero Binario Es: 0111");	}
		else if(num[0] == '8'){	printf("\nEl Numero Binario Es: 1000");	}
		else if(num[0] == '9'){	printf("\nEl Numero Binario Es: 1001");	}	
		
		else{
			printf("\nCaracter Invalido");
		}
	}
	
	else{
		printf("\nOpcion no valida");
	}
	getch();
}

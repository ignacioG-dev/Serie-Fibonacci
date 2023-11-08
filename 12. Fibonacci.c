#include <stdio.h>

int fibonacci(int);
void serieFibonacci();

int main(){
	serieFibonacci();
	
	return 0;
}

void serieFibonacci(){
	int i,num;
	
	printf("\nMostrar sucesion fibonacci de: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		printf("%d - ",fibonacci(i));
	}
}

int fibonacci(int pNum){
	if(pNum==0||pNum==1){
		return pNum;
	} else{
		return (fibonacci(pNum-1)+fibonacci(pNum-2));
	}
}


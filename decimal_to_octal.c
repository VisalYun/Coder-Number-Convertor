#include<stdio.h>

main(){
	int decimal, octal[50], i=0,j;
	printf("Enter your decimal value: ");
	scanf("%d", &decimal);
	
	do{
		octal[i]=decimal%8;
		decimal/=8;
		i++;
	}while(decimal>0);
	
	for(j=i-1;j>=0;j--){
		printf("%d", octal[j]);
	}	
}

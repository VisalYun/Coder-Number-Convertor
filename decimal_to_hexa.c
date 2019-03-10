#include<stdio.h>

main(){
	int decimal,hexa[50], i=0, j;
	char AtoF;
	printf("Enter your decimal value: ");
	scanf("%d", &decimal);
	
	do{
		hexa[i]=decimal%16;
		decimal/=16;
		i++;
	}while(decimal>0);
	
	for(j=i-1;j>=0;j--){
		if(hexa[j]>=10){
			AtoF= 55 + hexa[j];
			printf("%c", AtoF);
		}
		else{
			printf("%d", hexa[j]);
		}	
	}
}

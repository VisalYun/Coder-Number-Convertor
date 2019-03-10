#include<stdio.h>

main(){
	int decimal, binary[50], i=0,j;
	printf("Enter your decimal value: ");
	scanf("%d", &decimal);
	
	do{
		binary[i]=decimal%2;
		decimal/=2;
		i++;
	}while(decimal>0);
	
	for(j=i-1;j>=0;j--){
		printf("%d", binary[j]);
	}	
}

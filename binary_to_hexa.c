#include<stdio.h>
#include<math.h>

main(){
	int binary, decimal, hexa[10], i=0, j, AtoF;
	printf("Enter binary value: ");
	scanf("%d", &binary);
	
	while(binary>0){
		if(binary%10==1||binary%10==0){
			decimal+= (binary%10)*pow(2,i);
			binary/=10;
			i++;
		}
		else{
			printf("Error!!!");
			return 0;
		}
	}
	
	i=0;
	while(decimal>0){
		hexa[i]=decimal%16;
		decimal/=16;
		i++;
	}
	
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

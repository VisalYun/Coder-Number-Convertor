#include<stdio.h>
#include<math.h>

main(){
	int binary, decimal, octal[10], i=0, j;
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
		octal[i]=decimal%8;
		decimal/=8;
		i++;
	}
	
	for(j=i-1;j>=0;j--){
		printf("%d", octal[j]);
	}
}

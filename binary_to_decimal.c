#include<stdio.h>
#include<math.h>

main(){
	int binary, decimal, i=0, remainder;
	printf("Enter binary value: ");
	scanf("%d", &binary);
	
	do{
		if(binary%10==1||binary%10==0){
			decimal+= (binary%10)*pow(2,i);
			binary/=10;
			i++;
		}
		else{
			printf("Error!!!");
			return 0;
		}
	}while(binary>0);
	
	printf("%d", decimal);
}

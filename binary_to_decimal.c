#include<stdio.h>
#include<math.h>

main(){
	int binary, decimal, i=0, remainder;
	printf("Enter binary value: ");
	scanf("%d", &binary);
	
	do{
		remainder=binary%10;
		if(remainder==0||remainder==1){
			binary/=10;
			remainder*=pow(2,i);
			decimal+=remainder;
			i++;	
		}
		else{
			printf("Error!!!");
			return 0;
		}
	}while(binary>0);
	
	printf("%d", decimal);
}

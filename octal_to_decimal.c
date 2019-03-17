#include<stdio.h>
#include<math.h>

main(){
	int octal, decimal, i=0, length;
	
	printf("Enter octal value: ");
	scanf("%d",&octal);
	
	while(octal>0){
		decimal+=(octal%10)*pow(8,i);
		octal/=10;
		i++;
	}
	printf("%d",decimal);
}

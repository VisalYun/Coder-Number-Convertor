#include<stdio.h>
#include<string.h>
#include<math.h>

main(){
	int decimal, binary[20], i=0, j, length;
	char hexa[20];
	
	printf("Enter hexa value: ");
	scanf("%s",&hexa);
	
	length=strlen(hexa);
	
	for(i=0;hexa[i]!='\0';i++,length--){
		if(hexa[i]>='0'&&hexa[i]<='9'){
			decimal+=(hexa[i]-'0')*pow(16,length-1);
		}
		if(hexa[i]>='A'&&hexa[i]<='F'){
			decimal+=(hexa[i]-55)*pow(16,length-1);
		}
		if(hexa[i]>='a'&&hexa[i]<='f'){
			decimal+=(hexa[i]-87)*pow(16,length-1);
		}
	}
	i=0;
	while(decimal>0){
		binary[i]=decimal%2;
		decimal/=2;
		i++;
	}
	for(j=i-1;j>=0;j--){
		printf("%d", binary[j]);
	}
}

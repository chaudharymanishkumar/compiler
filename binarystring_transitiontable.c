#include<stdio.h>
void main(){
	char input[100];
	int transition[3][2]={1,0,2,0,2,0};
	int state=0,i=0;
	printf("Enter the input string: ");
	scanf("%s",input);
	while(input[i]!='\0'){
		if(input[i] !='0' || input[i]!= '1'){
			state=-1;
			break;
			}
		state=transition[state][(input[i]-'0')];
		i++;
	}
	if(state==2)
		printf("%s is a valid string\n",input);
	else
		printf("%s is not a valid string\n",input);
	
}

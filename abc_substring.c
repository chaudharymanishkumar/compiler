#include<stdio.h>
void main(){
	char input[100];int k;
	int transition[6][3]={1,0,0,1,2,0,1,0,3,4,3,3,4,5,3,4,3,3};
	int state=0,i=0;
	printf("Enter the input string: ");
	scanf("%s",input);
	while(input[i]!='\0'){
		if(input[i] !='a' || input[i]!='b' || input[i]!='c')
			break; 
		if(input[i]=='a'){
			k=0;
		}else if(input[i]=='b'){
			k=1;
		}else if(input[i]=='c'){
			k=2;
		}else{
			state=0;
			break;
			}
		state=transition[state][k];
		i++;
	}
	if(state==3 || state==4 || state==5 )
		printf("%s is a valid string\n",input);
	else
		printf("%s is not a valid string\n",input);
	
}

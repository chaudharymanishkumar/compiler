 #include<stdio.h>
void main(){
	char input[100];
	int state=0,i=0;
	printf("Enter the input string: ");
	scanf("%s",input);
	while(input[i]!='\0'){
		if(input[i] !='0' || input[i]!= '1'){
			state=-1;
			break;
			}
		if(input[i]=='1' && state==0)
			state=0;
		else if(input[i]=='0' && state==0)
			state=1;
		else if(input[i]=='0' && state==1)
			state=2;
		else if(input[i]=='1' && state==1)
			state=0;
		else if(input[i]=='1' && state==2)
			state=0;
		else if(input[i]=='0' && state==2)
			state=2;
		else
			break;  
		i++; 
	}
	if(state==2)
		printf("%s is a valid string\n",input);
	else
		printf("%s is not a valid string\n",input);
}

 #include<stdio.h>
void main(){
	char input[100];
	int state=0,i=0;
	printf("Enter the input string: ");
	scanf("%s",input);
	while(input[i]!='\0'){
		if(input[i] !='a' || input[i]!='b' || input[i]!='c')
			break; 
		if(input[i]=='a' && state==0)
			state=1;
		else if(input[i]=='b' && state==0)
			state=0;
		else if(input[i]=='c' && state==0)
			state=0;
		else if(input[i]=='a' && state==1)
			state=1;
		else if(input[i]=='b' && state==1)
			state=2;
		else if(input[i]=='c' && state==1)
			state=0;
		else if(input[i]=='a' && state==2)
			state=1;
		else if(input[i]=='b' && state==2)
			state=0;
		else if(input[i]=='c' && state==2)
			state=3;
		else if(input[i]=='a' && state==3)
			state=4;
		else if(input[i]=='b' && state==3)
			state=3;
		else if(input[i]=='c' && state==3)
			state=3;
		else if(input[i]=='a' && state==4)
			state=4;
		else if(input[i]=='b' && state==4)
			state=5;
		else if(input[i]=='c' && state==4)
			state=3;
		else if(input[i]=='a' && state==5)
			state=4;
		else if(input[i]=='b' && state==5)
			state=3;
		else if(input[i]=='c' && state==5)
			state=3;
		else
			break;  
		i++; 
	}
	if(state==3 || state==4 || state==5)
		printf("%s is a valid string\n",input);
	else
		printf("%s is not a valid string\n",input);
}

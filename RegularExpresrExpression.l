%{
#include<stdio.h>
int state=0;
%}

%%
aa(a+b)*bb {state=1;printf("Valid string %s",yytext);}
(0+1)*000(0+1)* {state=1;printf("valid string %s",yytext);}
[01]* {}
%%

int yywrap() { }

int main(){
extern FILE *yyin;
yyin=fopen("regular.txt","r");
yylex();
if(state==0){
	printf("Invalid string");}
else{
	printf("valid string");
}
return 0;
}

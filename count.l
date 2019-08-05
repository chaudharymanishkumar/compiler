%{
#include<stdio.h>
int wcount=0,ccount=0,lcount=0;
%}

%%
[a-zA-Z0-9] {ccount++;}
[" "] {wcount++;}
[a-zA-Z0-9]\n {lcount++;wcount++;ccount++;}
\n  {lcount++;}
%%

int yywrap() { }

int main(){
extern FILE *yyin;
yyin=fopen("hello.txt","r");
yylex();
printf("Character : %d",ccount);
printf("\nwordcount: %d",wcount);
printf("\nline: %d",lcount);
return 0;
}

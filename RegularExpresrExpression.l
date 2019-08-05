%{
#include<stdio.h>
%}

%%
"aa"+[a+b]*+"bb" {printf("valid string\n");}
[0-1]*+"000"+[0-1]* {printf("valid string\n");}
.+ {printf("invalid string\n");}

%%

int yywrap(){
return 1;
}

int main(){
yylex();
return 0;
}

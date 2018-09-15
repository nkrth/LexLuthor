%{
#include<stdio.h>
char str[10];
%}
letter ([A-Z]|[a-z])*
digit ([0-9])*
identifier {letter}({letter}|{digit})*
notid [{]|[}]|[(]|[)]|[;]|[<]|[=]|[,]|['\n']|[' ']

%%

"int"|"void" ;
{digit} ;
{identifier} {printf("%s is an identifier\n",yytext);}
{notid} ;

%%

void main()
{
FILE *f;
f=fopen("program.txt","r");
yyin=f;
yylex();
}

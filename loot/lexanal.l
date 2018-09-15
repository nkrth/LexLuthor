%{
#include<stdio.h>
char str[10];
%}
input 0(10|01)*
notinput (.)*

%%

{input} {printf("your string matches");}
{notinput} {printf("No match");}

%%

void main()
{
printf("Enter your string");
fgets(str,sizeof(str),stdin);
yy_scan_string(str);
yylex();
}

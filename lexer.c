#include<stdio.h>
#include<stdlib.h>

int iskeyword(char buff[])
{
    char keyword[32][10]={"int","float","char","printf","if","for","while","else"};
    int i,flag;
    flag=0;
    for(i=0;i<32;i++)
    {
        if(strcmp(buff,keyword[i])==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}

void main(){
    FILE *f;
    char m, c, x, chara[10], buff[15], buffer[10];
    int i, j, k;
    j = 0;
    k = 0;
    f = fopen("sample.txt","r");
    printf("\n");
    while((c=fgetc(f))!=EOF)
    {
        if(c=='>')
        {
            x = fgetc(f);
            if(x == '=') printf("%c%c is a realational operator\n",c,x);
            else printf("%c is a relational operator\n",c);
        }
        if(c=='=')
        {
            x = fgetc(f);
            if(x == '=') printf("%c%c is a relational operator\n",c,x);
        }
        if(c == '!')
        {
            x = fgetc(f);
            if(x == '=') printf("%c%c is a relational operator\n",c,x);
        }  
        if(isdigit(c))
            buffer[k++] = c;
            else if((c == ' ' || c== '\n') && (k !=0))
            {
                buffer[k]= '\0';
                k=0;
                printf("%s is a number\n",buffer);
            }
        if(isalpha(c))
        {
            buff[j++] = c;
            m = fgetc(f);
            while(m != ' ')
            {
                if(isalnum(m)) buff[j++] = m;
                else if((m == ' ' || m == '\n') && (j != 0))
                {
                    buff[j] = '\0';
                    j = 0;
                    if(iskeyword(buff) == 1) printf("%s is keyword\n", buff);
                    else printf("%s is identifier\n", buff);
                }
                m = fgetc(f);
            }
            buff[j] = '\0';
            j = 0;
            if(iskeyword(buff) == 1) printf("%s is keyword\n", buff);
            else printf("%s is identifier\n", buff);

        }
    }
    fclose(f);
}

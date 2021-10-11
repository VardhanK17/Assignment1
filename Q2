#include<stdio.h>

int main()
{
    char s[1000];
    scanf("%s",s);
    int i=0,c=0;
    int count=0;
    int index1=-1,index2=-1;
    while(s[i]!='\0')
    {
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
            c=1;
        else if((s[i]=='.' || s[i]=='-'  || s[i]=='_' || s[i]=='@') && (i!=0 && s[i+1]!='\0'))
            c=1;
        else
        {
            c=-1;
            break;
        }
        if(s[i]=='@')
        {
            count++;
            index1=i;
        }
        if(count>1)
        {
            c=-1;
            break;
        }
        if(s[i]=='.')
        {
            index2=i;
        }
        i++;
    }
    if(index2-index1<2)
        c=-1;
    if(c==1)
        printf("Email address is Valid\n");
    else
        printf("Email address is Invalid\n");
}

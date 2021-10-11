#include<stdio.h>

int main()
{
    char s[1000];
    printf("Enter the input:\n");
    scanf("%s",s);
    int i=0,p1=0,p2=0;
    while(s[i]!='\0')
    {
        if(s[i]=='.')
        {
            p1++;
            if(s[i+1]!='\0')
            p2=1;
        }
        i++;
    }
    if(p1==1 && p2==1)
    printf("Valid\n");
    else
    printf("Invalid\n");
}

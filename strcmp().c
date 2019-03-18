#include<stdio.h>
int compare(char *,char *);
int main()
{
    char str1[50],str2[50];
    puts("enter first string");
    gets(str1);
    puts("enter second string");
    gets(str2);
    printf("%d",compare(str1,str2));
}
int compare(char *str1,char *str2)
{
    int i=0,diff;
    while(str1[i]!='\0' || str2[i]!='\0')
    {
        diff=str1[i]-str2[i];
         if(diff!=0)
            break;
         i++;
    }
    return diff;
}

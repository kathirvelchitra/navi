#include<stdio.h>
void main()
{
    char a[100],b[100],i,j,n;
    printf("enter the two sting");
    scanf("%s,&a,&b");
    for(i=0;a[i]<'0';++i)

        for(j=0;a[j]<'0';++j,++i)
        {
            a[i]=b[j];
        }
        
   a[i]='\0';
   printf("the concatenate of the string is",a);
    }

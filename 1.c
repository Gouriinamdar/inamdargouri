#include<stdio.h>
void main()
{

    int i,j,k[5];
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<=5;j++)
        {
            k[i]=(i)&(j);
        }

    }

    for(i=0;i<5;i++)
    printf("%d\n",k[i]);
}

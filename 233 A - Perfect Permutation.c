#include<stdio.h>

int main()
{

    int num,i;
    scanf("%d",&num);

    if(num%2 != 0)
    {
        printf("-1");
    }

    else
    {

        for(i=num; i>=1; i--)
        {
            printf("%d ",i);
        }
    }


    return 0;
}

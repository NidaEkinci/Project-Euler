#include<stdio.h>
main()
{
    int i=0,t=0;
    while(i<1000)
    {
        if(i%3==0)
        {
           printf("%d\n",i);
           t=t+i; 
        }
        else if(i%5==0)
        {
            printf("%d\n",i);
            t=t+i;
        }
        i++;
    }
    printf("Toplamlari:%d",t);
}

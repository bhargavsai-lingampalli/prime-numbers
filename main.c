#include<stdio.h>
int main(void)
{
    int i,num,res,range,count=1;
    printf("enter number: ");
    scanf("%d",&range);
    for(num=3; num<range; num+=2)
    {
        for(i=3,res=0; i<num && res==0; i+=2)
        {
            if(num%i==0)
                res=1;
        }
        if(res==0)
        {
            printf("%d\t",num);
            count+=1;
        }
    }
    printf("\ntotal count is %d",count);
}
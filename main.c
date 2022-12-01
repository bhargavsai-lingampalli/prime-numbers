#include<stdio.h>
void main()
{
    int i,num,res,range,count=1,sqnum;
    printf("enter number: ");
    scanf("%d",&range);
    printf("2\t");
    for(num=3; num<range; num+=2)
    {
        sqnum=pow(num,0.5);
        for(i=3,res=0; i<sqnum && res==0; i+=2)
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

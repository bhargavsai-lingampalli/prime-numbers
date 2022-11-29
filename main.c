#include<stdio.h>
void main()
{
    int i,num,res,range,count=1,ofnum;
    printf("enter number: ");
    scanf("%d",&range);
    printf("2\t");
    for(num=3; num<range; num+=2)
    {
        ofnum=num/2;
        for(i=3,res=0; i<ofnum && res==0; i+=2)
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

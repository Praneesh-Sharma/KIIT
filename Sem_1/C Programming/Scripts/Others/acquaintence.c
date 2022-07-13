#include <stdio.h>

int main()
{
    int num,i,j,rev=0,d;
    printf("Enter a number: ");
    scanf("%d",&num);
    int a[10],c=0,t=0,flag=1;
    int b[5][5];
    while(num>0)
    {
        d=num%10;
        rev=rev*10+d;
        num=num/10;
        
    }
    while(rev>0)
    {
        a[c]=rev%10;
        rev=rev/10;
        c++;
        
    }
    
    for(i=0;i<5;i++)
    
    {
        for(j=0;j<5;j++)
        {
            if(t>=0 && flag==0)
            {
                 printf("%d ",a[t--]);
            }
            if(t<c && flag==1)
            {
                printf("%d ",a[t++]);
            }
            if(t==c)
            {
                t--;flag=0;
            }
            if(t==-1)
            {
                t=0;flag=1;
            }
            
        }
        printf("\n");
    }
}
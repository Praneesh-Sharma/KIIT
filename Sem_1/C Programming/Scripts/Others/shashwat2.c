#include <stdio.h>

int main()
{
    int a, i=0, c=0, arr[10];
    printf("Enter number: ");
    scanf("%d", &a);

    while(a!=0)
    {   
        arr[i]=a%10;
        a/=10;
        i++;
        c++;
    }

    for(i=0;i<c;i++)
    {
        for(int j=i+1;j<c;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<c-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                c--;
                j--;
            }
        }
    }

    for(i=c;i>-1;i--)
    {
        printf("%d ", arr[i]);
    }
}
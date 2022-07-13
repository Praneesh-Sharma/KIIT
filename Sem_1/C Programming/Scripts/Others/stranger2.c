#include <stdio.h>

int fact(int h)
{
    if(h>=1)
        return h*fact(h-1);
    else
        return 1;
}

int main()
{
    int a, b, i;
    printf("Enter number of elements: ");
    scanf("%d", &a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    printf("Output: ");
    for(i=0;i<a;i++)
    {
        b=fact(arr[i]);
        arr[i]=b;
        printf("%d ", arr[i]);
    }
}
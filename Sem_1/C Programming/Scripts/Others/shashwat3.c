#include <stdio.h>  
#include <conio.h>  

int main ()  
{  
    int arr[20], i=0, j, k, size, a, b;  

    printf("Enter number: ");
    scanf("%d", a); 
      
    while(a!=0)
    {
        arr[i]=a%10;
        a/=10;
        i++;
        size++;
    } 

    for ( i = 0; i < size; i ++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {  
            if ( arr[i] == arr[j])  
            {  
                for ( k = j; k < size - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                size--;  
                  
                j--;      
            }  
        }  
    }  
      
      
    printf (" \n Array elements after deletion of the duplicate elements: ");  
      
    for ( i = 0; i < size; i++)  
    {  
        printf (" %d \t", arr[i]);  
    }  
    return 0;  
}  
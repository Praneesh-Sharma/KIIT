#include <stdio.h>
#include <string.h>
int main()
{
   printf("Enter rows and columns: ");
   int r,c;
   scanf("%d%d",&r,&c);
   printf("Enter number: ");
   char n[10];
   scanf("%s",n);
   int l=strlen(n);
   char arr[r][c],cc=0;
   for(int i=0;i<r;i++)
   {
      for(int j=0;j<c;j++)
      {
         if(cc<l){
         arr[i][j]=n[cc];
         cc++;}
         else
         {
            l=0;
            cc--;
            arr[i][j]=n[cc];
            if(cc==0)
            l=strlen(n);
            
         }
      }
   }
   for(int i=0;i<r;i++)
   {
      for(int j=0;j<c;j++)
      printf("%c\t",arr[i][j]);
      printf("\n");
   }
}
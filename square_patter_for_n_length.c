#include <stdio.h>

void main(){
   int upto;
   printf("Enter the size: ");
   scanf("%d",&upto);
   for(int a=0;a<upto;a++){
       for(int b=0;b<upto;b++){
        if ((a>0 && a<upto-1) && (b>0 && b<upto-1)){
            printf(" ");
        }
        else{
            printf("*");
        }
        
       }
       printf("\n");
   }

}

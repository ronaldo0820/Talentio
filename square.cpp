#include <stdio.h>
#include<stdlib.h>
int main() {
   // printf() displays the string inside quotation
   int x1,y1,x2,y2,x3,y3,x4,y4;
   scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
   if((abs(x1-x2) == abs(x3-x4)) && (abs(x1-x4) == abs(x2-x3)) && (abs(x1-x3) == abs(x2-x4)))
   {
       if((abs(y1-y2) == abs(y3-y4)) && (abs(y1-y4) == abs(y2-y3)) && (abs(y1-y3) ==abs(y2-y4)))
       {
           printf("Yes");
       }
       else
       {
           printf("No");
       }
   }
   else
   {
       printf("No");
   }
   return 0;
}

#include <stdio.h>
#include<math.h>
int main() 
{
    int a;
    printf("enter the value of a \n:");
    scanf("%d", &a);
    switch (a)
    {
      case 5:
      printf("value is 2");
      break;
      case 3:
      printf("value is 3");
      break;
      default :
      printf("nothing matched");
      
    }
   return 0;
}
  

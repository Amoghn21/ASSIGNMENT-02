#include <stdio.h>
#include <stdlib.h>
int main()
{   long long int a,b;
    printf("enter the two numbers:\n");
    scanf("%lld %lld",&a,&b);
    int choice;
    while(1)
    {printf("Choose your choice-->\n Enter 1 for addition\n Enter 2 for multiplication\n Enter 3 to exit\n");
    printf("Enter the choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1: printf("Sum is %lld\n",a+b);
              break;
      case 2: printf("Product is %lld\n",a*b);
              break;
      case 3: exit(1);        
              break;
      default: printf("enter a valid choice\n");

    }
    }
return 0;
}

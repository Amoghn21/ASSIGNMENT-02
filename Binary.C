#include<stdio.h>
#include<stdlib.h>
int binaryproduct(long int binary1, long int binary2)
{
    int i = 0, remainder = 0, sum[20];
    int binaryprod = 0;
 
    while (binary1 != 0 || binary2 != 0)
    {
        sum[i++] =(binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder =(binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    while (i >= 0)
        binaryprod = binaryprod * 10 + sum[i--];
    return binaryprod;
}
int main()
{
    long binary1, binary2;
    printf("Enter the two binary numbers:\n ");
    scanf("%ld %ld",&binary1,&binary2);
        

    int i = 0, remainder = 0, sum[20];
   
    printf("Operations available on this two given binary numbers are--> \n 1.Add the two Binary numbers\n 2.Multiply the two binary numbers\n 3.exit\n");
    int choice;
    while(1)
    {   printf("enter your choice\n");
        scanf("%d",&choice);
        
      switch (choice)

      { 
      case 1:  
           { int i = 0, remainder = 0, sum[20];
                 while (binary1 != 0 || binary2 != 0)
                  {
                      sum[i++] =(binary1 % 10 + binary2 % 10 + remainder) % 2;
                      remainder =(binary1 % 10 + binary2 % 10 + remainder) / 2;
                      binary1 = binary1 / 10;
                      binary2 = binary2 / 10;
                  }
                if (remainder != 0)
                sum[i++] = remainder;
                --i;
                printf("Sum of two binary numbers: ");
                while (i >= 0)
                printf("%d\n", sum[i--]);
          }
                  break;
      case 2:
            {
                int digit, factor = 1;
                long multiply=0;

                 while (binary2 != 0)
                 {
                     digit =  binary2 % 10;
                 if (digit == 1)
                   {
                     binary1 = binary1 * factor;
                     multiply = binaryproduct(binary1, multiply);
                   }
                  else
                      binary1 = binary1 * factor;
                      binary2 = binary2 / 10;
                      factor = 10;
                 }
               printf("Product of two binary numbers: %ld\n", multiply);


            }  
              break;
     case 3: exit(1);
             break;
     default: printf("invalid choice\n");
    }
    
 }
        return 0;

}

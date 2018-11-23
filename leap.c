#include<stdio.h>
int main(void)
{
  int y;
  printf("enter a year:");
  scanf("%d",&y);
  if(y%4==0)
  {
     if(y%100==0)
     {
        if(y%400==0)
        printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        }
        else
            printf("%d is a leap year.", year );
    }
    else
        printf("%d is not a leap year.", year);
    
    return 0;
}
        

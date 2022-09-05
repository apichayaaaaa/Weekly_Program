//จงเขียนฟังก์ชั่น factorial (วิธี2)
#include <stdio.h>
long factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
void main()
{
  int num;  
  long fact;  
  printf("Enter a number: ");  
  scanf("%d", &num);   
   
  fact = factorial(num);  
  printf("Factorial of %d is %d", num, fact);  
  return 0;  
}  
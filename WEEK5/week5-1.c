//จงเขียนฟังก์ชั่น factorial (วิธี1)
#include <stdio.h>
int main()
{
    int i,num,result;
    result = 1;
    printf("Enter a number: ");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        result = result*i;
    }
    printf("Factorial of %d is :  %d",num,result);
    return 0;
}

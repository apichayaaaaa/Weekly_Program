//แสดง*ตามจำนวนเลขที่กรอกวิธีที่1
#include <stdio.h>
int main()
{
    int i;
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    for ( i = 0; i < num ; i++)
    {
        printf ("*");
    }  
    return 0;
}

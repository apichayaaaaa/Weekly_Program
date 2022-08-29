//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นปิระมิดที่มีความสูงเท่ากับตัวเลขที่รับเข้ามา(วิธีที่1)
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int row,space,star,totalnum;
    printf("Enter the number: ");
    scanf("%d",&totalnum);

    for (row = 1; row <= totalnum; row++)
    {
        for (space = 1; space <= (totalnum - row); space++)
        {
            printf(" ");
        }
      
        for (star = 1; star <= ((2*row) - 1); star++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}

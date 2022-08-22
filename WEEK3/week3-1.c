//รับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา(วิธีที่1)
#include <stdio.h>
int main()
{
    int num,i;
    printf("Enter number: ");
    scanf("%d",&num);
    for (i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("*");           
        }
            printf("\n");
    }
    return 0;
}

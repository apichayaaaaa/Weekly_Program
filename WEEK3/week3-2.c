//รับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา(วิธีที่2)
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 1; i <= n * n; i++)
    {
        printf("*");
        if (i % n == 0)
        {
            printf("\n");
        }
    }
    return 0;
} 
//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นรูปนาฬิกาทรายที่มีขนาดความสูงของกระเปาะแต่ละข้างเท่ากับตัวเลขที่รับเข้ามา (วิธี1)
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j < i || j > 2 * n - i)
            {
                printf(" ");
            }
            else
                printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j < i || j > 2 * n - i)
            {
                printf(" ");
            }
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
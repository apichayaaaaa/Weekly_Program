//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นรูปนาฬิกาทรายที่มีขนาดความสูงของกระเปาะแต่ละข้างเท่ากับตัวเลขที่รับเข้ามา (วิธี2)
#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j <= 2 * n - i && j >= i)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
        i += 1;
    }
    i = n - 1;
    while (i >= 1)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j <= 2 * n - i && j >= i)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
        i -= 1;
    }

    return 0;
}
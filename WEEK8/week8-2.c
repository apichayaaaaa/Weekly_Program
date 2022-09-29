// มีคนทั้งหมด n คน ทุกคนต้องการแลกบัตรอวยพรให้กันและกัน ต้องใช้บัตรทั้งหมดกี่ใบ (วิธีที่2)
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int i,n,result;
    printf("There are: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        if (i >= 0)
        {
            result = n*(n-1);
        }
    }
    printf("The total number of card is: %d ", result);
    return 0;
}

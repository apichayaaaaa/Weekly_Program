// มีคนทั้งหมด n คน ทุกคนต้องการแลกบัตรอวยพรให้กันและกัน ต้องใช้บัตรทั้งหมดกี่ใบ (วิธีที่1)
#include <stdio.h>
#include <math.h>
int main()
{
    int n,result;
    printf("There are: ");
    scanf("%d",&n);
    result = n*(n-1);
    printf ("The total number of card is: %d ", result);
    return 0;
}

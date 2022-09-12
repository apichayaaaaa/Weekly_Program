//รับข้อมูล String 1 ชุด แล้วแสดงผลลัพธ์โดยเปลี่ยนตัวอักษรตัวพิมพ์เล็กให้กลายเป็นตัวอักษรตัวพิมพ์ใหญ่ และตัวอักษรตัวพิมพ์ใหญ่กลายเป็นตัวอักษรตัวพิมพ์เล็ก(วิธี2)
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i;
    printf("Input : ");
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
      else if ( (s[i] >= 'A' && s[i] <= 'Z'))
        {
            s[i] = s[i] + 32;
        }
    }
     printf("Output = %s", s);
    return 0;
}
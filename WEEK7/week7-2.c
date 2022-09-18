//จงเขียนฟังก์ชั่นเพื่อหาตัวเลขที่มีค่ามากที่สุดจากอินพุทตัวเลข 2 ตัว (วิธี2)
#include <stdio.h>

int max(int i,int j) {
  return i > j ? i : j;
}

int main() {
  int c[5];
  for (int x = 0; x < 5; x++)
  {
    scanf("%d",&c[x]);
  }
  printf("The maximum number is : %d",max(max(max(max(c[4],c[3]),c[2]),c[1]),c[0]));
  return 0;
}
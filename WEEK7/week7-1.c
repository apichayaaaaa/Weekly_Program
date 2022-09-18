//จงเขียนฟังก์ชั่นเพื่อหาตัวเลขที่มีค่ามากที่สุดจากอินพุทตัวเลข 2 ตัว (วิธี1)
#include <stdio.h>

int max(int A[]) {
  int M = A[0];
  for (int i = 1; i < 5; i++)
  {
    if(M < A[i]) {
      M = A[i];
    }
  }
  return M;
}

int main() {
  int n[5];
  for (int i = 0; i < 5; i++)
  {
    scanf("%d",&n[i]);
  }
  
  printf("The maximum number is :  %d",max(n));
  return 0;
}
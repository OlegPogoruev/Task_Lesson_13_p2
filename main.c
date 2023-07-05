#include <stdio.h>

int main(void)
{
  char a = 'A';
  char b = 'B';
  char* ptr1;
  char** ptr2;

  ptr1 = &a;
  ptr2 = &ptr1;

  printf("ptr2 = %p\n", ptr2);
  printf("*ptr2 = %p\n", *ptr2);
  printf("**ptr2 = %c\n", **ptr2);
  printf("&ptr2 = %p\n", &ptr2);

  printf("\nchange ptr1\n");
  *ptr2 = &b;
  printf("ptr1 = %p\n", ptr1);
  printf("*ptr1 = %c\n", *ptr1);
  printf("&ptr1 = %p\n", &ptr1);


  return 0;
}

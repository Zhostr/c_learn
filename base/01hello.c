#include <stdio.h>

int main() {
   int c = 1;
   char var2[6] = {'1', '2', '3', '4', '5', '6'};

   int* pointer_int = &c;
   // p - Pointer address
   printf("int 变量的地址是: %p\n", pointer_int);
   printf("char 数组的地址是: %p\n", var2);
   printf("指针变量 pointer_int 指向的值是: %d\n", *pointer_int);

   return 0;
}

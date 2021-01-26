#include <stdio.h>
#include <sys/socket.h>

#define LOW 0
#define HIGH 100
main() {
   short s = 10;
   int i = 10;
   long l = 10;
   printf("short 类型占 %d 字节\n", sizeof(s));
   printf("int 类型占 %d 字节\n", sizeof(i));
   printf("long 类型占 %d 字节\n", sizeof(l));
	printf("const low = %d, high = %d", LOW, HIGH);
}

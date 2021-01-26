#include <stdio.h>

long power(int m, int n);

main() {
	long x = power(2, 10);
	printf("2^10 = %d", x);
}

/* 
 * 计算 m 的 n 次方
 * */
long power(int m, int n) {
   long result = 1;
   while(n > 0) {
		result *= m;
		n--;
   } 
	return result; 
}

#include <stdio.h>

int main() {
	int i = 10, j = 20;
	int *ptr = &i;
	
	printf("i의 값 = %d\nj의 값 = %d\n", i, j);
	printf("i의 메모리 주소(&i) = %d\nj의 메모리 주소(&j) = %d\n\n", &i, &j);
	printf("<< ptr=&i 실행>>\n");
	printf("ptr의 메모리 주소(&ptr) = %d\n", &ptr);
	printf("ptr의 값(ptr) = %d\n", ptr);
	printf("ptr의 참조값 (*ptr) = %d\n\n", *ptr);
	
	ptr = &j;
	 
	printf("<< ptr=&j 실행 >>\n");
	printf("ptr의 메모리 주소(&ptr) = %d\n", &ptr);
	printf("ptr의 값(ptr) = %d\n", ptr);
	printf("ptr의 참조값 (*ptr) = %d\n\n", *ptr);
	
	i = *ptr;
	printf("<< i=*ptr 실행 >>\n");
	printf("i의 값 = %d", i);
	                            
	return 0;
}

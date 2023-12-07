#include<stdio.h>
void main() {
	int arr[5] = { 2,4,6,8,10 };
	int* ptr = arr;
	for (int x = 0; x < 5; x++)
	{
		printf("%d %d \n", (*ptr)+x,ptr[x]);
		printf("parkjinseong");
		//main으로 원위치
		//main 1
		printf("123");
		printf("foo에서 main 첫 번째");
	}
}
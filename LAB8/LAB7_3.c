/*
 LAB7_3.c
 컴퓨터학과 20170978 정설아
 컴퓨터프로그래밍 03분반
 */
#include <stdio.h>
int main(void) {
    int *pi;
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[][3] = {{1, 2, 3}, {10, 20, 30}, {100, 200, 300}, {1000, 2000, 3000}};
    
    int i, sum;
    
    sum = 0;
    pi = arr1;
    for(i = 0; i < sizeof(arr1) / sizeof(int); i++)
        sum += *pi++;
    printf("The sum of arr1 elements: %d\n", sum);
    sum = 0;
    pi = (int *)arr2;
    for (i = 0; i < sizeof(arr2)/sizeof(int); i++)
        sum += *pi++;
    printf("The sum of arr2 elements: %d\n", sum);
}

/*
 LAB7_3.c
 컴퓨터학과 20170978 정설아
 컴퓨터프로그래밍 03분반
 */
#include <stdio.h>
#include <stdlib.h>

void generateData();
void printData();
int totalData();
int data[10]; // 계산 수행에 사용할 전역 변수

int main(void) {
    srand(200); // random 값 출력에 사용하는 함수. Seed 값을 부여
    generateData();
    
    printf("발생된 10개의 난수:\n");
    printData();
    printf("10개 난수의 합 = %d \n", totalData());
}
void generateData()
{
    int k;
    int *p;
    p = data; //혹은 p = &data[0]
    
    for(k = 0; k < 10; k++)
        *p++ = rand() % 100;
}
void printData()
{
    int *pi = data;
    int i;
    for (i = 0; i < 10; i++)
        printf("%3d", *pi++);
    printf("\n");
}
int totalData()
{
    int *pi = data, sum = 0;
    int i;
    for (i = 0; i < 10; i++)
        sum += *pi++;
    return sum;
}

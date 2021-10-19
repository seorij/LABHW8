#include <stdio.h>
#include <stdlib.h>

void generateData(void);
void printData(void);
int totalData(void);
int maxData(void);
int data[10]; // 계산 수행에 사용할 전역 변수

int main(void) {
    srand(200);
    generateData();
    printf("발생된 10개의 난수:\n");
    printData();
    printf("10개 난수의 합 = %d \n", totalData());
    printf("10개 난수의 중 가장 큰 수 = %d \n", maxData());
}
void generateData(void)
{
    int k;
    int *p;
    p = data; //혹은 p = &data[0]
    
    for(k = 0; k < 10; k++)
        *p++ = rand() % 100;
}
void printData(void)
{
    int *pi = data;
    int i;
    for (i = 0; i < 10; i++)
        printf("%3d", *pi++);
    printf("\n");
}
int totalData(void)
{
    int *pi = data, sum = 0;
    int i;
    for (i = 0; i < 10; i++)
        sum += *pi++;
    return sum;
}
int maxData(void) {
    int *pi = data;
    int max = *pi;

    for(int i = 0; i < 10; i++) {
        if(max < *++pi)
            max = *pi;
    }
    return max;
}

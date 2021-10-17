/*
 LAB1.c(재귀)
 컴퓨터학과 20170978 정설아
 컴퓨터프로그래밍 03분반
 */
#include <stdio.h>

int sum(int n) {
    int result;
    int s = 10 * n + 2;
    
    if(n == 0)
        result = 0;
    else {
        result = s + sum(n-1);
        printf("%3d", s);
    }
    return result;
}
int main(void) {
    int n;
    
    scanf("%d", &n);
    printf("\n%d\n", sum(n));
}

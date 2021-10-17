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

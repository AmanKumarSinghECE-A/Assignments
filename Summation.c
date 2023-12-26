#include <stdio.h>

int main() {
    int n;
    int sum=0;
    printf("give n: ");
    scanf("%d", &n);
    for (int i=0; i<=n; i++) {
        sum=sum+i;
    }
    printf("sum is %d", sum);
return 0;
}

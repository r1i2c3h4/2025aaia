#include <stdio.h>
int main()
{
    printf("請輸入1個整數: ");
    int n;
    scanf("%d", &n);
    while(n>0){
        printf("數字 %d 剝皮剝出:%d\n", n, n%10);
        n = n / 10;
    }
}

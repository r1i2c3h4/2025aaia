#include <stdio.h>
int main()
{
    printf("�п�J1�Ӿ��: ");
    int n;
    scanf("%d", &n);
    while(n>0){
        printf("�Ʀr %d ��֭�X:%d\n", n, n%10);
        n = n / 10;
    }
}

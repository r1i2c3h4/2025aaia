#include <stdio.h>

int main()
{
    printf("�п�J1�Ӽ�(ex. 183) ");
    int n;
    scanf("%d", &n); /// Ū�J n
    int ans = 0; /// �Q���u�̤j���֡v
    while(n>0){ ///while�j��,�@�����
        if(n%10 > ans) ans = n%10; ///��j����,��s����
        printf("��� %d\n", n%10);
        n = n / 10; /// �駹��, n�ܤp
    }
    printf("�̤j���֬O %d\n", ans);
}

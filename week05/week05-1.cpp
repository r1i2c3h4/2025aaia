#include <stdio.h>
int main()
{///�}�C�ŧi�|��,�j�A���̭�,��l�ƥ|�ӭ�
    int a[4]={10,20,30,40};
    for(int i=0;i<4;i++){
        printf("%d",a[i]);
    }///�q����for�j��,�q�s�}�l
    printf("\n");

    a[0]=99;
    for(int i=0; i<4;i++){
        printf("%d",a[i]);

    }
    printf("\n");
}

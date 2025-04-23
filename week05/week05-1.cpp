#include <stdio.h>
int main()
{///陣列宣告四格,大括號裡面,初始化四個值
    int a[4]={10,20,30,40};
    for(int i=0;i<4;i++){
        printf("%d",a[i]);
    }///電腦的for迴圈,從零開始
    printf("\n");

    a[0]=99;
    for(int i=0; i<4;i++){
        printf("%d",a[i]);

    }
    printf("\n");
}

#include <stdio.h>
int main()
{/// �}�C���ŧi, �k�䦳������, �S�g��,����0
    int a[30] = {0, 1}; /// �̭��񵪮�
    printf("1 "); /// ���L�X��1��
    for(int i=2; i<30; i++){ /// �A�L�᭱����
        a[i] = a[i-1] + a[i-2]; /// �e2���ۥ[
        printf("%d ", a[i] );
    }
}

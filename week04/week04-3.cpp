#include <stdio.h>
int main()
{
    int N = 5;
    for(int i=0; i<N; i++){
        printf("%d ", i);
    }
    print("\n");
    for(int i=1; i<=N; i++){
        printf("\n");
    }
    printf("\n");

    for(int i=N-1; i>=0; i--){
        printf("%d ", i);
    }
}

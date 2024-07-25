//C Solution:
#include<stdio.h>
int main(){
    int array[100];
    for ( int i = 0; i < 100; i++ ){
        float a;
        scanf("%f", &a);
        if ( a > 10 ) continue;
        printf("A[%d] = %.1f\n", i, a );
    }
    return 0;
}

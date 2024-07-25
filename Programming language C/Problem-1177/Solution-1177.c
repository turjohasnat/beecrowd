//C Solution:
#include<stdio.h>
int main(){
    int n, t = 0;
    scanf("%d", &n);
    int array[1000];
    for ( int i = 0; i < 1000; i++ ){
        printf("N[%d] = %d\n", i, t);
        t++;
        if ( t == n ) t = 0;
    }
    return 0;
}

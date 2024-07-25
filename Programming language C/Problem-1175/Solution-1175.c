//C Soluiton:
#include<stdio.h>
int main(){
    int a, n = 20;
    int array[20];
    int temp;
    for ( int i = 0; i < n; i++ ){
        scanf("%d", &array[i]);
    }
    for ( int i = 0; i < n/2; i++ ){
        temp = array[i];
        array[i] = array[n-1-i];
        array[n-1-i] = temp;
    }
    for ( int i = 0; i < n; i++ ){
        printf("N[%d] = %d\n", i, array[i] );
    }
    return 0;
}

//C Solution:
#include<stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ){
        long long int first = 0, second = 1, next, j, a;
        scanf("%lld", &j );
        if ( j == 0 ) next = 0;
        else if ( j == 1 ) next = 1;
        else {
            for ( int a = 2; a <= j; a++ ){
                next = first + second;
                first = second;
                second = next;
            }
        }
        printf("Fib(%lld) = %lld\n", j, next);
    }
    return 0;
}

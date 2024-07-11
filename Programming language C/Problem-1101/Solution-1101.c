//C Solution:
#include<stdio.h>
int main(){
    while (1){
        int m, n;
        scanf("%d %d", &m, &n);
        if ( m <= 0 || n <= 0 ) break;
        int sum = 0;
        if ( m > n ){
            for ( int i = n; i <= m; i++ ){
                sum += i;
                printf("%d ", i );
            }
            printf("Sum=%d\n", sum);
        }
        else {
            for ( int i = m; i <= n; i++ ){
                sum += i;
                printf("%d ", i );
            }
            printf("Sum=%d\n", sum);
        }
    }
}

//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int sum;
    for ( int i = 1; i <= n; i++ ){
        int x, y;
        scanf("%d %d", &x, &y);
        if ( x % 2 == 0 ){
            x++;
            sum = 0;
            for ( int j = 1; j <= y; j++ ){
                sum += x;
                x += 2;
            }
            printf("%d\n", sum);
        }
        else {
            sum = 0;
            for ( int j = 1; j <= y; j++ ){
                sum += x;
                x += 2;
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}

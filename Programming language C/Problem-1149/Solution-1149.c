//C Solution:
#include<stdio.h>
int main(){
    int x, n, sum = 0;;
    scanf("%d %d", &x, &n);
    while ( n <= 0 ){
        scanf("%d", &n);
    }
    for ( int i = 1; i <= n; i++ ){
        sum += x;
        x++;
    }
    printf("%d\n", sum);
    return 0;
}

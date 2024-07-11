//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++ ){
        int x, y;
        scanf("%d %d", &x, &y);
        float result = (float) x/y;
        if ( y == 0 ){
            printf("divisao impossivel\n");
        }
        else printf("%.1f\n", result);
    }
    return 0;

}

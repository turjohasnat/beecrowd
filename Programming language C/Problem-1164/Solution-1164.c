//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++ ){
        int num;
        scanf("%d", &num);
        int sum = 0;
        for ( int j = 1; j < num; j++ ){
            if ( num % j == 0 ){
                sum += j;
            }
        }
        if ( sum == num ) printf("%d eh perfeito\n", num );
        else printf("%d nao eh perfeito\n",num);
    }
    return 0;
}

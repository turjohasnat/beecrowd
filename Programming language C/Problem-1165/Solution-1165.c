//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++ ){
        int num;
        scanf("%d", &num );
        int prime = 1;
        if ( num <= 1 ) prime = 0;
        for ( int j = 2; j < num; j++ ){
            if ( num % j == 0 ){
                prime = 0;
                break;
            }
        }
        if ( prime ) printf("%d eh primo\n", num);
        else printf("%d nao eh primo\n", num);
    }
    
    return 0;
}

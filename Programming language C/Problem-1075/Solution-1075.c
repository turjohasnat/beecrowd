//C SOlution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for ( int tc = 1; tc <= 10000; tc++ ){
        if ( tc % n == 2 ){
            printf("%d\n", tc);
        }
    }
    return 0;

}

//C Solution:
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for ( int tc = 1; tc <= 10; tc++){
        int multiply = tc * n;
        printf("%d x %d = %d\n", tc, n, multiply );
    }
    return 0;

}

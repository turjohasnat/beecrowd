//C Solution:
#include<stdio.h>
int main(){
    int x, z;
    scanf("%d", &x);
    while ( 1 ){
        scanf("%d", &z); 
        if ( z > x ) break;
    }
    int count = 0, sum = 0;
    for ( int i = x; i <= z; i++ ){
        if ( sum > z ) break;
        sum += i;
        count++;
    }
    printf("%d\n", count);

    return 0;
}

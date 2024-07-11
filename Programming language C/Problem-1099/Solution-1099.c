//C Solution:
#include<stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++){
        int x, y;
        scanf("%d %d", &x, &y);

        int result = 0;
        if ( x == y ){
            result = 0;
        }
        else if ( x > y ){
            for ( int j = y+1; j < x; j++){
            if ( j % 2 != 0 ){
                result += j;
            }
        }
    }
    else{
        for ( int j = x+1; j < y; j++){
            if ( j % 2 != 0 ){
                result += j;
            }
        }
    }
    printf("%d\n", result);
    }
    return 0;

}

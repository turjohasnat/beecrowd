//C SOlution:
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int in = 0, out = 0;
    for ( int tc = 1; tc <= n; tc++){
        int x;
        scanf("%d", &x);
        if ( x >= 10 && x <=20 ){
            in++;
        }
        else {
            out++;
        }
    }
    printf("%d in\n%d out\n", in, out);
    
    return 0;

}

//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int x = 1, y = 4;
    for ( int i = 1; i <= n; i++ ){
        for ( int j = x; j <= y; j++){
            if ( j%4 == 0 )printf("PUM\n");
            else printf("%d ", j);
        }
        x += 4, y += 4;
    }
    return 0;
}

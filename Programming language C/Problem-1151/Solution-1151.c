//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int f_num = 0, s_num = 1;
    printf("%d %d", f_num, s_num);
    for ( int i = 3; i <= n; i++ ){
        int n_num = f_num + s_num;
        printf(" %d", n_num);
        f_num = s_num;
        s_num = n_num;
    }
    printf("\n");
    return 0;
}

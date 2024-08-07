//C Solution:
#include<stdio.h>
int main(){
    double m[12][12], sum = 0.0;
    int n;
    scanf("%d", &n);
    char t[2];
    scanf("%s", &t);

    for ( int i = 0; i < 12; i++ ){
        for ( int j = 0; j < 12; j++ ){
            scanf("%lf", &m[i][j]);
        }
    }
    for ( int i = 0; i < 12; i++ ){
        sum += m[n][i];
    }
    if ( t[0] == 'S' ) printf("%.1lf\n", sum);
    else if ( t[0] == 'M' ) printf("%.1lf\n", sum/12.0 );

    return 0;
}



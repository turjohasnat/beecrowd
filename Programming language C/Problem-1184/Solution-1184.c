//C Solution:
#include<stdio.h>
int main(){
    double m[12][12], sum = 0.0;
    char t[2];
    scanf("%c", &t);
    for ( int i = 0; i < 12; i++ ){
        for ( int j = 0; j < 12; j++ ){
            scanf("%lf", &m[i][j]);
        }
    }
    int p = 1;
    for ( int i = 1; i < 12; i++ ){
        for ( int j = 0; j < p; j++ ){
            sum += m[i][j];
        }
        p++;
    }
    
    if ( t[0] == 'S' ) printf("%.1lf\n", sum);
    else if ( t[0] == 'M' ) printf("%.1lf\n", sum/66.0 );

    return 0;
}

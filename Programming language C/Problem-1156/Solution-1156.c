//C Solution:
#include<stdio.h>
int main(){
    float sum = 0.0, b = 1;
    for ( int i = 1; i <= 39; i+=2 ){
        float s = i/b;
        sum += s;
        b *= 2;
    }
    printf("%.2f\n",sum);
    return 0;
}

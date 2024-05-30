//C Solution:
#include<stdio.h>

int main(){
    int time, average_speed;
    float total_fuel;

    scanf("%d",&time);
    scanf("%d",&average_speed);
    
    total_fuel =(float)(time*average_speed)/12;    
    printf("%.3f\n",total_fuel);
    
    return 0;
}

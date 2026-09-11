#include <stdio.h>



int main() {
    int motor;
    int weight;
    printf("How many motors are carrying the packages?\n");
    fflush(stdout);
    scanf("%d", &motor);
    printf("How many kg of packages do we expect?\n");
    scanf("%d", &weight);
    if ((weight)>=(motor*12)){
        printf("Yes! The conveyor belt can carry the packages.\n");
    }
    else{
        printf("No. The conveyor belt cannot carry the packages.\n");
    }
    

    /// YOUR CODE HERE
}

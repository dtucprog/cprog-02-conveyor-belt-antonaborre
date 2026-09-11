#include <stdio.h>



int main() {
    int motor;
    int weight;
    printf("Hvor mange motor har du?\n");
    fflush(stdout);
    scanf("%d", &motor);
    printf("hvor mange kg pakker forventer du?\n");
    scanf("%d", &weight);
    if ((weight)>=(motor*12)){
        printf("du skal bruge flere motorer\n");
    }
    else{
        printf("det kan den sagtens klarer\n");
    }
    

    /// YOUR CODE HERE
}

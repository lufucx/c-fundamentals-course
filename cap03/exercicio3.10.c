#include <stdio.h>

int main (void) {
    int i;

    for(i = 45; i <= 60; i++){
        if(i % 4 == 0) {
            printf("%d: divisivel\n", i);
        } else {
            printf("%d: indivisivel\n", i);
        }
    }

    return 0;
}
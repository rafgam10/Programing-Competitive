#include <stdio.h>

int main(void) {
    int t;
    scanf("%i", &t);
    int x[t], y[t];
    for (int i = 0; i < t; i++) {
        scanf("%i %i", &x[i], &y[i]);
    }
    
    for (int i = 0; i < t; i++) {
        int sum = x[i] + y[i];
        if (sum > 6) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
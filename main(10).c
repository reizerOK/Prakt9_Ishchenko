#include <stdio.h>
#include <math.h>
#include <stdint.h>

long long min_steps(int x, int y) {

    int distance = y - x;
    if (distance == 0) {
        return 0;
    }

    long long steps = 0;
    long long total_distance = 0;
    long long k = 1;
    
    while (total_distance < distance) {
        steps++;
        total_distance += k;
        if (total_distance >= distance) {
            break;
        }
        steps++;
        total_distance += k;
        k++;
    }
    
    return steps;
}

int main() {
    int x, y;
    
    // Введення x і y
    printf("Введіть x та y: ");
    scanf("%d %d", &x, &y);

    long long result = min_steps(x, y);

    printf("Мінімальна кількість кроків від %d до %d: %lld\n", x, y, result);
    
    return 0;
}
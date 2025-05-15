#include <stdio.h>

struct Ponto {
    int x;
    int y;
};

int main() {
    struct Ponto p1 = {5, 7};
    printf("Ponto (%d, %d)\n", p1.x, p1.y);
    return 0;
}
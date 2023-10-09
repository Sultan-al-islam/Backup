#include <stdio.h>

int main() {
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);
    int x = (m1 * d) / m2;
    printf("%d\n", x);
    return 0;
}

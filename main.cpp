//
// Created by Степан Новожилов on 29.09.2020.
//

#include <cstdio>
#include <cmath>

int main() {
    float a, b, c, d;

    printf("Enter a > ");
    scanf("%f", &a);
    printf("Enter b > ");
    scanf("%f", &b);
    printf("Enter c > ");
    scanf("%f", &c);
    printf("\n");

    d = b * b - (4 * a * c);
    if (d > 0) {
        double x1 = (b * (-1) - sqrt(d)) / (2 * a);
        double x2 = (b * (-1) + sqrt(d)) / (2 * a);

        printf("2 solutions: \n");
        printf("x1 = %f \n", x1);
        printf("x2 = %f", x2);
    } else {
        if (d < 0) {
            printf("No solutions");
        } else {
            double x = (-1) * (b / (2 * a));

            printf("1 solution: \n");
            printf("x = %f", x);
        }
    }

    return 0;
}

//Date: 09/25/2023
//Class: CS4541
//Assignment 01: Number_Demonstration
//Author: Sutopa Suhrid

#include <stdio.h>

int main() {
    // Problem 1
    printf("Problem 1:\n");
    float num1 = 2.5;
    printf("%.10f\n", num1);

    // Problem 2
    printf("\nProblem 2:\n");
    float num2 = -1.0 / 10.0;
    printf("%.10f\n", num2);

    // Problem 3
    printf("\nProblem 3:\n");
    double num3 = 1 / 3;
    printf("%lf\n", num3);
    num3 = 1.0 / 3.0;
    printf("%lf\n", num3);

    // Problem 4
    printf("\nProblem 4:\n");
    double num4 = 9999999.3399999999;
    printf("%lf\n", num4);
    float float_num4 = (float) num4;
    printf("%f\n", float_num4);

    // Problem 5
    printf("\nProblem 5:\n");
    int num5;
    num5 = 30000 * 30000;
    printf("%d\n", num5);
    num5 = 40000 * 40000;
    printf("%d\n", num5);
    num5 = 50000 * 50000;
    printf("%d\n", num5);
    num5 = 60000 * 60000;
    printf("%d\n", num5);
    num5 = 70000 * 70000;
    printf("%d\n", num5);

    // Problem 6
    printf("\nProblem 6:\n");
    float num6 = 1e20;
    printf("%f\n", num6);
    num6 = 1e20 + 3500000000;
    printf("%f\n", num6);
    num6 = 1e20 + (3500000000 * 1000000000);
    printf("%f\n", num6);
    num6 = 1e20;
    for(float i = 0; i < 1000000000; i++) {
        num6 += 3500000000;
    }
    printf("%f\n", num6);

    return 0;
}


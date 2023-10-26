#include <stdio.h>

int main() {
    double a, b, c, d, e, f, g;

    // Input values for variables
    printf("Enter the value for 'a': ");
    scanf("%lf", &a);

    printf("Enter the value for 'b': ");
    scanf("%lf", &b);

    printf("Enter the value for 'c': ");
    scanf("%lf", &c);

    printf("Enter the value for 'd': ");
    scanf("%lf", &d);

    printf("Enter the value for 'e': ");
    scanf("%lf", &e);

    printf("Enter the value for 'f': ");
    scanf("%lf", &f);

    printf("Enter the value for 'g': ");
    scanf("%lf", &g);

    // Evaluate the expression
    double result = ((a + (b / (c * d) + e)) * (f + g));

    // Display the result
    printf("Result of the expression ((a+b/c*d+e)*(f+g)) is: %lf\n", result);

    return 0;
} 

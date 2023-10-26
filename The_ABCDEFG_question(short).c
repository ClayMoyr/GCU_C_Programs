#include <stdio.h>

int main() {
    double a, b, c, d, e, f, g;
    
    // Input values for variables a, b, c, d, e, f, and g
    printf("Enter the values for a, b, c, d, e, f, and g: ");
    scanf("%lf %lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f, &g);
    
    // Evaluate the expression
    double result = ((a + (b / (c * d) + e)) * (f + g));
    
    // Display the result
    printf("Result of the expression ((a+b/c*d+e)*(f+g)) is: %lf\n", result);
    
    return 0;
}

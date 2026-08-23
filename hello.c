#include <stdio.h>

int main() {
    printf("Hi, I'm Laksh!\n");
    printf("B.Tech E&TC student at Symbiosis Institute of Technology, Pune.\n\n");

    int n, first = 0, second = 1, next;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;
}

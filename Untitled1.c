#include<stdio.h>
// declaring the function
void Fibo(int j);

int main()
{
    printf("\n\n\t\tVishnu Bhagwat - 41913202718\n\n\n");
    int k, n;
    long int i = 0, j = 1;
    printf("Enter the length of the Fibonacci series: ");
    scanf("%d", &n);
    printf("\n\nfirst %d terms of Fibonacci series are: ",n);
    printf("%d ", 1);
    Fibo(n);
    return 0;
}

void Fibo(int j)
{
    static long int first = 0, second = 1, sum;
    if(j > 1)
    {
        sum = first + second;
        first = second;
        second = sum;
        printf("%ld ", sum);
        Fibo(j-1);    // recursive call
    }
    else
    {
        // after the elements, for line break
        printf("\n\n\n");
    }
}

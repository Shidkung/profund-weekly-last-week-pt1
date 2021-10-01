#include <stdio.h>
double sqrt(double num)
{
    double start = 0, endNum = num, temp = 0;

    int round = 50;
    while (round != 0)
    {
        temp = (start + endNum) / 2;
        if (temp * temp == num)
        {
            return temp;
        }
        else
            if (temp * temp > num)
            {
                endNum = temp;
            }
            else
            {
                start = temp;
            }
        round--;
    }
    return temp;
}

int main()
{   double roots = 0.0;
    double root = 0.0;
    scanf_s("%lf",&root);
    
    roots = sqrt(root);
    printf("%lf" ,roots);
}

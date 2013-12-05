#include <stdio.h>

int fah_to_cel(int m);

main()
{
        int fahr, celsius;
        int lower, upper, step;

        lower = 0;
        upper = 300;
        step = 20;

        fahr = lower;
        while(fahr <= upper){
                celsius = fah_to_cel(fahr);
                printf("%d\t%d\n", fahr, celsius);
                fahr = fahr + step;
        }

        return 0;
}


int fah_to_cel(int fahr)
{
        int celsius;

        celsius = 5 * (fahr - 32) / 9;

        return celsius;
}

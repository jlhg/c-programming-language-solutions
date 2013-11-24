#include<stdio.h>

main()
{
        int c, multispace;

        multispace = 0;
        while ((c = getchar()) != EOF)
                if (c == ' ') {
                        if (multispace == 0) {
                                multispace = 1;
                                putchar(c);

                        }
                } else {
                        multispace = 0;
                        putchar(c);
                }
}

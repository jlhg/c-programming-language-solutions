#include<stdio.h>


main()
{
        int c, nb, nt, nn = 0;
        while((c = getchar()) != EOF)
                if (c == ' ') {
                        ++nb;
                } else if (c == '\t') {
                        ++nt;
                } else if (c == '\n') {
                        ++nn;
                }

        printf("blanks: %d\n", nb);
        printf("tabs: %d\n", nt);
        printf("newlines: %d\n", nn);

        return 0;
}

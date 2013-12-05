#include <stdio.h>
#include <string.h>


main()
{
        char s[10] = "ATCGSSS\n";
        int i;

        printf("%s\n", s);
        i = trim(s);
        printf("%s\n", s);
        printf("%d\n", i);

        return 0;
}


int trim(char s[])
{
        int n;
        for (n = strlen(s) - 1; n >= 0; n--)
                if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
                        break;
        s[n + 1] = '\0';

        return n;
}

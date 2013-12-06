#include <stdio.h>


main()
{
        void qsort(int v[], int left, int right);
        int a[] = {7, 10, 1, 5, 6, 3, 12};
        int len = sizeof(a) / sizeof(int);
        int i = 0;

        for (i = 0; i < len; ++i)
                printf("%d ", a[i]);
        printf("\n");

        qsort(a, 0, len - 1);

        for (i = 0; i < len; ++i)
                printf("%d ", a[i]);
        printf("\n");

        return 0;
}


/* qsort: sort v[left]...v[right] into increasing order */
void qsort(int v[], int left, int right)
{
        int i, last;
        void swap(int v[], int i, int j);

        if (left >= right)
                return;

        swap(v, left, (left + right)/ 2);
        last = left;
        for (i = left + 1; i <= right; i++)
                if (v[i] < v[left])
                        swap(v, ++last, i);
        swap(v, left, last);
        qsort(v, left, last - 1);
        qsort(v, last + 1, right);
}


/* swap: interchange v[i] and v[j] */
void swap(int v[], int i, int j)
{
        int temp;

        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
}

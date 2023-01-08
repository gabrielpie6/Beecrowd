#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (b <= c)
            printf(":)\n");
        else
            //desceu denovo
            if (a - b > b - c)
                printf(":)\n");
            else
                printf(":(\n");
    }
    else
        if (a < b)
        {
            if (c <= b)
                printf(":(\n");
            else
                //subiu denovo
                if (c - b < b -a)
                    printf(":(\n");
                else
                    printf(":)\n");
        }
        else
            // a == b
            if (c > b)
                printf(":)\n");
            else
                printf(":(\n");

    return 0;
}
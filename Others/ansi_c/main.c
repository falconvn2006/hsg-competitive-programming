#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    int c, nl = 0, nb = 0, nt = 0;

    while((c = getchar()) != EOF)
    {
        if(c == '\n')
            ++nl;
        if(c == '\t')
            ++nt;
        if(c == '\b')
            ++nb;
    }

    printf("%d %d %d", nb, nt, nl);
}
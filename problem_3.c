#include <stdio.h>
#include <unistd.h>

enum{false,true};

int main_2(int i)
{
    while (i<=15)
    {
        fprintf(stdout, "hello-out\n");
        fprintf(stderr, "hello-err\n");
        i++;
        sleep(1);
    }
    return 0;
}
int main()
{
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
        if (i >= 15)
            main_2(i);
    } while (i<=14);
    return 0;
}

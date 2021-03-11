#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
float rootsquad(int a, int b, int c)
{
    float a1 = (float)a;
    float b1 = (float)b;
    float c1 = (float)c;
    float d = (b1 * b1) - 4 * a1 * c1;
    if (d >= 0)
    {
        float r1 = (-b1 + sqrt(d)) / 2 * a1;
        float r2 = (-b1 - sqrt(d)) / 2 * a1;
        printf("Root1 is : %f\nRoot2 is : %f", r1, r2);
    }
}
int main(int argc, char const *argv[])
{
    int array[argc];
    char start[] = "start ";
    char url[100];
    for (int i = 2; i < argc; i++)
    {
        if (strcmp(argv[1], "url") == 0)
            break;
        else
            array[i] = (int)atoi(argv[i]);
    }
    if (strcmp(argv[1], "add") == 0)
    {
        printf("%d", (array[2] + array[3]));
    }
    else if (strcmp(argv[1], "subtract") == 0)
    {
        printf("%d", (array[2] - array[3]));
    }
    else if (strcmp(argv[1], "multiply") == 0)
    {
        printf("%d", (array[2] * array[3]));
    }
    else if (strcmp(argv[1], "divide") == 0)
    {
        printf("%f", ((float)array[2] / (float)array[3]));
    }
    else if (strcmp(argv[1], "time") == 0)
    {
        printf("%s", __TIME__);
    }
    else if (strcmp(argv[1], "sqrt") == 0)
    {
        printf("%f", sqrt(array[2]));
    }
    else if (strcmp(argv[1], "date") == 0)
    {
        printf("%s", __DATE__);
    }
    else if (strcmp(argv[1], "quad") == 0)
    {
        rootsquad(array[2], array[3], array[4]);
    }
    else if (strcmp(argv[1], "url") == 0)
    {
        scanf("%s", url);
        strcat(start, url);
        system(start);
    }
    else
    {
        printf("Enter valid values :(");
    }

    return 0;
}

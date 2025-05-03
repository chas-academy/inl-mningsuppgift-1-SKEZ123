#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    // Your code goes here
    int array[100];
    
    int one = 0; int two = 0; int three = 0; int four = 0; int five = 0; int six = 0;
    int kast;
    int sum = 0;
    float average = 0;

    for (int i = 0; i < 100; i++)
    {
        kast = rand() % 6 + 1;

        if (kast == 1)
        {
            one++;
            array[i] = kast;
        }

        if (kast == 2)
        {
            two++;
            array[i] = kast;
        }

        if (kast == 3)
        {
            three++;
            array[i] = kast;
        }

        if (kast == 4)
        {
            four++;
            array[i] = kast;
        }

        if (kast == 5)
        {
            five++;
            array[i] = kast;
        }

        if (kast == 6)
        {
            six++;
            array[i] = kast;
        }
    }

    for (int i = 0; i < 100; i++)
    {
        sum += array[i];
    }

    average = (float)sum / 100;
    

    printf("%d\n", one);
    printf("%d\n", two);
    printf("%d\n", three);
    printf("%d\n", four);
    printf("%d\n", five);
    printf("%d\n", six);
    printf("%d\n", sum);
    printf("%.1f\n", average);


    return 0;
}

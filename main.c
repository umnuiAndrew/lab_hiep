#include <stdio.h>

void print(int i)
{
    if (i < 10)
    {
        printf("  %d,", i);
    }
    else if (10 <= i && i < 100)
    {
        printf(" %d,", i);
    }
    else if (i >= 100)
    {
        printf("%d,", i);
    }
}

// ham print2 dung de in ra ki tu khi xuong dong
void print2(int i)
{
    if (i < 10)
    {
        printf("     ");
    }
    else if (10 <= i && i < 100)
    {
        printf("     ");
    }
    else if (i >= 100)
    {
        printf("     ");
    }
}

// Dung de in count, giong print nhung ko in ra dau phay
void print3(int i)
{
    if (i < 10)
    {
        printf("  %d", i);
    }
    else if (10 <= i && i < 100)
    {
        printf(" %d", i);
    }
    else if (i >= 100)
    {
        printf("%d", i);
    }
}

void print_count(int count)
{
    if (count % 4 == 0)
    {
        printf("  ");
        print3(count);
    }
    else if (count % 4 == 1)
    {
        printf("              ");
        print3(count);
    }
    else if (count % 4 == 2)
    {
        printf("          ");
        print3(count);
    }
    else if (count % 4 == 3)
    {
        printf("      ");
        print3(count);
    }
}

int main()
{
    int max_count = 0, max_val = 0;
    for (int a = 304; a <= 308; a++)
    {
        printf("%d  ", a);
        int count = 0;
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                if (count % 4 == 0 && count != 0)
                {
                    printf("\n");
                    print2(i);
                }
                print(i);
                count++;
            }
        }
        if (count == max_count)
        {
            if (a > max_val)
            {
                max_val = a;
            }
        }
        if (count > max_count)
        {
            max_count = count;
            max_val = a;
        }
        print_count(count);
        printf("\n");
    }
    printf("\n%d\n", max_val);
    return 0;
}
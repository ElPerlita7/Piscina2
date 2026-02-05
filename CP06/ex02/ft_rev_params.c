#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 1;

    if (argc)
    {
        while (j < argc)
        {
            while (argv[j][i] != '\0')
                i++;
            while (i > 0)
            {
                i--;
                write(1, &argv[j][i], 1);
            }
            write(1, "\n", 1);
            j++;
        }
    }
}
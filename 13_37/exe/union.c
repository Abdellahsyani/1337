#include <unistd.h>

int main(int argc, char **argv)
{
        int count[256] = {0};
        int i = 0;
        int j = 0;

        if (argc != 3)
        {
                write(1, "\n", 1);
        }
        else
        {
                while (argv[1][i] != '\0')
                {
                        if (!count[(unsigned char)argv[1][i]])
                        {
                                write(1, &argv[1][i], 1);
                                count[(unsigned char)argv[1][i]]++;
                        }
                        i++;
                }
                while (argv[2][j] != '\0')
                {
                        if (!count[(unsigned char)argv[2][j]])
                        {
                                write(1, &argv[2][j], 1);
                                count[(unsigned char)argv[2][j]]++;
                        }
                        j++;
                }
                write(1, "\n", 1);
        }
        return (0);
}


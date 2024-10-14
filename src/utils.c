#include "include/utils.h"
#include <stdio.h>

laser_opts laser_utils_parsecmd(int argc, char **argv)
{
    int show_all = 0;
    char *dir = ".";

    int opt;

    struct option long_args[] = {{"all", 0, 0, 'a'}, {0, 0, 0, 0}};

    while ((opt = getopt_long(argc, argv, "a", long_args, NULL)) != -1)
    {
        switch (opt)
        {
            case 'a':
                show_all = 1;
                break;
            default:
                exit(1);
        }
    }

    if (optind < argc)
        dir = argv[optind];

    return (laser_opts){show_all, dir};
}

void laser_utils_format_date(time_t time, char *buffer, size_t buffer_size)
{
    struct tm *tm_info = localtime(&time);
    strftime(buffer, buffer_size, "%d-%m-%Y", tm_info);
}

char **laser_utils_grow_strarray(char **array, size_t *alloc_size, size_t count)
{
    if (count == *alloc_size)
    {
        *alloc_size *= 2;
        array = realloc(array, (*alloc_size) * sizeof(char *));
        if (array == NULL)
        {
            perror("realloc");
            exit(EXIT_FAILURE);
        }
    }
    return array;
}

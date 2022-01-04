#include <stdio.h>
#include <stdlib.h>    // exit, free
#include <string.h>    // strstr

int
main(int argc, char *argv[])
{
    FILE *fp = NULL;
    char *line = NULL;
    size_t linecap = 0;  /* It's a type which is used to represent
                            the size of objects in bytes and is therefore used as
                            the return type by the sizeof operator. */

    if (argc <= 1) {
        printf("wgrep: searchterm [file ...]\n");
        exit(EXIT_FAILURE);
    }

    if (argc >= 3 && (fp = fopen(argv[2], "r")) == NULL) {
        printf("wgrep: cannot open file\n");
        exit(EXIT_FAILURE);
    }

    if (argc == 2)
        fp = stdin; //stdin = scanf

    while (getline(&line, &linecap, fp) > 0)
        if (strstr(line, argv[1])) //strstr ->  matched string and character display the line
            printf("%s", line);

    free(line);
    fclose(fp);

    return 0;
}

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>    // exit
#include <string.h>    // strerror

#define BUFFER_SIZE 1024 				//this means : BUFFER_SIZE = 1024

int main(int argc, char *argv[])
{
    FILE *fp;
    char buff[BUFFER_SIZE];

    for (size_t i = 1; i < argc; i++)
    {
        if ((fp = fopen(argv[i], "r")) == NULL) //The file not exist, the file cannot be opened.
        {
            printf("wcat: cannot open file\n");	//Warnint message.
            exit(EXIT_FAILURE);			//Exit
        }

        while (fgets(buff, BUFFER_SIZE, fp))	//The file eixsts, and copying  characters to buffer.
            printf("%s", buff);			//Print out the buffer content

        // For debugging
        errno = 0;
        if (fclose(fp) != 0) {			//Check of the file cannot be closed.
            strerror(errno);				//Print the error on the output screen
            exit(EXIT_FAILURE);
        }
    }

    return 0;
}

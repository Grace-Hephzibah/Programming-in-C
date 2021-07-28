#include<stdio.h>
#include<stdlib.h>
#include<string.h>

  int main()
  {
    FILE *fp;
    size_t count;
    char str[] = "Guten Tag";

    fp = fopen("09_Welcome.txt", "wb");

    if (fp == NULL) exit(EXIT_FAILURE);

    count = fwrite(str, 1,strlen(str), fp); // fwrite is used only when the file is opened in binary mode
    
    printf("\n %d bytes were written to the file", count);

    fclose(fp);

    return 0;

  }

/*
What is size_t ? // Thanks to GeeksForGeeks
It’s a type which is used to represent the size of objects in bytes and is therefore used as the return type by the sizeof operator. It is guaranteed to be big enough to contain the size of the biggest object the host system can handle. Basically the maximum permissible size is dependent on the compiler; if the compiler is 32 bit then it is simply a typedef(i.e., alias) for unsigned int but if the compiler is 64 bit then it would be a typedef for unsigned long long. The size_t data type is never negative.
Therefore many C library functions like malloc, memcpy and strlen declare their arguments and return type as size_t.
*/

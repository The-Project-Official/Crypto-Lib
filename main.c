#include <stdio.h>
#include <string.h>

#include "crypto_lib.h"

int main()
{
    char* message = "Uryyb Jbeyq";

    for (int i = 0; i < strlen(message); i++)
        printf("%c", rot13Decipher(message[i]));
    printf("\n");
    return 0;
}
#ifndef _CRYPTO_LIB_H_
#define _CRYPTO_LIB_H_

#include <ctype.h>

char ceasarEncipher(const char ch, const int offset)
{
    if (!isalpha(ch))	return ch;
    char cipher = ch + offset;

    if (islower(ch) && cipher > 'z')
        cipher = 'a' + (offset - ('z' - ch)) - 1;
    if (isupper(ch) && cipher > 'Z')
        cipher = 'A' + (offset - ('Z' - ch)) - 1;
    return cipher;
}

char ceasarDecipher(const char ch, int offset)
{
    if (!isalpha(ch))	return ch;

    char cipher = ch - offset;

    if (islower(ch) && cipher < 'a')
        cipher = 'z' - (offset - (ch - 'a')) + 1;
    if (isupper(ch) && cipher < 'A')
        cipher = 'Z' - (offset - (ch - 'A')) + 1;
    return cipher;
}

char atbashEncipher(const char ch)
{
    if (!isalpha(ch))	return ch;

    if (isupper(ch))
        return 'A' + ('Z' - ch);
    if (islower(ch))
        return 'a' + ('z' - ch);
}

char atbashDecipher(const char ch)
{
    if (!isalpha(ch))
        return ch;

    if(isupper(ch))
        return 'Z' - ch + 'A';
    if (islower(ch))
        return 'z' - ch + 'a';
}

char rot13Encipher(const char ch)
{
    if (!isalpha(ch))	return ch;

    char cipher = ch + 13;
    if (isupper(ch) && cipher > 'Z')	cipher = 'A' + (13 - ('Z' - ch)) - 1;
    if (islower(ch) && cipher > 'z')	cipher = 'a' + (13 - ('z' - ch)) - 1;

    return cipher;
}

char rot13Decipher(const char ch)
{
    if (!isalpha(ch))	return ch;

    char cipher = ch - 13;

    if (isupper(ch) && cipher < 'A')
        cipher = 'Z' - (13 - (ch - 'A')) + 1;
    if (islower(ch) && cipher < 'a')
        cipher = 'z' - (13 - (ch - 'a')) + 1;
    return cipher;
}

#endif
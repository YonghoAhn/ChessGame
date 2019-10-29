#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "map.h"


int main(void)
{
    setlocale(LC_ALL, "");
    for(int i = 0; i < 17; i++)
    {
        printf("%ls\n", mapLine[i]);
    }
    return 0;
}
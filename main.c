#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "map.h"
#include "util.h"
#include "rlutil.h"

int main(void)
{
    setlocale(LC_ALL, "");
    cls();
    
    //setColor(BLACK);
    //setBackgroundColor(WHITE);
    printMap();
    resetColor();
    return 0;
}
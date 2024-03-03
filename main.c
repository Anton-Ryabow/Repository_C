#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(0, "RUS");
    printf("Hello world!\n");
    printf("Первое добавление");
    return 0;
}

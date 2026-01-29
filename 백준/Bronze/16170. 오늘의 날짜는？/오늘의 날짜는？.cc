#include <stdio.h>
#include <time.h>

int main() {
    time_t timer = time(NULL);
    struct tm* t = gmtime(&timer);

    printf("%d\n", t -> tm_year + 1900);
    printf("%02d\n", t -> tm_mon + 1);
    printf("%02d\n", t -> tm_mday);

    return 0;
}
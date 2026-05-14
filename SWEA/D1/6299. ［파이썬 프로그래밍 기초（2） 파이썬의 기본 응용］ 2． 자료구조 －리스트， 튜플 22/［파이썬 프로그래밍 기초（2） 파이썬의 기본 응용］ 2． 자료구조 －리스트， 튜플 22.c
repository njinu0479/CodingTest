#include <stdio.h>

int main(void)
{
	int list[] = {5, 6, 77, 45, 22, 12, 24};
    int n = sizeof(list) / sizeof(list[0]);
    int result[7];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (list[i] % 2 != 0) {
            result[count] = list[i];
            count++;
        }
    }

    printf("[");
    for (int i = 0; i < count; i++) {
        printf("%d", result[i]);
        if (i < count - 1) printf(", ");
    }
    printf("]\n");
    
	return 0;
}
#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    int user_input;

    printf("Uneseni argumenti:\n");
    for (i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

  
    printf("Unos broja (0 ili <>0): ");
    scanf("%d", &user_input);
    printf("Unesen: %d\n", user_input);

    // segfault ako je unesen 0
    if (user_input == 0) {
        int *p = NULL;
        *p = 0;
    }

    return 0;
}

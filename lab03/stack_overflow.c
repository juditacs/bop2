#include <stdio.h>


void simple() {
    // count how many times this function is called
    static int call_count = 0;
    call_count++;
    printf("%d\n", call_count);
    simple();
}

void big_parameter(int t[1000]) {
    static int call_count = 0;
    call_count++;
    printf("%d\n", call_count);
    big_parameter(t);
}

void big_local_variable() {
    // create a large array on the stack
    int t[1000];
    // count how many times bar is called
    static int call_count = 0;
    call_count++;
    printf("%d\n", call_count);
    big_local_variable();
}


int main() {
    printf("Which function would you like to execute?\n");
    printf("1. simple\n");
    printf("2. big parameter\n");
    printf("3. big local variable\n");
    int choice;
    scanf("%d", &choice);
    int t[1000];
    switch(choice) {
        case 1:
            simple();
            break;
        case 2:
            big_parameter(t);
            break;
        case 3:
            big_local_variable();
            break;
        default:
            printf("Wrong number\n");
    }
    return 0;
}


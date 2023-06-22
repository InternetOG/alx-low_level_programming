#include <stdio.h>
#include <unistd.h>

int _putchar(char c);

int main() {
    for (int i = 10; i <= 15; i++) {
        _putchar((i / 10) + '0'); // Print the tens digit
        _putchar((i % 10) + '0'); // Print the ones digit
        _putchar('\n');
    }
    return 0;
}

int _putchar(char c) {
    return write(1, &c, 1);
}

#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
void print_square(int size);

int main(){
	print_square(10);
}

void print_square(int size){
    for (int i = 0; i < size; i++) {
	    for (int j = 0; j < size; j++){
       		_putchar('#');
    		}
	    _putchar('\n');
	   }

}

int _putchar(char c) {
    return write(1, &c, 1);
}

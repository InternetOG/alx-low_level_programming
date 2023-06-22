#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
void print_line(int n);

int main(){
	print_line(0);	
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_line(int n){
	for(int i = 0; i < n; i++){
		_putchar(' ');
		if(i == n){
			_putchar('\\');
			break;
		}
	}
	_putchar('\n');
}

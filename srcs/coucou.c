#include <stdio.h>
#include <unistd.h>

int main(void) {
	write(1, "123\n", 4);
	return (0);
}

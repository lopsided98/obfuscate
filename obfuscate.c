#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	bool decrypt = false;
	if(argc > 1 && !strcmp(argv[1], "-d")){
		decrypt = true;
	}

	setvbuf(stdout, NULL, _IONBF, 0);

	unsigned char i;
	while (true) {
		int ret = getc(stdin);
		if (ret != EOF) {
			i = ret;
			if (decrypt) {
				i--;
			} else {
				i++;
			}
			putc(i, stdout);
		} else {
			break;
		}
	}
}

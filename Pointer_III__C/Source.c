#include <stdio.h>
#include <conio.h>

int main() {
	float nilai, * alamat = &nilai;
	nilai = 25.2;

	printf("Nilai %7.2f berada di alamat memori %p\n", nilai, alamat);
	printf("Isi nilai dari variabel alamat adalah %7.2f", *alamat);

	_getch();
	return 0;
}
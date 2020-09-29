#include <stdio.h>
#include <stdlib.h>


typedef struct daftar_panitia daftar;
struct daftar_panitia{
	char nama[50];
	char divisi[50];
};

int main()
{
	int a,b;
	daftar data[30];

    puts("Sistem Data Panitia");
	printf("Masukkan Jumlah Panitia : ");
	scanf("%d", &a);

	for(b=0;b<a;b++){
		printf("\nPanitia %d\n", b+1);
		printf("Nama Panitia\t: ");
		scanf("%s", &data[b].nama);
		fflush(stdin);
		printf("Divisi\t\t: ");
		scanf("%s", &data[b].divisi);
		fflush(stdin);
	}
	puts("\n\t\t   DATA PANITIA LOMBA");
	puts("\t\t   ==================\n\n");
	puts(" |NO. | \tNAMA\t\t | \tDIVISI\t |");
	puts(" =================================================");
	for (b=0;b<a;b++){
		printf(" |%d.  | \t%s\t\t | \t%s\t |\n", b+1, data[b].nama, data[b].divisi);
	}
	return 0;
}

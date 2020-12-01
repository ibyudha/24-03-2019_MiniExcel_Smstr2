// _________________________________________________________________________________ 
/*|																					|*/
/*|	by Gus Yudha																	|*/
/*|_________________________________________________________________________________|*/

/* Mengganti setiap elemen pada array yang bernilai 0 menjadi = elemen pertama array */
#include <stdio.h>
#define Nmaks 10
typedef int YudhaRavi[Nmaks];

/* deklarasi prosedur */
void Penggantian ( YudhaRavi YR, int N );

int main ( void )
{
	
	int i;			/* variabel pencacah */
	int batas;		/* variabel banyak elemen pada array */
	YudhaRavi YR;
	
	do {
		printf	( "Masukan banyak Array YR[] = " );
		scanf	( "%d", &batas );	
	} while ( batas > 10 || batas < 1 );			/* Membatasi input user */
	
	for ( i = 1; i <= batas; i++ ){
		do {
			printf	( "Masukan elemen ke - %d pada array YR[] = ", i );
			scanf	( "%d", &YR[i] );
		} while ( YR[i] > 100 || YR[i] < -100 );	/* Membatasi input user */
	}
	
	printf	( "Array sebelum di proses, YR[%d] = ", batas );
	for	( i = 1; i <= batas; i++ ){
		printf	( "%-5d", YR[i] );
	}	/* Menampilkan elemen array */

	Penggantian ( YR, batas );
	
	printf	( "\nArray setelah di proses, YR[%d] = ", batas );
	for	( i = 1; i <= batas; i++ ){
		printf	( "%-5d", YR[i] );
	}	/* Menampilkan elemen array */
	
	return (0);
}

void Penggantian ( YudhaRavi YR, int N )
{
	/* kamus data */
	int i;					/* variabel pencacah */
	
	for ( i = 1; i <= N; i++ ){
		if ( YR[i] == 0 ){
			YR[i] = YR[1];
		}	/* Penggantian elemen array jika 0 */
	}	/* Pengecekan setiap elemen pada array */
}	/* Prosedur Penggantian nilai 0 pada array */

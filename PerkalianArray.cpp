// _________________________________________________________________________________ 
/*|																					|*/
/*|	by Gus Yudha																	|*/
/*|_________________________________________________________________________________|*/

#include <stdio.h>
#define Nmaks 20
typedef int YCodeW[Nmaks][Nmaks];

void Perkalian ( YCodeW Y, YCodeW W, int N, int M, int N2, int M2, YCodeW *B, int *N3, int *M3 );

int main ( void )
{
	int i;
	int j;
	int baris1;
	int baris2;
	int baris3;
	int kolom1;
	int kolom2;
	int kolom3;
	YCodeW Y;
	YCodeW W;
	YCodeW B;
	
	// Input Matriks Array Pertama
	printf		( "Masukan batas baris elemen pada Array Pertama = " );
	scanf		( "%d", &baris1 );
	
	printf		( "Masukan batas kolom elemen pada Array Pertama = " );
	scanf		( "%d", &kolom1 );
	
	// Input Masing masing dari Elemen Array Pertama
	for		( i = 1; i <= baris1; i++ ){
		for		( j = 1; j <= kolom1; j++ ){
			printf		( "Masukan interger untuk Elemen Y[%d,%d] = ", i, j );
			scanf		( "%d", &Y[i][j] );
		}
	}
	
	// Input Matriks Array Kedua
	printf		( "Masukan batas baris elemen pada Array Kedua = " );
	scanf		( "%d", &baris2 );
	
	printf		( "Masukan batas kolom elemen pada Array Kedua = " );
	scanf		( "%d", &kolom2 );
	
	// Input Masing masing dari Elemen Array Kedua
	for		( i = 1; i <= baris2; i++ ){
		for		( j = 1; j <= kolom2; j++ ){
			printf		( "Masukan interger untuk Elemen W[%d,%d] = ", i, j );
			scanf		( "%d", &W[i][j] );
		}
	}
	
	// Tampil Array Sebelum di Proses
	printf		( "Ini Matriks Array Pertama Y[%d,%d]\n", baris1, kolom1 );
	for		( i = 1; i <= baris1; i++ ){
		for		( j = 1; j <= kolom1; j++ ){
			printf		( "%-5d", Y[i][j] );
		}
		printf		( "\n" );
	}
	printf		( "\n" );
	printf		( "Ini Matriks Array Kedua W[%d,%d]\n", baris2, kolom2 );
	for		( i = 1; i <= baris2; i++ ){
		for		( j = 1; j <= kolom2; j++ ){
			printf		( "%-5d", W[i][j] );
		}
		printf		( "\n" );
	}
	printf		( "\n" );
	
	Perkalian ( Y, W, baris1, kolom1, baris2, kolom2, &B, &baris3, &kolom3 );
		
	// Tampil Array Sesudah di Proses
	printf		( "Ini Matriks Array Ketiga B[%d,%d]\n", baris3, kolom3 );
	for		( i = 1; i <= baris3; i++ ){
		for		( j = 1; j <= kolom3; j++ ){
			printf		( "%-5d", B[i][j] );
		}
		printf		( "\n" );
	}
	
	return 0;
}

void Perkalian ( YCodeW Y, YCodeW W, int N, int M, int N2, int M2, YCodeW *B, int *N3, int *M3 )
{
	int i;
	int j;
	int k;
	
	*N3 = N;
	*M3 = M2;
	
		for		( i = 1; i <= N; i++ ){
			for		( j = 1; j <= M2; j++ ){
				(*B)[i][j] = 0;
				for		( k = 1; k <= M; k++ ){
					(*B)[i][j] += (Y[i][k] * W[k][j]);
				}
			}
		}
}

// _____________________________________________________________________________________ 
/*|																						|*/
/*|	Catatan																				|*/
/*|																						|*/
/*|	Griya Upapathi, 17/03/2019															|*/
/*|	Bapak Windu Antara Kesiman															|*/
/*|																						|*/
/*|	Permasalahan dengan Array, Fungsi, Procedure, Pointer, Tranversal, dan Boolean		|*/
/*|		Memasukan input banyak element pada array										|*/
/*|		Memasukan nomor urut Fibonacci pada setiap element array						|*/
/*|		Memasukan input pilihan array processing pointer								|*/
/*|		Memasukan input pilihan boolean													|*/
/*|	by Gus Yudha																		|*/
/*|_____________________________________________________________________________________|*/

#include "stdio.h"
#include "YBooleanHW.c"

int main( void )
{	
	YW G;
	int a[YCodeW];
	long JaPaH[3];
	long IpIcU[5];
	long Y[10];

	printf ( "**************************************************************************\n" );
	printf ( "*                            Selamat Datang                              *\n" );
	printf ( "*                  Program Gelas Berisi Cairan 2 Warna                   *\n" );
	printf ( "*                  Tugas Struktur Data dan Pemrograman                   *\n" );
	printf ( "*                             by Gus Yudha                               *\n" );
	printf ( "**************************************************************************\n\n" );	
	
	do {
		
		printf	( " || Masukan Banyak Array Fibonacci (10Maks) = " );
		scanf	( "%ld", &IpIcU[3] );
		
		if ( IpIcU[3] < 1 || IpIcU[3] > 10 ){
			printf ( "\n**************************************************************************\n" );
			printf ( "*            Input tidak sesuai, Silahkan menginput kembali.             *\n" );
			printf ( "**************************************************************************\n\n" );	
		}
		
	} while ( IpIcU[3] < 1 || IpIcU[3] > 10 );
		
		for ( IpIcU[2] = 1; IpIcU[2] <= IpIcU[3]; IpIcU[2]++ ) {
			
			do {	
  				printf	( "\n            || Input Integer untuk Gelas ke '%ld' (10Maks) : ", IpIcU[2] );
				scanf	( "%ld", &IpIcU[1] );

				Y[IpIcU[2]] = IpIcU[1];
				
				if ( IpIcU[1] < 1 || IpIcU[1] > 10 ){
					printf ( "\n**************************************************************************\n" );
					printf ( "*            Input tidak sesuai, Silahkan menginput kembali.             *\n" );
					printf ( "**************************************************************************\n\n" );	
				}
			} while ( IpIcU[1] < 1 || IpIcU[1] > 10 );
			
			G[IpIcU[2]] = Fibonacci( IpIcU[1] );
			a[IpIcU[2]] = Fibonacci( IpIcU[1] );
  		}
  		
  		for ( IpIcU[2] = 1; IpIcU[2] <= IpIcU[3]; IpIcU[2]++ ) {
  			if (G[IpIcU[2]] % 2 == 0){
  				printf		( "\n            Array '%ld', Fibonacci ( Deret ke '%ld' ) = %ld (Hitam)\n", IpIcU[2], Y[IpIcU[2]], G[IpIcU[2]] );
			}
  			else {
  				printf		( "\n            Array '%ld', Fibonacci ( Deret ke '%ld' ) = %ld (Putih)\n", IpIcU[2], Y[IpIcU[2]], G[IpIcU[2]] );
			}
  		}
  		
  		
  			printf ( "\n\n**************************************************************************\n" );
			printf ( "                        Array Processing Pointer                         \n" );
			printf ( "                 Masukan Pilihan Mode Pengurutan Volume                  \n" );
			printf ( "**************************************************************************\n\n" );	
			printf ( "                  1. Mengurutkan dari Volume Terdikit      \n");
			printf ( "                  2. Mengurutkan dari Volume Terbanyak      \n\n");
		do {
			printf	( " || Masukan Input anda: ");
  			scanf	( "%d", &IpIcU[5] );
  			if ( IpIcU[5] < 1 || IpIcU[5] > 2 ){
				printf ( "\n**************************************************************************\n" );
				printf ( "*            Input tidak sesuai, Silahkan menginput kembali.             *\n" );
				printf ( "**************************************************************************\n\n" );	
			}
		} while ( IpIcU[5] < 1 || IpIcU[5] > 2 );


		printf ( "\n\n------------- Urutan Volume Gelas Berisi Cairan Berwarna Asli -------------\n\n" );

  		for ( IpIcU[2] = 1; IpIcU[2] <= IpIcU[3]; IpIcU[2]++ ) {
   			printf ( "%7d", a[IpIcU[2]] );
  		}

  		if ( IpIcU[5] == 1 ) {
    		Pengurutan ( a, IpIcU[3], Increment );
    		printf ( "\n\n-------------- Terurut dari Volume Terdikit sampai Terbanyak --------------\n\n" );
  		} 
		else {
    		Pengurutan ( a, IpIcU[3], Decrement );
    		printf ( "\n\n-------------- Terurut dari Volume Terbanyak sampai Terdikit --------------\n\n" );
  		}

  		for ( IpIcU[2] = 1; IpIcU[2] <= IpIcU[3]; IpIcU[2]++ ) {
    		printf ( "%7d", a[IpIcU[2]] );
  		}

  		printf( "\n" );
  		
  		JaPaH[1] = Jumlah ( G, IpIcU[3] );
  		printf ( "\n\n**************************************************************************\n" );
		printf ( "                           Algoritma Transversal                         \n" );
		printf ( "       Total Volume Cairan Berwarna pada Seluruh Deret Gelas = %ld      \n", JaPaH[1] );
		printf ( "**************************************************************************\n\n" );
			
  		printf ( "**************************************************************************\n" );
		printf ( "                          Algoritma Boolean                              \n" );
		printf ( "                 Masukan Pilihan Cairan Berwarna Pertama                 \n" );
		printf ( "**************************************************************************\n\n" );	
		printf ( "                 1. Temukan Cairan Berwarna Putih Pertama      \n");
		printf ( "                 2. Temukan Cairan Berwarna Hitam Pertama      \n\n");
		do {
			printf		( " || Masukan Input anda: ");
  			scanf		( "%ld", &IpIcU[4] );
  			if ( IpIcU[4] < 1 || IpIcU[4] > 2 ){
				printf ( "\n**************************************************************************\n" );
				printf ( "*            Input tidak sesuai, Silahkan menginput kembali.             *\n" );
				printf ( "**************************************************************************\n\n" );	
			}
		} while ( IpIcU[4] < 1 || IpIcU[4] > 2 );
		
		if ( IpIcU[4] == 1 ) {
			JaPaH[2] = Putih ( G, IpIcU[3] );
			if ( JaPaH [2] == 0 ){
				printf ( "\n\n**************************************************************************\n" );
				printf ( "            Tak ditemukan Cairan Berwarna Putih dari Deret Gelas.        \n" );
				printf ( "**************************************************************************\n\n" );	
			}
			else {
				printf ( "\n\n**************************************************************************\n" );
				printf ( "              Telah ditemukan Cairan Putih pada Gelas ke %ld             \n", JaPaH[2] );
				printf ( "                          Yang memiliki Nilai = %ld                      \n", G[JaPaH[2]] );
				printf ( "**************************************************************************\n\n" );
			}
		}
		
		if ( IpIcU[4] == 2 ) {
			JaPaH[3] = Hitam ( G, IpIcU[3] );
			if ( JaPaH [3] == 0 ){
				printf ( "\n\n**************************************************************************\n" );
				printf ( "            Tak ditemukan Cairan Berwarna Hitam dari Deret Gelas.          \n" );
				printf ( "**************************************************************************\n\n" );	
			}
			else {
				printf ( "\n\n**************************************************************************\n" );
				printf ( "            Telah ditemukan Cairan Hitam pada Gelas ke %ld               \n", JaPaH[3] );
				printf ( "                      Yang memiliki Nilai = %ld                          \n", G[JaPaH[3]] );
				printf ( "**************************************************************************\n\n" );
			}
		}

	return 0;
}

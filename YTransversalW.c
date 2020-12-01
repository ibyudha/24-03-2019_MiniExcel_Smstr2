// _________________________________________________________________________________ 
/*|																					|*/
/*|	Catatan																			|*/
/*|																					|*/
/*|	Griya Upapathi, 18/03/2019														|*/
/*|	Bapak Windu Antara Kesiman														|*/
/*|																					|*/
/*|	Permasalahan dengan Array, Fungsi, Prosedur, Manipulasi 2D Array, Transversal	|*/
/*|	by Gus Yudha																	|*/
/*|_________________________________________________________________________________|*/

#include "stdio.h"
#include "YTransversalHW.c"

int main( void )
{
	
	printf ( "**************************************************************************\n" );
	printf ( "*                            Selamat Datang                              *\n" );
	printf ( "*                     Program Tabel Nilai Mahasiswa                      *\n" );
	printf ( "*                  Tugas Struktur Data dan Pemrograman                   *\n" );
	printf ( "*                             by Gus Yudha                               *\n" );
	printf ( "**************************************************************************\n\n" );
	
	int ST;
	
	const int AV[STU][TT] = {	{ 77, 68, 86, 73, 65 },
								{ 96, 87, 89, 78, 59 },
								{ 70, 90, 86, 81, 75 },
								{ 45, 76, 93, 65, 66 },
								{ 91, 77, 88, 54, 83 }		};

	printf		( "                     ---------- ARRAY ----------\n\n\n" );
	SA	( AV, STU, TT );

	printf		( "\n\n Nilai Terendah      : %d\n Nilai Tertinggi     : %d\n", Min( AV, STU, TT ), Max( AV, STU, TT ) );

	for ( ST = 0; ST < STU; ST++ ) {
    	printf	( "\n    ----- Rata-rata Nilai untuk Mahasiswa %d adalah %.2f -----\n", ST + 1, Ave( AV[ST], TT ) );
	}
	
	return 0;
}

// _________________________________________________________________________________ 
/*|																					|*/
/*|	by Gus Yudha																	|*/
/*|_________________________________________________________________________________|*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#define YCodeW 11
typedef int YudhaWirawan[YCodeW][YCodeW];

void SelamatDatang();
void TampilanMenu1();
void TampilanMenu2( YudhaWirawan YW, int Baris, int Kolom );
void TampilanMenu3( YudhaWirawan YW , int Baris, int Kolom );
void TampilanExit();
void TampilanError( char Error );
void InputBatasArray( YudhaWirawan YW );
void TO();
void T1( YudhaWirawan YW, int input );
void T2( YudhaWirawan YW, int input );
void T3( YudhaWirawan YW, int input );
void T4( YudhaWirawan YW, int input );
void T5( YudhaWirawan YW, int input );
void TC( YudhaWirawan YW, int inputb, int inputk, int B, int K );
void C();
void O1();
void O2();
void O3();
void S();
void I();
void cMenu();
void cError();
void cExit();
void E();
void W();
int FungsiSUM ( YudhaWirawan YW, int Brs, int Klm );
int FungsiSUM2 ( YudhaWirawan YW, int Brs, int Klm );
int FungsiMIN ( YudhaWirawan YW, int Brs, int Klm );
int FungsiMAX ( YudhaWirawan YW, int Brs, int Klm );
float FungsiMEAN ( YudhaWirawan YW, int Brs, int Klm );
float FungsiMEAN2 ( YudhaWirawan YW, int Brs, int Klm );
bool Ceking( char *cPMM );

int main ( void )
{
	
	SelamatDatang();
	
	return 0;
}

void SelamatDatang()
{
	const char *Excel[] = {
	"                                                           ::::::::::::::::::::::::::::: `:::::::::::::::::::\n","                                                           ::::::::.   `:::-   `:::::::: `-----:::-------::::\n","                                                           :::::::::::.     `::::::::::: `:::::::::::::::::::\n","                                                           ::::::-----:::::::-----::::::  `````-:-```````::::\n","                                                           ::::::::::::::::::::::::::::: `:::::::::::::::::::\n","                                                           `..--::::::::::::::::::::::::  ``````````````````\n","                                                                              ```..--:::\n","                                                           ::::::-----:::::::-----::::::  `````-:-```````::::\n","                                                           :::::::::.   `:-   `:::::::::       -:-       ::::\n","                                                           :::::::::`   .:.   `:::::::::       -:-       ::::\n","                                                           ::::::::::::::::::::::::::::: `::::::::-------::::\n","                                                                    ``...--:::::::::::::\n","                                                           ::::::::::.       `:::::::::: `.....-::.......::::\n","                                                           :::::::::::::::::::::::::::::       .:-       ::::\n","                                                           ::::::::::::::::::::::::::::: `-----::::::::::::::\n","                                                           ::::::::`   .:::.    -::::::: `-----:::-------::::\n","                                                           ::::::::::::::::::::::::::::: `:::::::::::::::::::\n","                                                                              ```..---::\n\n","                                                           ::::::::::-   `   .:::::::::: `.....-::.......::::\n","                                                           :::::::`    :::::-    -:::::: `:::::::::::::::::::\n","                                                                    ``...--:::::::::::::\n","                                                           ::::::-    .:::::.    .:::::: `:::::::::::::::::::\n","                                                           ::::::::::::::::::::::::::::: `:::::::::::::::::::\n","                                                           `..---:::::::::::::::::::::::\n","                                                           :::::::::::::::::::::::::::::       -:-       ::::\n"};
	char PMainMenu[1];
	bool Pilihan;
	
	C ();
	O1();
	cMenu();
	printf ( "\n\n                                                **************************************************************************\n" );
	printf ( "                                                *                                                                        *\n" );
	printf ( "                                                *                            Selamat Datang                              *\n" );
	printf ( "                                                *                   Program MiniExcel Array 2 Dimensi                    *\n" );
	printf ( "                                                *                  Tugas Struktur Data dan Pemrograman                   *\n" );
	printf ( "                                                *                            by Yudha Wirawan                            *\n" );
	printf ( "                                                *                                                                        *\n" );
	printf ( "                                                **************************************************************************\n\n\n" );
	
	printf ( "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",Excel[6],Excel[20],Excel[5],Excel[16],Excel[0],Excel[14],Excel[13],Excel[7],Excel[19],Excel[1],Excel[8],Excel[18],Excel[2],Excel[12],Excel[9],Excel[15],Excel[21],Excel[3],Excel[24],Excel[10],Excel[22],Excel[4],Excel[23],Excel[11],Excel[17] );	
	printf ( "\n\n                                                                 Apakah anda ingin melanjutkan (Y/N) : " );    scanf ( "%s", &PMainMenu );

	Pilihan = Ceking ( PMainMenu );
	
	if ( Pilihan == true ){
		TampilanMenu1();
	} else {
		TampilanExit();
	}
	
}

void TampilanMenu1()
{
	void C ();
	void InputElemen( YudhaWirawan YW, int B, int K );
	
	const char *YW2[] = {"A", "B", "C", "D", "E"};
	YudhaWirawan YW;
	char PBatasArray[1];
	int i,j;
	bool Pilihan;
	
	// Inisiasi seluruh elemen array dengan 0
	for ( i = 1; i <= 10; i++ ){
		for ( j = 1; j <= 5; j++ ){
			YW[i][j] = 0;	
		}
	}
	
	C();
	I();
	cMenu();
	printf ( "\n\n                                                **************************************************************************\n" );
	printf ( "                                                *                                                                        *\n" );
	printf ( "                                                *                     Selamat Datang di Menu Utama                       *\n" );
	printf ( "                                                *                   Program MiniExcel Array 2 Dimensi                    *\n" );
	printf ( "                                                *                           by Yudha Wirawan                             *\n" );
	printf ( "                                                *                                                                        *\n" );
	printf ( "                                                **************************************************************************\n\n" );
	j = -1815051012;
	i = 0;
	TO();
	T1(YW,i);
	T2(YW,i);
	T3(YW,i);
	T4(YW,i);
	T5(YW,i);
	TC(YW,i,j,i,j);

	printf ( "\n\n                                                                 Mulai Menginput Batas Array? (Y/N) : " );
	scanf ( "%s", &PBatasArray );I();
	
	Pilihan = Ceking( PBatasArray );
	
	if ( Pilihan == true ){
		InputBatasArray( YW );
	} else {
		TampilanExit();
	}
	
}

void TampilanMenu2( YudhaWirawan YW , int Baris, int Kolom )
{

	char MenuCopy[1];
	bool PilihanCopy;
	int i,j,Sudah;

	C();
	cMenu();
	Sudah = 5;
	TO();
	T1(YW,Sudah);
	T2(YW,Sudah);
	T3(YW,Sudah);
	T4(YW,Sudah);
	T5(YW,Sudah);
	TC(YW,Baris,Kolom,Baris,Kolom);
	
	printf ( "                                                                 Ingin Melanjutkan ke Menu Copy? (Y/N) = " );
	scanf ( "%s", &MenuCopy );I();
	
	PilihanCopy = Ceking( MenuCopy );
	
	if ( PilihanCopy == true ){
		TampilanMenu3( YW, Baris, Kolom );
	}
	if ( PilihanCopy == false ){
		TampilanExit();
	}
	
}

void TampilanMenu3( YudhaWirawan YW , int Baris, int Kolom )
{

	int YW2[5][5];
	int CB,CB2,CK,CK2;
	int PB,PB2,PK,PK2;
	char MenuCopy[1];
	int PilihanMenuCopy;
	bool PilihanCopy;
	int i,j,k,l,Sudah;

	C();
	cMenu();
	Sudah = 5;
	for ( i = 1; i <= 5; i++ ){
		for ( j = 1; j <= 5; j++ ){
			YW2[i][j] = 0;	
		}
	}
	printf ( "\n\n                                                **************************************************************************\n" );
	printf ( "                                                *                                                                        *\n" );
	printf ( "                                                *                      Selamat Datang di Menu Copy                       *\n" );
	printf ( "                                                *                   Program MiniExcel Array 2 Dimensi                    *\n" );
	printf ( "                                                *                           by Yudha Wirawan                             *\n" );
	printf ( "                                                *                                                                        *\n" );
	printf ( "                                                **************************************************************************\n\n" );
	printf ( "                                                                 1. Copy Melalui Baris.\n" );
	printf ( "                                                                 2. Copy Melalui Kolom.\n" );
	printf ( "                                                                 3. Copy Melalui Baris dan Kolom.\n" );
	printf ( "                                                                 4. Copy Elemen.\n\n" );
	do {
		printf ( "                                                                 || Masukan input anda = " );
		scanf ( "%d", &PilihanMenuCopy );I();
		if ( PilihanMenuCopy < 1 || PilihanMenuCopy > 4 ){
			W();
		}
	} while ( PilihanMenuCopy < 1 || PilihanMenuCopy > 4 );
	
	switch ( PilihanMenuCopy )
	{
		case 1 : {
			C();
			TO();
			T1(YW,Sudah);
			T2(YW,Sudah);
			T3(YW,Sudah);
			T4(YW,Sudah);
			T5(YW,Sudah);
			TC(YW,Baris,Kolom,Baris,Kolom);
			do {
				printf ( "                                                               || No Baris yang ingin di Copy = " );
				scanf ( "%d", &CB );I();
				if ( CB < 1 || CB > 5 ){
					W();
				}
			} while ( CB < 1 || CB > 5 );
			printf ("\n");
			do {
				printf ( "                                                               || No Baris yang ingin di Paste = " );
				scanf ( "%d", &PB );I();
				if ( PB < 1 || PB > 5 ){
					W();
				}
			} while ( PB < 1 || PB > 5 );
			for ( i = 1; i <= Kolom; i++ ){
				YW[PB][i] = YW[CB][i];
			}
			C();
			TO();
			T1(YW,Sudah);
			T2(YW,Sudah);
			T3(YW,Sudah);
			T4(YW,Sudah);
			T5(YW,Sudah);
			TC(YW,Baris,Kolom,Baris,Kolom);
			break;
		}
		case 2 : {
			C();
			TO();
			T1(YW,Sudah);
			T2(YW,Sudah);
			T3(YW,Sudah);
			T4(YW,Sudah);
			T5(YW,Sudah);
			TC(YW,Baris,Kolom,Baris,Kolom);
			do {
				printf ( "                                                               || No Kolom yang ingin di Copy  = " );
				scanf ( "%d", &CK );I();
				if ( CK < 1 || CK > 5 ){
					W();
				}
			} while ( CK < 1 || CK > 5 );
			printf ("\n");
			do {
				printf ( "                                                               || No Kolom yang ingin di Paste = " );
				scanf ( "%d", &PK );I();
				if ( PK < 1 || PK > 5 ){
					W();
				}
			} while ( PK < 1 || PK > 5 );
			for ( i = 1; i <= Baris; i++ ){
				YW[i][PK] = YW[i][CK];
			}
			C();
			TO();
			T1(YW,Sudah);
			T2(YW,Sudah);
			T3(YW,Sudah);
			T4(YW,Sudah);
			T5(YW,Sudah);
			TC(YW,Baris,Kolom,Baris,Kolom);
			break;
		}
		case 3 : {
			C();
			TO();
			T1(YW,Sudah);
			T2(YW,Sudah);
			T3(YW,Sudah);
			T4(YW,Sudah);
			T5(YW,Sudah);
			TC(YW,Baris,Kolom,Baris,Kolom);
			do {
				printf ( "                                                           || No Baris awal yang ingin di Copy  = " );
				scanf ( "%d", &CB );I();
				if ( CB < 1 || CB > 5 ){
					W();
				}
			} while ( CB < 1 || CB > 5 );
			do {
				printf ( "                                                           || No Baris akhir yang ingin di Copy = " );
				scanf ( "%d", &CB2 );I();
				if ( CB2 < CB || CB2 > 5 ){
					W();
				}
			} while ( CB2 < 1 || CB2 > 5 );
			do {
				printf ( "                                                           || No Kolom awal yang ingin di Copy  = " );
				scanf ( "%d", &CK );I();
				if ( CK < 1 || CK > 5 ){
					W();
				}
			} while ( CK < 1 || CK > 5 );
			do {
				printf ( "                                                           || No Kolom akhir yang ingin di Copy = " );
				scanf ( "%d", &CK2 );I();
				if ( CK2 < CK || CK2 > 5 ){
					W();
				}
			} while ( CK2 < 1 || CK2 > 5 );
			printf ("\n");
			do {
				printf ( "                                                           || No Baris awal yang ingin di Paste  = " );
				scanf ( "%d", &PB );I();
				if ( PB < 1 || PB > 5 ){
					W();
				}
			} while ( PB < 1 || PB > 5 );
			do {
				printf ( "                                                           || No Baris akhir yang ingin di Paste = " );
				scanf ( "%d", &PB2 );I();
				if ( PB2 < PB || PB2 > 5 ){
					W();
				}
			} while ( PB2 < 1 || PB2 > 5 );
			do {
				printf ( "                                                           || No Kolom awal yang ingin di Paste  = " );
				scanf ( "%d", &PK );I();
				if ( PK < 1 || PK > 5 ){
					W();
				}
			} while ( PK < 1 || PK > 5 );
			do {
				printf ( "                                                           || No Kolom akhir yang ingin di Paste = " );
				scanf ( "%d", &PK2 );I();
				if ( PK2 < PK || PK2 > 5 ){
					W();
				}
			} while ( PK2 < 1 || PK2 > 5 );
			for ( i = CB; i <= CB2-CB; i++ ){
				for ( j = CK; j <= CK2-CK; j++ ){
					YW2[i][j] = YW[PB][PK];	
				}
			}
			C();
			TO();
			T1(YW,Sudah);
			T2(YW,Sudah);
			T3(YW,Sudah);
			T4(YW,Sudah);
			T5(YW,Sudah);
			TC(YW,Baris,Kolom,Baris,Kolom);
			break;
		}
		case 4 : {
			C();
			TO();
			T1(YW,Sudah);
			T2(YW,Sudah);
			T3(YW,Sudah);
			T4(YW,Sudah);
			T5(YW,Sudah);
			TC(YW,Baris,Kolom,Baris,Kolom);
			do {
				printf ( "                                                           || No Baris Elemen yang ingin di Copy  = " );
				scanf ( "%d", &CB );I();
				if ( CB < 1 || CB > 5 ){
					W();
				}
			} while ( CB < 1 || CB > 5 );
			do {
				printf ( "                                                           || No Kolom Elemen yang ingin di Copy  = " );
				scanf ( "%d", &CK );I();
				if ( CK < 1 || CK > 5 ){
					W();
				}
			} while ( CK < 1 || CK > 5 );
			printf ("\n");
			do {
				printf ( "                                                           || No Baris Elemen yang ingin di Paste  = " );
				scanf ( "%d", &PB );I();
				if ( PB < 1 || PB > 5 ){
					W();
				}
			} while ( PB < 1 || PB > 5 );
			do {
				printf ( "                                                           || No Kolom Elemen yang ingin di Paste  = " );
				scanf ( "%d", &PK );I();
				if ( PK < 1 || PK > 5 ){
					W();
				}
			} while ( PK < 1 || PK > 5 );
			YW[PB][PK] = YW[CB][CK];
			C();
			TO();
			T1(YW,Sudah);
			T2(YW,Sudah);
			T3(YW,Sudah);
			T4(YW,Sudah);
			T5(YW,Sudah);
			TC(YW,Baris,Kolom,Baris,Kolom);
			break;
		}
	}
	
	
	
	
	
	
	printf ( "                                                                 Ingin Mengulang Program? (Y/N) = " );
	scanf ( "%s", &MenuCopy );I();
	
	PilihanCopy = Ceking( MenuCopy );
	
	if ( PilihanCopy == true ){
		SelamatDatang();
	}
	if ( PilihanCopy == false ){
		TampilanExit();
	}
	
}

void InputBatasArray( YudhaWirawan YW )
{
	void InputElemen( YudhaWirawan YW, int B, int K );
	
	int baris, kolom;
	
	C();
	cMenu();
	printf ( "\n\n                                                **************************************************************************\n" );
	printf ( "                                                *                                                                        *\n" );
	printf ( "                                                *               Selamat Datang di Menu Input Batas Array                 *\n" );
	printf ( "                                                *                   Program MiniExcel Array 2 Dimensi                    *\n" );
	printf ( "                                                *                           by Yudha Wirawan                             *\n" );
	printf ( "                                                *                                                                        *\n" );
	printf ( "                                                **************************************************************************\n\n" );
	
	do {
		printf ( "                                                                 || Masukan batas baris (5 Maks) = " );
		scanf ( "%d", &baris );I();
		if ( baris < 1 || baris > 5 ){
			W();
		}
	} while ( baris < 1 || baris > 5 );
	
	do {
		printf ( "\n                                                                 || Masukan batas kolom (5 Maks) = " );
		scanf ( "%d", &kolom );I();
		if ( kolom < 1 || kolom > 5 ){
			W();
		}
	} while ( kolom < 1 || kolom > 5 );
	
	InputElemen( YW, baris, kolom );
	
}

void InputElemen( YudhaWirawan YW, int B, int K )
{
	
	int i,j,Sudah,Kosong;
	char MenuInput[1];
	bool PilihanInput;
	
	C();
	Sudah = 5;
	Kosong = 0;
	cMenu();
	printf ( "\n\n                                                **************************************************************************\n" );
	printf ( "                                                *                                                                        *\n" );
	printf ( "                                                *                  Selamat Datang di Menu Input Elemen                   *\n" );
	printf ( "                                                *                   Program MiniExcel Array 2 Dimensi                    *\n" );
	printf ( "                                                *                           by Yudha Wirawan                             *\n" );
	printf ( "                                                *                                                                        *\n" );
	printf ( "                                                **************************************************************************\n\n" );
	
	printf ( "                                                                 Ingin Melanjutkan Mengiput Elemen? (Y/N) = " );
	scanf ( "%s", &MenuInput );I();
	
	PilihanInput = Ceking( MenuInput );
	
	if ( PilihanInput == true ){
		C();
		for ( i = 1; i <= B; i++ ){
			for ( j = 1; j <= K; j++ ){
				C();
				printf ( "\n\n                                                **************************************************************************\n" );
				printf ( "                                                *                                                                        *\n" );
				printf ( "                                                *                   INPUT ELEMEN ( Interval 1 sampai 9 )                 *\n" );
				printf ( "                                                *                            Baris ke - ( %d )                            *\n",i );
				printf ( "                                                *                            Kolom ke - ( %d )                            *\n",j );
				printf ( "                                                *                                                                        *\n" );
				printf ( "                                                **************************************************************************\n\n" );
				do {
					printf ( "                                                                           || YW[%d][%d] = ", i, j );	
					scanf ( "%d", &YW[i][j] );I();
					if ( YW[i][j] < 1 || YW[i][j] > 9 ){
						W();
					}
				} while ( YW[i][j] < 1 || YW[i][j] > 9 );
				TO();
				switch ( i )
				{
					case 1 : {
						T1(YW,j);
						T2(YW,Kosong);
						T3(YW,Kosong);
						T4(YW,Kosong);
						T5(YW,Kosong);
						TC(YW,i,j,i,j);
						break;
					}
					case 2 : {
						T1(YW,Sudah);
						T2(YW,j);
						T3(YW,Kosong);
						T4(YW,Kosong);
						T5(YW,Kosong);
						TC(YW,i,j,B,K);
						break;
					}
					case 3 : {
						T1(YW,Sudah);
						T2(YW,Sudah);
						T3(YW,j);
						T4(YW,Kosong);
						T5(YW,Kosong);
						TC(YW,i,j,B,K);
						break;
					}
					case 4 : {
						T1(YW,Sudah);
						T2(YW,Sudah);
						T3(YW,Sudah);
						T4(YW,j);
						T5(YW,Kosong);
						TC(YW,i,j,B,K);
						break;
					}
					case 5 : {
						T1(YW,Sudah);
						T2(YW,Sudah);
						T3(YW,Sudah);
						T4(YW,Sudah);
						T5(YW,Sudah);
						TC(YW,i,j,B,K);
						break;
					}
				}
				printf ( "                                                                 " );	system("PAUSE"); I();
			}
		}
		
		TampilanMenu2( YW, B, K );
	}
	if ( PilihanInput == false ){
		TampilanExit();
	}
}

void TO()
{
	const char *TableAtas[] = {
	"                    |          |      A     |      B     |      C     |      D     |      E     |    SUM     |    MIN     |    MAX     |    AVE     |\n","                    |__________|____________|____________|____________|____________|____________|____________|____________|____________|____________|\n","                    |          |            |            |            |            |            |            |            |            |            |\n","                     _______________________________________________________________________________________________________________________________\n"};

	printf ( "%s%s%s%s",TableAtas[3],TableAtas[2],TableAtas[0],TableAtas[1] );
}

void T1( YudhaWirawan YW, int input )
{
	
	int i;
	int SUM;
	int MIN;
	int MAX;
	float AVE;
	
	SUM = 0;
	MIN = YW[1][1];
	MAX = YW[1][1];
	AVE = 0;
	
	for ( i = 1; i <= input; i++ ){
		SUM += YW[1][i];
		if ( YW[1][i] < MIN && YW[1][i] != 0 ){
			MIN = YW[1][i];
		}
		if ( YW[1][i] > MAX ){
			MAX = YW[1][i];
		}
		AVE = SUM / 2;
	}
	
	printf ( "                    |          |            |            |            |            |            |            |            |            |            |\n                    |     1    |" );
	switch (input)
	{
		case 1 : {
			printf ( "     %d      |            |            |            |            |", YW[1][1] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 2 : {
			printf ( "     %d      |      %d     |            |            |            |", YW[1][1], YW[1][2] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 3 : {
			printf ( "     %d      |      %d     |      %d     |            |            |", YW[1][1], YW[1][2], YW[1][3] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 4 : {
			printf ( "     %d      |      %d     |      %d     |      %d     |            |", YW[1][1], YW[1][2], YW[1][3], YW[1][4] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 5 : {
			printf ( "     %d      |      %d     |      %d     |      %d     |      %d     |", YW[1][1], YW[1][2], YW[1][3], YW[1][4], YW[1][5] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		default : {
			printf ( "            |            |            |            |            |            |            |            |            |\n" );
			break;
		}
	}
	printf ( "                    |__________|____________|____________|____________|____________|____________|____________|____________|____________|____________|\n" );	
}

void T2( YudhaWirawan YW, int input )
{
	
	int i;
	int SUM;
	int MIN;
	int MAX;
	float AVE;
	
	SUM = 0;
	MIN = YW[2][1];
	MAX = YW[2][1];
	AVE = 0;
	
	for ( i = 1; i <= input; i++ ){
		SUM += YW[2][i];
		if ( YW[2][i] < MIN && YW[2][i] != 0 ){
			MIN = YW[2][i];
		}
		if ( YW[2][i] > MAX ){
			MAX = YW[2][i];
		}
		AVE = SUM / 2;
	}
	
	printf ( "                    |          |            |            |            |            |            |            |            |            |            |\n                    |     2    |" );
	switch (input)
	{
		case 1 : {
			printf ( "     %d      |            |            |            |            |", YW[2][1] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 2 : {
			printf ( "     %d      |      %d     |            |            |            |", YW[2][1], YW[2][2] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 3 : {
			printf ( "     %d      |      %d     |      %d     |            |            |", YW[2][1], YW[2][2], YW[2][3] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 4 : {
			printf ( "     %d      |      %d     |      %d     |      %d     |            |", YW[2][1], YW[2][2], YW[2][3], YW[2][4] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 5 : {
			printf ( "     %d      |      %d     |      %d     |      %d     |      %d     |", YW[2][1], YW[2][2], YW[2][3], YW[2][4], YW[2][5] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		default : {
			printf ( "            |            |            |            |            |            |            |            |            |\n" );
			break;
		}
	}
	printf ( "                    |__________|____________|____________|____________|____________|____________|____________|____________|____________|____________|\n" );	
}

void T3( YudhaWirawan YW, int input )
{
	
	int i;
	int SUM;
	int MIN;
	int MAX;
	float AVE;
	
	SUM = 0;
	MIN = YW[3][1];
	MAX = YW[3][1];
	AVE = 0;
	
	for ( i = 1; i <= input; i++ ){
		SUM += YW[3][i];
		if ( YW[3][i] < MIN && YW[3][i] != 0 ){
			MIN = YW[3][i];
		}
		if ( YW[3][i] > MAX ){
			MAX = YW[3][i];
		}
		AVE = SUM / 2;
	}
	
	printf ( "                    |          |            |            |            |            |            |            |            |            |            |\n                    |     3    |" );
	switch (input)
	{
		case 1 : {
			printf ( "     %d      |            |            |            |            |", YW[3][1] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 2 : {
			printf ( "     %d      |      %d     |            |            |            |", YW[3][1], YW[3][2] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 3 : {
			printf ( "     %d      |      %d     |      %d     |            |            |", YW[3][1], YW[3][2], YW[3][3] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 4 : {
			printf ( "     %d      |      %d     |      %d     |      %d     |            |", YW[3][1], YW[3][2], YW[3][3], YW[3][4] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 5 : {
			printf ( "     %d      |      %d     |      %d     |      %d     |      %d     |", YW[3][1], YW[3][2], YW[3][3], YW[3][4], YW[3][5] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		default : {
			printf ( "            |            |            |            |            |            |            |            |            |\n" );
			break;
		}
	}
	printf ( "                    |__________|____________|____________|____________|____________|____________|____________|____________|____________|____________|\n" );	
}

void T4( YudhaWirawan YW, int input )
{
	
	int i;
	int SUM;
	int MIN;
	int MAX;
	float AVE;
	
	SUM = 0;
	MIN = YW[4][1];
	MAX = YW[4][1];
	AVE = 0;
	
	for ( i = 1; i <= input; i++ ){
		SUM += YW[4][i];
		if ( YW[4][i] < MIN && YW[4][i] != 0 ){
			MIN = YW[4][i];
		}
		if ( YW[4][i] > MAX ){
			MAX = YW[4][i];
		}
		AVE = SUM / 2;
	}
	
	printf ( "                    |          |            |            |            |            |            |            |            |            |            |\n                    |     4    |" );
	switch (input)
	{
		case 1 : {
			printf ( "     %d      |            |            |            |            |", YW[4][1] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 2 : {
			printf ( "     %d      |      %d     |            |            |            |", YW[4][1], YW[4][2] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 3 : {
			printf ( "     %d      |      %d     |      %d     |            |            |", YW[4][1], YW[4][2], YW[4][3] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 4 : {
			printf ( "     %d      |      %d     |      %d     |      %d     |            |", YW[4][1], YW[4][2], YW[4][3], YW[4][4] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 5 : {
			printf ( "     %d      |      %d     |      %d     |      %d     |      %d     |", YW[4][1], YW[4][2], YW[4][3], YW[4][4], YW[4][5] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		default : {
			printf ( "            |            |            |            |            |            |            |            |            |\n" );
			break;
		}
	}
	printf ( "                    |__________|____________|____________|____________|____________|____________|____________|____________|____________|____________|\n" );	
}

void T5( YudhaWirawan YW, int input )
{
	
	int i;
	int SUM;
	int MIN;
	int MAX;
	float AVE;
	
	SUM = 0;
	MIN = YW[5][1];
	MAX = YW[5][1];
	AVE = 0;
	
	for ( i = 1; i <= input; i++ ){
		SUM += YW[5][i];
		if ( YW[5][i] < MIN && YW[5][i] != 0 ){
			MIN = YW[5][i];
		}
		if ( YW[5][i] > MAX ){
			MAX = YW[5][i];
		}
		AVE = SUM / 2;
	}
	
	printf ( "                    |          |            |            |            |            |            |            |            |            |            |\n                    |     5    |" );
	switch (input)
	{
		case 1 : {
			printf ( "     %d      |            |            |            |            |", YW[5][1] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 2 : {
			printf ( "     %d      |      %d     |            |            |            |", YW[5][1], YW[5][2] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 3 : {
			printf ( "     %d      |      %d     |      %d     |            |            |", YW[5][1], YW[5][2], YW[5][3] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 4 : {
			printf ( "     %d      |      %d     |      %d     |      %d     |            |", YW[5][1], YW[5][2], YW[5][3], YW[5][4] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		case 5 : {
			printf ( "     %d      |      %d     |      %d     |      %d     |      %d     |", YW[5][1], YW[5][2], YW[5][3], YW[5][4], YW[5][5] );
			for ( i = 1; i <= 4; i++ ){
				switch ( i ){
					case 1 : {
						if ( SUM < 10 ){
							printf ( "     %d      |", SUM );	
						}
						if ( SUM > 9 && SUM < 100 ){
							printf ( "     %d     |", SUM );
						}
						break;
					}
					case 2 : {
						if ( MIN < 10 ){
							printf ( "     %d      |", MIN );	
						}
						if ( MIN > 9 && MIN < 100 ){
							printf ( "     %d     |", MIN );
						}
						break;
					}
					case 3 : {
						if ( MAX < 10 ){
							printf ( "     %d      |", MAX );	
						}
						if ( MAX > 9 && MAX < 100 ){
							printf ( "     %d     |", MAX );
						}
						break;
					}
					case 4 : {
						if ( AVE < 10 ){
							printf ( "     %.0f      |\n", AVE );	
						}
						if ( AVE > 9 && AVE < 100 ){
							printf ( "     %.0f     |\n", AVE );
						}
						break;
					}
				}
			}
			break;
		}
		default : {
			printf ( "            |            |            |            |            |            |            |            |            |\n" );
			break;
		}
	}
	printf ( "                    |__________|____________|____________|____________|____________|____________|____________|____________|____________|____________|\n" );	
}

void TC( YudhaWirawan YW, int inputb, int inputk, int B, int K )
{
	int i,j;
	float Tampung;
	int SUMTotal[9];
	int MINTotal[8];
	int MAXTotal[8];
	float MINAVE, MAXAVE;
	float AVETotal[9];
	
	//Inisiasi Array SUM AVE dengan 0
	for ( i = 1; i <= 9; i++ ){
			SUMTotal[i] = 0;
			MINTotal[i] = 0;
			MAXTotal[i] = 0;
			AVETotal[i] = 0;
	}
	//---------------------------------- SUM AVE 1
	for ( i = 1; i <= B; i++ ){
		SUMTotal[1] += YW[i][1];
		MINTotal[1] = YW[1][1];
		for ( j = 1; j <= B; j++ ){
			if ( YW[j][1] < MINTotal[1] && YW[j][1] != 0 ){
				MINTotal[1] = YW[j][1];
			}
		}
		MAXTotal[1] = YW[1][1];
		for ( j = 1; j <= B; j++ ){
			if ( YW[j][1] > MAXTotal[1] ){
				MAXTotal[1] = YW[j][1];
			}
		}
		AVETotal[1] = SUMTotal[1]/2;
	}
	//---------------------------------- SUM AVE 2
	for ( i = 1; i <= B; i++ ){
		SUMTotal[2] += YW[i][2];
		MINTotal[2] = YW[1][2];
		for ( j = 1; j <= B; j++ ){
			if ( YW[j][2] < MINTotal[2] && YW[j][2] != 0 ){
				MINTotal[2] = YW[j][2];
			}
		}
		MAXTotal[2] = YW[1][2];
		for ( j = 1; j <= B; j++ ){
			if ( YW[j][2] > MAXTotal[2] ){
				MAXTotal[2] = YW[j][2];
			}
		}
		AVETotal[2] = SUMTotal[2]/2;
	}
	//---------------------------------- SUM AVE 3
	for ( i = 1; i <= B; i++ ){
		SUMTotal[3] += YW[i][3];
		MINTotal[3] = YW[1][3];
		for ( j = 1; j <= B; j++ ){
			if ( YW[j][3] < MINTotal[3] && YW[j][3] != 0 ){
				MINTotal[3] = YW[j][3];
			}
		}
		MAXTotal[3] = YW[1][3];
		for ( j = 1; j <= B; j++ ){
			if ( YW[j][3] > MAXTotal[3] ){
				MAXTotal[3] = YW[j][3];
			}
		}
		AVETotal[3] = SUMTotal[3]/2;
	}
	//---------------------------------- SUM AVE 4
	for ( i = 1; i <= B; i++ ){
		SUMTotal[4] += YW[i][4];
		MINTotal[4] = YW[1][4];
		for ( j = 1; j <= B; j++ ){
			if ( YW[j][4] < MINTotal[4] && YW[j][4] != 0 ){
				MINTotal[4] = YW[j][4];
			}
		}
		MAXTotal[4] = YW[1][4];
		for ( j = 1; j <= B; j++ ){
			if ( YW[j][4] > MAXTotal[4] ){
				MAXTotal[4] = YW[j][4];
			}
		}
		AVETotal[4] = SUMTotal[4]/2;
	}
	//---------------------------------- SUM AVE 5
	for ( i = 1; i <= B; i++ ){
		SUMTotal[5] += YW[i][5];
		MINTotal[5] = YW[1][5];
		for ( j = 1; j <= B; j++ ){
			if ( YW[j][5] < MINTotal[5] && YW[j][5] != 0 ){
				MINTotal[5] = YW[j][5];
			}
		}
		MAXTotal[5] = YW[1][5];
		for ( j = 1; j <= B; j++ ){
			if ( YW[j][5] > MAXTotal[5] ){
				MAXTotal[5] = YW[j][5];
			}
		}
		AVETotal[5] = SUMTotal[5]/2;
	}
	//---------------------------------- SUM AVE SUMTotal
	SUMTotal[6] = SUMTotal[1]+SUMTotal[2]+SUMTotal[3]+SUMTotal[4]+SUMTotal[5];
	YW[inputb+5][4] = SUMTotal[6];
	Tampung = 0;
	for ( i = 1; i <= K; i++ ){
		Tampung += YW[inputb][i];
	}
	YW[inputb+5][4] = Tampung;
	for ( i = 1; i <= B; i++ ){
		MINTotal[6] = Tampung;
		for ( j = 1; j <= B; j++ ){
			if ( YW[j+5][4] < MINTotal[6] && YW[j+5][4] != 0 ){
				MINTotal[6] = YW[j+5][4];
			}
		}
		MAXTotal[6] = Tampung;
		for ( j = 1; j <= B; j++ ){
			if ( YW[j+5][4] > MAXTotal[6] ){
				MAXTotal[6] = YW[j+5][4];
			}
		}
	}
	AVETotal[6] = SUMTotal[6]/2;
	
	//---------------------------------- SUM AVE MINTotal
	Tampung = YW[inputb][1];
	for ( i = 1; i <= K; i++ ){
		if ( YW[inputb][i] < Tampung  && YW[inputb][i] != 0 ){
			Tampung  = YW[inputb][i];
		}
	}
	YW[inputb+5][1] = Tampung;
	for ( i = 1; i <= B; i++ ){
		SUMTotal[7] += YW[i+5][1];
		MINTotal[7] = Tampung;
		for ( j = 1; j <= B; j++ ){
			if ( YW[j+5][1] < MINTotal[7] && YW[j+5][1] != 0 ){
				MINTotal[7] = YW[j+5][1];
			}
		}
		MAXTotal[7] = Tampung;
		for ( j = 1; j <= B; j++ ){
			if ( YW[j+5][1] > MAXTotal[7] ){
				MAXTotal[7] = YW[j+5][1];
			}
		}
		AVETotal[7] = SUMTotal[7]/2;
	}
	
	//---------------------------------- SUM AVE MAXTotal
	Tampung = YW[inputb][1]; //Max
	for ( i = 1; i <= K; i++ ){
		if ( YW[inputb][i] > Tampung ){
			Tampung = YW[inputb][i];
		}
	}
	YW[inputb+5][2] = Tampung;
	for ( i = 1; i <= B; i++ ){
		SUMTotal[8] += YW[i+5][2];
		MINTotal[8] = Tampung;
		for ( j = 1; j <= B; j++ ){
			if ( YW[j+5][2] < MINTotal[8] && YW[j+5][2] != 0 ){
				MINTotal[8] = YW[j+5][2];
			}
		}
		MAXTotal[8] = Tampung;
		for ( j = 1; j <= B; j++ ){
			if ( YW[j+5][2] > MAXTotal[8] ){
				MAXTotal[8] = YW[j+5][2];
			}
		}
		AVETotal[8] = SUMTotal[8]/2;
	}
	
	//---------------------------------- SUM AVE AVETotal
	Tampung = 0;
	for ( i = 1; i <= K; i++ ){
		Tampung += YW[inputb][i];
	}
	YW[inputb+5][3] = Tampung/2;
	
	for ( i = 1; i <= B; i++ ){
		SUMTotal[9] += YW[i+5][3];
		MINAVE = Tampung/2;
		for ( j = 1; j <= B; j++ ){
			if ( YW[j+5][3] < MINAVE && YW[j+5][3] != 0 ){
				MINAVE = YW[j+5][3];
			}
		}
		MAXAVE = Tampung/2;
		for ( j = 1; j <= B; j++ ){
			if ( YW[j+5][3] > MAXAVE ){
				MAXAVE = YW[j+5][3];
			}
		}
		AVETotal[9] = SUMTotal[9]/2;
	}
	
	// SUM		
	printf ( "                    |----------|------------|------------|------------|------------|------------|------------|------------|------------|------------|\n" );
	printf ( "                    |          |            |            |            |            |            |            |            |            |            |\n                    |   SUM    |" );
	if ( inputk != -1815051012 ) {
		for ( i = 1; i <= 9; i++ ){
			if ( i != 9 ){
				if ( SUMTotal[i] < 10 ){
					printf ( "     %d      |", SUMTotal[i] );
				}
				if ( SUMTotal[i] > 9 && SUMTotal[i] < 100 ){
					printf ( "     %d     |", SUMTotal[i] );
				}
				if ( SUMTotal[i] > 99 && SUMTotal[i] < 1000 ){
					printf ( "     %d    |", SUMTotal[i] );
				}
			} else {
				if ( SUMTotal[i] < 10 ){
					printf ( "     %d      |\n", SUMTotal[i] );
				}
				if ( SUMTotal[i] > 9 && SUMTotal[i] < 100 ){
					printf ( "     %d     |\n", SUMTotal[i] );
				}
				if ( SUMTotal[i] > 99 && SUMTotal[i] < 1000 ){
					printf ( "     %d    |\n", SUMTotal[i] );
				}	
			}	
		}
	} else {
		for ( i = 1; i <= 9; i++ ){
			if ( i != 9 ){
				printf ( "            |" );
			} else {
					printf ( "            |\n" );
			}	
		}
	}
	
	//MIN
	printf ( "                    |__________|____________|____________|____________|____________|____________|____________|____________|____________|____________|\n" );
	printf ( "                    |          |            |            |            |            |            |            |            |            |            |\n                    |   MIN    |" );
	if ( inputk != -1815051012 ) {
		for ( i = 1; i <= 9; i++ ){
			if ( i != 9 ){
				if ( MINTotal[i] < 10 ){
					printf ( "     %d      |", MINTotal[i] );
				}
				if ( MINTotal[i] > 9 && MINTotal[i] < 100 ){
					printf ( "     %d     |", MINTotal[i] );
				}
				if ( MINTotal[i] > 99 && MINTotal[i] < 1000 ){
					printf ( "     %d    |", MINTotal[i] );
				}
			} else {
				if ( MINTotal[i] < 10 ){
					printf ( "     %.0f      |\n", MINAVE );
				}
				if ( MINTotal[i] > 9 && MINTotal[i] < 100 ){
					printf ( "     %.0f     |\n", MINAVE );
				}
				if ( MINTotal[i] > 99 && MINTotal[i] < 1000 ){
					printf ( "     %.0f    |\n", MINAVE );
				}	
			}	
		}
	} else {
		for ( i = 1; i <= 9; i++ ){
			if ( i != 9 ){
				printf ( "            |" );
			} else {
					printf ( "            |\n" );
			}	
		}
	}
	
	//MAX
	printf ( "                    |__________|____________|____________|____________|____________|____________|____________|____________|____________|____________|\n" );
	printf ( "                    |          |            |            |            |            |            |            |            |            |            |\n                    |   MAX    |" );
	if ( inputk != -1815051012 ) {
		for ( i = 1; i <= 9; i++ ){
			if ( i != 9 ){
				if ( MAXTotal[i] < 10 ){
					printf ( "     %d      |", MAXTotal[i] );
				}
				if ( MAXTotal[i] > 9 && MAXTotal[i] < 100 ){
					printf ( "     %d     |", MAXTotal[i] );
				}
				if ( MAXTotal[i] > 99 && MAXTotal[i] < 1000 ){
					printf ( "     %d    |", MAXTotal[i] );
				}
			} else {
				if ( MAXTotal[i] < 10 ){
					printf ( "     %.0f      |\n", MAXAVE );
				}
				if ( MAXTotal[i] > 9 && MAXTotal[i] < 100 ){
					printf ( "     %.0f     |\n", MAXAVE );
				}
				if ( MAXTotal[i] > 99 && MINTotal[i] < 1000 ){
					printf ( "     %.0f    |\n", MAXAVE );
				}	
			}	
		}
	} else {
		for ( i = 1; i <= 9; i++ ){
			if ( i != 9 ){
				printf ( "            |" );
			} else {
					printf ( "            |\n" );
			}	
		}
	}	
	
	//AVE
	printf ( "                    |__________|____________|____________|____________|____________|____________|____________|____________|____________|____________|\n" );
	printf ( "                    |          |            |            |            |            |            |            |            |            |            |\n                    |   AVE    |" );
	if ( inputk != -1815051012 ){
		for ( i = 1; i <= 9; i++ ){
			if ( i != 9 ){
				if ( AVETotal[i] < 10 ){
					printf ( "     %.0f      |", AVETotal[i] );
				}
				if ( AVETotal[i] > 9 && AVETotal[i] < 100 ){
					printf ( "     %.0f     |", AVETotal[i] );
				}
				if ( AVETotal[i] > 99 && AVETotal[i] < 1000 ){
					printf ( "     %.0f    |", AVETotal[i] );
				}
			} else {
				if ( AVETotal[i] < 10 ){
					printf ( "     %.0f      |\n", AVETotal[i] );
				}
				if ( AVETotal[i] > 9 && AVETotal[i] < 100 ){
					printf ( "     %.0f     |\n", AVETotal[i] );
				}
				if ( AVETotal[i] > 99 && AVETotal[i] < 1000 ){
					printf ( "     %.0f    |\n", AVETotal[i] );
				}	
			}	
		}	
	} else {
		for ( i = 1; i <= 9; i++ ){
			if ( i != 9 ){
				printf ( "            |" );
			} else {
					printf ( "            |\n" );
			}	
		}
	}
	
	printf ( "                    |__________|____________|____________|____________|____________|____________|____________|____________|____________|____________|\n\n" );
}

void W()
{
	S();
	printf ( "\n                                                **************************************************************************\n" );
	printf ( "                                                *                                                                        *\n" );
	printf ( "                                                *            Input tidak sesuai, Silahkan menginput kembali!             *\n" );
	printf ( "                                                *                                                                        *\n" );
	printf ( "                                                **************************************************************************\n\n" );
}

void S()
{
	Beep(500,100);
	Beep(500,100);
	Beep(500,100);
}

int FungsiSUM ( YudhaWirawan YW, int Brs, int Klm )
{
	int i,j;
	int hasil;
	
	hasil = 0;
	for ( i = 1; i <= Brs; i++ ){
		for ( j = 1; j <= Klm; j++ ){
			hasil += YW[i][j];
		}
	}
	
	return hasil;
}

int FungsiSUM2 ( YudhaWirawan YW, int Brs, int Klm )
{
	int i;
	int hasil;
	
	hasil = 0;
	for ( i = 1; i <= Brs; i++ ){
		hasil += YW[i][Klm];
	}
	
	return hasil;
}

void O3()
{
	Beep(2000,250);
	Beep(3000,250);
}

int FungsiMIN ( YudhaWirawan YW, int Brs, int Klm )
{
	int i,j;
	int hasil;
	
	hasil = YW[1][1];
	for ( i = 1; i <= Brs; i++ ){
		for ( j = 1; j <= Klm; j++ ){
			if ( YW[i][j] < hasil ){
				hasil = YW[i][j];
			}
		}
	}
	
	return hasil;
}

int FungsiMAX ( YudhaWirawan YW, int Brs, int Klm )
{
	int i,j;
	int hasil;
	
	hasil = YW[1][1];
	for ( i = 1; i <= Brs; i++ ){
		for ( j = 1; j <= Klm; j++ ){
			if ( YW[i][j] > hasil ){
				hasil = YW[i][j];
			}
		}
	}
	
	return hasil;
}

void O1()
{
	Beep(500,250);
	Beep(1000,250);
	Beep(2000,250);
	Beep(3000,250);
}

float FungsiMEAN ( YudhaWirawan YW, int Brs, int Klm )
{
	int i,j;
	int hasil;
	
	hasil = 0;
	for ( i = 1; i <= Brs; i++ ){
		for ( j = 1; j <= Klm; j++ ){
			hasil += YW[i][j];
		}
	}
	
	return hasil/(Brs*Klm);
}

void O2()
{
	Beep(3000,250);
	Beep(2000,250);
	Beep(500,250);
	Beep(500,250);
}

float FungsiMEAN2 ( YudhaWirawan YW, int Brs, int Klm )
{
	int i;
	int hasil;
	
	hasil = 0;
	for ( i = 1; i <= Brs; i++ ){
		hasil += YW[i][Klm];
	}
	
	return hasil/Brs;
}

void cMenu()
{
	system( "color a" );
}

void cError()
{
	system( "color c" );
}

void cExit()
{
	system( "color b" );
}

void C()
{
	void ClearScreen();
	
	ClearScreen();
}

void ClearScreen()
{
	system("cls");
}

void E()
{
	void ExitScreen();
	
	ExitScreen();
}

void ExitScreen()
{
	system("exit");
}

bool Ceking( char *cPMM )
{
	switch ( *cPMM )
	{
		case 'Y' : {
			return true;
			break;
		}
		case 'N' : {
			return false;
			break;
		}
		case 'y' : {
			return true;
			break;
		}
		case 'n' : {
			return false;
			break;
		}
		default : {
			TampilanError( *cPMM );
			break;
		}
	}
	
}

void I()
{
	Beep(1000,250);
}

void TampilanError( char Error )
{
	
	const char *YLogo2W[] = {
	"                                 .-////////wYYYYYYYYY :NYYYYYYYY.   :NYYYYYYYb :NYYYYYYYb`   /YYYYYYYYy`       -YYYYYYYYY   +NYYYYYYN/   iYYYYYYYi\n","                                 -NYYYYYYYY+   /NYYYYYYYm +YYYYYYYYm`   iYYYYYYYYy +YYYYYYYY+    wYYYYYYYYi`mbbbbbbbNYYYYYYYb`   .yYYYYYYYYYYYYYm\n","                          `mYYYYYYYYYYYYYYYYYYYYYN- YYYYYYYYYYYYYYYYYYYYYYY .YYYYYYYYYYYYYYYYYYYYYYb`        bYYYYYYYYYYYYYYYYYYN+       /YYYYYYYY`\n","                                    /YYYYYYYYm`   +YYYYYYYYw wYYYYYYYYw    wYYYYYYYYi /bbbbbbbbbbbYYYYYYYYYYN/        +YYYYYYYYy      wYYYYYYYYY`\n","                                bYYYYYYYYYYYYYYYYYYYYYb /NYYYYYYYb`   /YYYYYYYYm /NYYYYYYYy`   iYYYYYYYYw`mYYYYYYYYYYYYYYYY    wNYYYYYYm.wYYYYYYY`\n","                         -iiiiiiiiiiiiiiiiii+/-`     -+wwwwwwwwwwwwwwi+:`  +wwwwwwwwwwwwwwwwwi+/-`         /yyyyyyyyyyyyyyyyw+-`         .yyyyyyyy:\n\n","                                iYYYYYYYYYYYYYYYYYYYYb :NYYYYYYYb.   /NYYYYYYYm /NYYYYYYYm`   +YYYYYYYYy +mYYYYYYYYYYYYYYY   -bYYYYYYYw` iYYYYYYY:\n","\n\n                                       +yyyyyyyy-    iyyyyyyyw. wyyyyyyyy.    wyyyyyyyw` iwwwwwwwwwwwwwwwwwi:            +iiiiiiii.       +wwww/\n","                                  :NYYYYYYYb`   /YYYYYYYYy iYYYYYYYYy`   iYYYYYYYYw               yYYYYYYYY+        /YYYYYYYYm`    +NYYYYYYYYYYYi\n","                           `mYYYYYYYYYYYYYYYYYYYYYN -YYYYYYYYYYNbbYYYYYYYYYY -NYYYYYYYYYbbbYYYYYYYYYb`        bYYYYYYYYNbYNYYYYYYYy`     /YYYYYYYY\n","                                -NYYYYYYYYYYYYYNYYYYYYYm /YYYYYYYYm`   +YYYYYYYYy +YYYYYYYYy    iYYYYYYYYi`mYYYYYYYYYYYYYYYb`   :YYYYYYYYbYYYYYYY\n","                                     /YYYYYYYYy    iYYYYYYYYw yYYYYYYYYi    yYYYYYYYY+ yYYYYYYYYYYYYYYYYYYYYYN         iYYYYYYYYy      /NYYYYYYN\n","                                          :YYYYYYYYY -NYYYYYYYY/   /NYYYYYYYb -NYYYYYYYb`  `+NYYYYYYYm`       .YYYYYYYYN  :yYYYYYYYb-    +YYYYYYYy\n","                                      +YYYYYYYYy    wYYYYYYYYi yYYYYYYYYi    mYYYYYYYY/ mYYYYYYYYYYYYYYYYYYYYY          iYYYYYYYYw      .mYYYYYm\n","                                   :NYYYYYYYm`   +YYYYYYYYy iYYYYYYYYy    wYYYYYYYYi              `YYYYYYYYY+        /YYYYYYYYm`    -bYYYYYYYYYY:\n","                          yYYYYYYYYYYYYYYYYYYYYNy.  mYYYYYYYYYYYYYYYYYYYNw .YYYYYYYYYYYYYYYYYYYYYYi`        mYYYYYYYYYYYYYYYYYYb:        :YYYYYYYY:\n"};
	char KembalikeMenu[1];
	bool PilihanError;
	
	C();
	S();
	cError();
	printf ( "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",YLogo2W[7],YLogo2W[13],YLogo2W[11],YLogo2W[3],YLogo2W[14],YLogo2W[8],YLogo2W[1],YLogo2W[10],YLogo2W[4],YLogo2W[6],YLogo2W[0],YLogo2W[12],YLogo2W[9],YLogo2W[2],YLogo2W[15],YLogo2W[5]);
	printf ( "\n                                                    **************************************************************************\n" );
	printf ( "                                                    *                                                                        *\n" );
	printf ( "                                                    *            Input tidak sesuai, Silahkan menginput kembali!             *\n" );
	printf ( "                                                    *                                                                        *\n" );
	printf ( "                                                    **************************************************************************\n\n" );
	
	if ( Error != 'Y' || Error != 'N' || Error != 'y' || Error != 'n' ){
		printf ( "\n\n                                                                      Apakah anda ingin kembali? (Y/N) : " );  scanf ( "%s", &KembalikeMenu );
		
		PilihanError = Ceking ( KembalikeMenu );
		
		if ( PilihanError == true ){
			SelamatDatang();
		}
	}
}

void TampilanExit()
{
	
	void E();
	
	const char *YLogoW[] = {
	"                                                           `s .NM/ /MMMMMMo      -mMMm-      oMMMMMM+ :MN. s`\n","                                                           y .MM`  /MMMMMMMMMMs      .d/`yMMMMMMMMMM+   MM. y\n","                                                            -/ :NN//MMMMMMMMMMMM.      -MMMMMMMMMMMM+:NN: /-\n","                                                                 ./:`.omMdo:.``````````````.:odMmo.`:/.\n","                                                                 ./:`.omMdo:.``````````````.:odMmo.`:/.\n","                                                             :/ -mNdMMMMmooooooomMMMMMMNooooooodMMMMdNm- /:\n","                                                           y  NM-  /MMMMMMMMo      .d:     sMMMMMMMM+  -MN  y\n","                                                           +- sMy  /MMMMMMMMMMMM.      :MMMMMMMMMMMM+  yMy .+\n","                                                              -+``sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMs``+-\n","                                                                      `::-.`.:+osyyhhyyso+:.`.-::`\n","                                                               `/: -yMMMMmmmmmmmmmmmmmmmmmmmmmmNMMMy- :/`\n","                                                                      `::-.`.:+osyyhhyyso+:.`.-::`\n","                                                              -+``sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMs``+-\n","                                                           y .MM`  /MMMMMMMMMs      .d:  `sMMMMMMMMM+   MM. y\n","                                                           `s .NM/ /MMMMMMMMMMMM.      -MMMMMMMMMMMM+ :MN. s`\n","                                                                   `::-`-+hmNmhso+////+oshmNmho-`-::`\n","                                                             :/ -mNdMMMMMMMMMMMMsoooooosMMMMMMMMMMMMdNm- /:\n","                                                           +- sMy  /MMMMMMMo      -mN.      oMMMMMMM+  yMy .+\n","                                                                   `::-`-+hmNmhso+////+oshmNmho-`-::`\n","                                                                          `-----::::::::-----`\n","                                                           y  NM-  /MMMMMMMMMMMs      .dhMMMMMMMMMMM+  -MN  y\n","                                                            -/ :NN//MMMMM+      -mMMMMN:      +MMMMM+:NN: /-\n","                                                                          `--------::--------`\n","                                                               `/: -yMMMMmmmmmmmmmmmmmmmmmmmmmmNMMMy- :/`\n"};
	char Exit[1];
	
	C();
	O3();
	cExit();
	printf ( "\n\n                                                **************************************************************************\n" );
	printf ( "                                                *                                                                        *\n" );
	printf ( "                                                *                Terima Kasih Telah Menggunakan MiniExcel                *\n" );
	printf ( "                                                *                                                                        *\n" );
	printf ( "                                                **************************************************************************\n\n" );
	
	printf ( "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",YLogoW[22],YLogoW[11],YLogoW[18],YLogoW[4],YLogoW[10],YLogoW[12],YLogoW[5],YLogoW[21],YLogoW[0],YLogoW[17],YLogoW[6],YLogoW[13],YLogoW[1],YLogoW[20],YLogoW[7],YLogoW[14],YLogoW[2],YLogoW[16],YLogoW[8],YLogoW[23],YLogoW[3],YLogoW[15],YLogoW[9],YLogoW[19]);
	printf ( "\n\n                                                                   Apakah anda ingin keluar? (Y/N) : " );    scanf ( "%s", &Exit );
	
	switch ( *Exit )
	{
		case 'Y' : {
			O2();
			E();
			break;
		}
		case 'N' : {
			SelamatDatang();
			break;
		}
		case 'y' : {
			O2();
			E();
			break;
		}
		case 'n' : {
			SelamatDatang();
			break;
		}
		default : {
			TampilanError( *Exit );
			break;
		}
	}
	
}

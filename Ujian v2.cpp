// _________________________________________________________________________________ 
/*|																					|*/
/*|	by Gus Yudha																	|*/
/*|_________________________________________________________________________________|*/

#include <stdio.h>
#include <stdbool.h>
#define Nmaks 10
typedef int YCodeW[Nmaks];

bool Kelipatan ( YCodeW Y, int N );

int main ( void )
{
	int i;
	int batas;
	bool out;
	YCodeW Y;
	
	printf	( "Masukan banyak array = " );
	scanf	( "%d", &batas );
	
	for ( i = 1; i <= batas; i++ ){
		printf	( "Masukan elemen ke - %d = ", i );
		scanf	( "%d", &Y[i] );
	}
	
	out = Kelipatan ( Y, batas );
	
	if ( out == true ){
		printf	( "array sesuai soal" );
	} else {
		printf	( "array tidak sesuai soal" );
	}
	
	return 0;
	
}

bool Kelipatan ( YCodeW Y, int N )
{
	int i;
	bool kontaminasi;
	
	i = 1;
	kontaminasi = false;
	
	while ( ( kontaminasi == false ) && ( i < N - 1 ) ){
		if ( ( Y[i+1] % Y[i] == 0 ) && ( Y[i+2] % Y[i] == 0 ) ){
			i += 1;
		} else {
			kontaminasi = true;
		}
	}
	
	if ( kontaminasi == true ){
		return (false);
	} else {
		return (true);
	}
}

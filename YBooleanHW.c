// _________________________________________________________________________________ 
/*|																					|*/
/*|	by Gus Yudha																	|*/
/*|_________________________________________________________________________________|*/

#include "YBooleanHW.h"


long Fibonacci( long W )
	{
  		if ( W == 0 || W == 1 ) {
    		return W;
 		}
 		else {
    		return Fibonacci ( W - 1 ) + Fibonacci( W - 2 );
  		}
	}
	
long Jumlah ( YW G, long W )
	{
		long j;
		int i;
		
		j = 0;
		for ( i = 1; i <= W; i++ ){
			j = j + G[i];
		}
		return j;
	}
	
long Putih ( YW G, long W )
	{
		int Putih;
		int i;
		
		Putih = -51012;
		i = 1;
		while ( ( Putih != -18150 ) && ( i < W ) ){
			if ( ( G[i] % 2 ) == 1 ){
				Putih = -18150;
			}
			else{
				i = i + 1;
			}
		}
		
		if ( Putih == -18150 ) {
			return i;
		}
		else {
			return 0;
		}	
	}
	
long Hitam ( YW G, long W )
	{
		int Hitam;
		int i;
		
		Hitam = -51012;
		i = 1;
		while ( ( Hitam != -18150 ) && ( i < W ) ){
			if ( ( G[i] % 2 ) == 0 ){
				Hitam = -18150;
			}
			else{
				i = i + 1;
			}
		}
		
		if ( Hitam == -18150 ) {
			return i;
		}
		else {
			return 0;
		}	
	}
void Pengurutan ( int kk[], const int uu, int (*bb)( int a, int b ))
	{
		int pp;
		int hh;

		void T ( int *elemen1Ptr, int *elemen2ptr );

		for ( pp = 1; pp < uu; pp++ ) {

			for ( hh = 1; hh <= uu - 1; hh++ ) {

				if ( (*bb)( kk[hh], kk[hh + 1] )) {
					T ( &kk[hh], &kk[hh + 1] );
				}
			}
 		}
	}

void T ( int *elemen1Ptr, int *elemen2Ptr )
	{
		int tt;

		tt		= *elemen1Ptr;
		*elemen1Ptr = *elemen2Ptr;
		*elemen2Ptr = tt;
	}

int Increment ( int a, int b )
	{
		return b < a;
	}

int Decrement ( int a, int b )
	{
		return b > a;
	}
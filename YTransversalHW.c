// _________________________________________________________________________________ 
/*|																					|*/
/*|	by Gus Yudha																	|*/
/*|_________________________________________________________________________________|*/

#include "YTransversalHW.h"


int Min( const int VA[][TT], int ST, int TS )
	{
		int i;
		int j;
		int downVA = 100;

		for ( i = 0; i < ST; i++ ) {

    		for ( j = 0; j < TS; j++ ) {

				if ( VA[i][j] < downVA ) {
					downVA = VA[i][j];
	  			}
			}
  		}

  		return downVA;
	}

int Max( const int VA[][TT], int ST, int TS )
	{
		int i;
		int j;
		int upVA = 0;

		for ( i = 0; i < ST; i++ ) {

    		for ( j = 0; j < TS; j++ ) {

    			if ( VA[i][j] > upVA ) {
        			upVA = VA[i][j];
				}
			}
		}

		return upVA;
	}

double Ave( const int AV[], int TS )
	{
		int i;
		int TO = 0;

  		for ( i = 0; i < TS; i++ ) {
			TO += AV[i];
		}
		return ( double ) TO / TS;
	}

void SA( const int VA[][TT], int ST, int TS )
	{
		int i;
  		int j;

  		printf( "                               [01]     [02]     [03]     [04]     [05]" );

  		for ( i = 0; i < ST; i++ ) {

    		printf( "\n Nilai Mahasiswa ke %d =         ", i + 1 );

    		for ( j = 0; j < TS; j++ ) {
				printf( "%-9d", VA[i][j] );
			}
  		}
	}
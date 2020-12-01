// _________________________________________________________________________________ 
/*|																					|*/
/*|	by Gus Yudha																	|*/
/*|_________________________________________________________________________________|*/

#include <stdio.h>
#include <stdbool.h>

main ()
{
	int a[20], b[7], c[9], d[20], e[20], i;
	float f;
	bool DA;	
	
	do {
	
		printf ("==|       C 2019 Gus Yudha All Rights Reserved.           |==\n");
		printf ("==|            Happy Silent Day of Saka 1941.             |==\n");
		printf ("==|                      No Work.                         |==\n");
		printf ("==|                      No Light.                        |==\n");
		printf ("==|                      No Talk.                         |==\n");
		printf ("==|                 Everythings is Queit.                 |==\n");
		printf ("==|         It is called Catur Bratha Penyepian.          |==\n");
		printf ("==| Welcome to Array Program of Transversal and Boolean.  |==\n\n");
		printf ("                |==| Main Menu |==|\n\n");
		printf ("               1. Program Transversal\n");
		printf ("               2. Program Boolean.\n");
		printf ("               3. Exit.\n\n");
		printf ("|=Input=| : ");														scanf ("%d", &c[1]);
		
			switch (c[1]) {
			
				case 1 : {
	do {
		printf ("==|       C 2019 Gus Yudha All Rights Reserved.       |==\n");
		printf ("==|       Welcome to Submenu Program of Transversal.      |==\n\n");
		printf ("             |==| List of the Menu |==|\n\n");
		printf ("            1. Sum of Elements Array.\n");
		printf ("            2. Count of Elements Array.\n");
		printf ("            3. Average of Elements Array.\n");
		printf ("            4. Sum of All Elements Array.\n");
		printf ("            5. Average of All Elements Array.\n\n");
		printf ("|=Input=| : ");														scanf ("%d", &c[2]);
		
			switch (c[2]) {
		
/*case 1*/		case 1 : {
					do {
					printf ("C 2019 Gus Yudha All Rights Reserved.\n");
					printf ("Welcome to Nestmenu Sum of Elements Array\n");
					printf ("Menu:\n");
					printf ("1. Elements of Ganjil\n");
					printf ("2. Elements of Genap\n");
					printf ("Input: ");													scanf ("%d", &c[3]);
					
						switch (c[3]) {
							
							case 1 : {
								do{
								printf ("Input how much space of array (20Max): "); scanf ("%d", &b[2]);
								} while ( b[2] < 1 || b[2] > 20 );
								for ( i = 1; i <= b[2]; i++){
									printf ("Input the value for array[%d] = ", i); scanf ("%d", &a[i]);
									if ( a[i] % 2 != 0){
										b[1] = b[1] + a[i];
									}
								}
								printf ("Sum of Ganjils = %d", b[1]);
								break;
							}
							case 2 : {
								do{
								printf ("Input how much space of array (20Max): "); scanf ("%d", &b[2]);
								} while ( b[2] < 1 || b[2] > 20 );
								for ( i = 1; i <= b[2]; i++){
									printf ("Input the value for array[%d] = ", i); scanf ("%d", &a[i]);
									if ( a[i] % 2 == 0){
										b[1] = b[1] + a[i];
									}
								}
								printf ("Sum of Genaps = %d", b[1]);
								break;
							}
							default : {
								printf ("Warning! Wrong Input, please try again.\n");
								break;
							}
						}
				} while (c[3] < 1 || c[3] > 2);
					break;
				}		
				case 2 : {
					do {
					printf ("C 2019 Gus Yudha All Rights Reserved.\n");
					printf ("Welcome to Nestmenu Count of Elements Array\n");
					printf ("Menu:\n");
					printf ("1. Elements of Ganjil\n");
					printf ("2. Elements of Genap\n");
					printf ("Input: ");													scanf ("%d", &c[4]);
					
						switch (c[4]) {
							
							case 1 : {
								do{
								printf ("Input how much space of array (20Max): "); scanf ("%d", &b[2]);
								} while ( b[2] < 1 || b[2] > 20 );
								b[1] = 0;
								for ( i = 1; i <= b[2]; i++){
									printf ("Input the value for array[%d] = ", i); scanf ("%d", &a[i]);
									if ( a[i] % 2 != 0){
										b[1] = b[1] + 1;
									}
								}
								printf ("%d Elements of Ganjil in array", b[1]);
								break;
							}
							case 2 : {
								do{
								printf ("Input how much space of array (20Max): "); scanf ("%d", &b[2]);
								} while ( b[2] < 1 || b[2] > 20 );
								b[1] = 0;
								for ( i = 1; i <= b[2]; i++){
									printf ("Input the value for array[%d] = ", i); scanf ("%d", &a[i]);
									if ( a[i] % 2 == 0){
										b[1] = b[1] + 1;
									}
								}
								printf ("%d Elements of Genap in array", b[1]);
								break;
							}
							default : {
								printf ("Warning! Wrong Input, please try again.\n");
								break;
							}
						}
				} while (c[4] < 1 || c[4] > 2);
					break;
				}		
				case 3 : {
					do {
					printf ("C 2019 Gus Yudha All Rights Reserved.\n");
					printf ("Welcome to Nestmenu Average of Elements Array\n");
					printf ("Menu:\n");
					printf ("1. Elements of Ganjil\n");
					printf ("2. Elements of Genap\n");
					printf ("Input: ");													scanf ("%d", &c[5]);
					
						switch (c[5]) {
							
							case 1 : {
								do{
								printf ("Input how much space of array (20Max): "); scanf ("%d", &b[2]);
								} while ( b[2] < 1 || b[2] > 20 );
								for ( i = 1; i <= b[2]; i++){
									printf ("Input the value for array[%d] = ", i); scanf ("%d", &a[i]);
									if ( a[i] % 2 != 0){
										b[1] = b[1] + a[i];
									}
								}
								f = b[1] / 2;
								printf ("Average of Ganjils = %0.1f", f);
								break;
							}
							case 2 : {
								do{
								printf ("Input how much space of array (20Max): "); scanf ("%d", &b[2]);
								} while ( b[2] < 1 || b[2] > 20 );
								for ( i = 1; i <= b[2]; i++){
									printf ("Input the value for array[%d] = ", i); scanf ("%d", &a[i]);
									if ( a[i] % 2 == 0){
										b[1] = b[1] + a[i];
									}
								}
								f = b[1] / 2;
								printf ("Average of Genaps = %0.1f", f);
								break;
							}
							default : {
								printf ("Warning! Wrong Input, please try again.\n");
								break;
							}
						}
				} while (c[5] < 1 || c[5] > 2);
					break;
				}
				case 4 : {
					do{
					printf ("Input how much space of array (20Max): "); scanf ("%d", &b[2]);
					} while ( b[2] < 1 || b[2] > 20 );
					for ( i = 1; i <= b[2]; i++){
						printf ("Input the value for array[%d] = ", i); scanf ("%d", &a[i]);
						b[1] = b[1] + a[i];
					}
					printf ("Sum of All Elements = %d", b[1]);
					break;
				}
				case 5 : {
					do{
					printf ("Input how much space of array (20Max): "); scanf ("%d", &b[2]);
					} while ( b[2] < 1 || b[2] > 20 );
					for ( i = 1; i <= b[2]; i++){
						printf ("Input the value for array[%d] = ", i); scanf ("%d", &a[i]);
						b[1] = b[1] + a[i];
					}
					f = b[1] / 2;
					printf ("Average of All Elements = %0.1f", f);
					break;
				}
				default : {
					printf ("Warning! Wrong Input, please try again.\n");
					break;
				}
			}			
	} while (c[2] < 1 || c[2] > 5);					
					break;
/*case 1*/		}
/*case 2*/		case 2 : {
	do {
		printf ("==|       C 2019 Gus Yudha All Rights Reserved.       |==\n");
		printf ("==|       Welcome to Submenu Program of Boolean.          |==\n\n");
		printf ("             |==| List of the Menu |==|\n\n");
		printf ("         1. Check First Element in Array.\n");
		printf ("         2. Check More Than One Element in Array.\n");
		printf ("         3. Indentify Array of Elements.\n");
		printf ("         4. Identify Array of Same Values Elements.\n\n");
		printf ("|=Input=| : ");														scanf ("%d", &c[6]);
			
			switch (c[6]) {
				
				case 1 : {
					do {
						printf ("C 2019 Gus Yudha All Rights Reserved.\n");
						printf ("Welcome to Nestmenu Check First Element in Array.\n");
						printf ("Menu:\n");
						printf ("1. Elements of Ganjil\n");
						printf ("2. Elements of Genap\n");
						printf ("Input: ");		scanf ("%d", &c[7]);
						
						switch (c[7]) {
							case 1 : {
								do {
									printf ("Input how much space of array (20Max): "); scanf ("%d", &b[2]);
								} while ( b[2] < 1 || b[2] > 20 );
									for (i = 1; i <= b[2]; i++){
										printf ("Input the value for array[%d] = ", i); scanf ("%d", &a[i]);
									}
		
									i = 1;
									DA = false;
		
									while ( (DA == false)  && ( i <= b[2]) ) {
										if (a[i] % 2 != 0){
											DA = true;
										}
										else {
											i = i + 1;
										}
									}
									if ( DA == true ){
										printf ("There is an Element of Ganjil in Array[%d], that is (%d).", i, a[i]);
									}
									else {
										printf ("There is no Element of Ganjil in Array.");
									}
								break;
							}
							case 2 : {
								do {
									printf ("Input how much space of array (20Max): "); scanf ("%d", &b[2]);
								} while ( b[2] < 1 || b[2] > 20 );
									for (i = 1; i <= b[2]; i++){
										printf ("Input the value for array[%d] = ", i); scanf ("%d", &a[i]);
									}
		
									i = 1;
									DA = false;
		
									while ( (DA == false)  && ( i <= b[2]) ) {
										if (a[i] % 2 == 0){
											DA = true;
										}
										else {
											i = i + 1;
										}
									}
									if ( DA == true ){
										printf ("There is an Element of Genap in Array[%d], that is (%d).", i, a[i]);
									}
									else {
										printf ("There is no Element of Genap in Array.");
									}
								break;
							}
							default : {
								printf ("Warning! Wrong Input, please try again.\n");
								break;
							}
						}
					} while ( c[7] < 1 || c[7] > 2);
					break;
				}
				case 2 : {
					do {
						printf ("C 2019 Gus Yudha All Rights Reserved.\n");
						printf ("Welcome to Nestmenu Check More Than One Element in Array.\n");
						printf ("Menu:\n");
						printf ("1. Elements of Ganjil\n");
						printf ("2. Elements of Genap\n");
						printf ("Input: ");		scanf ("%d", &c[8]);
						
						switch (c[8]) {
							case 1 : {
								do {
									printf ("Input how much space of array (20Max): "); scanf ("%d", &b[2]);
								} while ( b[2] < 1 || b[2] > 20 );
								do {
									printf ("How much Element of Genap that You wanna Find: "); scanf ("%d", &b[3]);
								} while ( b[3] > b[2] );
								for (i=1; i <= b[2]; i++){
									printf ("Input the value for array[%d] = ", i); scanf ("%d", &a[i]);
								}
			
								b[5] = 0;
								b[6] = 0;
								for ( i = 1; i <= b[2]; i++) {
									if ( a[i] % 2 != 0 ) {
										b[5] = b[5] + 1;
										d[b[5]] = a[i];
										b[6] = b[6] + 1;
										e[b[6]] = i;	
									}
								}
			
								b[4] = 0;
								DA = false;
								i = 1;
		
								while ( (DA == false)  && ( i <= b[2] ) ) {
									if (a[i] % 2 != 0){
										b[4] = b[4] + 1;
										if ( b[4] == b[3] ) {
											DA = true;
										}
										else {
											i = i + 1;
										}
									}
									else {
										i = i + 1;
									}
								}
								if ( DA == true ){
									for ( i = 1; i <= b[3]; i++) {
										printf ("There is an Element of Ganjil in Array[%d], that is (%d).\n", e[i], d[i]);
									}
								}
								else {
									if ( b[4] < b[3] && b[4] > 0 ) {
										for ( i = 1; i <= b[4]; i++ ) {
											printf ("There is an Element of Ganjil in Array[%d], that is (%d).\n", e[i], d[i]);
										}
									}
									else{
										printf ("There is no Element of Ganjil in Array.");
									}
								}
								break;
							}
							case 2 : {
								do {
									printf ("Input how much space of array (20Max): "); scanf ("%d", &b[2]);
								} while ( b[2] < 1 || b[2] > 20 );
								do {
									printf ("How much Element of Genap that You wanna Find: "); scanf ("%d", &b[3]);
								} while ( b[3] > b[2] );
								for (i=1; i <= b[2]; i++){
									printf ("Input the value for array[%d] = ", i); scanf ("%d", &a[i]);
								}
			
								b[5] = 0;
								b[6] = 0;
								for ( i = 1; i <= b[2]; i++) {
									if ( a[i] % 2 == 0 ) {
										b[5] = b[5] + 1;
										d[b[5]] = a[i];
										b[6] = b[6] + 1;
										e[b[6]] = i;	
									}
								}
			
								b[4] = 0;
								DA = false;
								i = 1;
		
								while ( (DA == false)  && ( i <= b[2] ) ) {
									if (a[i] % 2 == 0){
										b[4] = b[4] + 1;
										if ( b[4] == b[3] ) {
											DA = true;
										}
										else {
											i = i + 1;
										}
									}
									else {
										i = i + 1;
									}
								}
								if ( DA == true ){
									for ( i = 1; i <= b[3]; i++) {
										printf ("There is an Element of Genap in Array[%d], that is (%d).\n", e[i], d[i]);
									}
								}
								else {
									if ( b[4] < b[3] && b[4] > 0 ) {
										for ( i = 1; i <= b[4]; i++ ) {
											printf ("There is an Element of Genap in Array[%d], that is (%d).\n", e[i], d[i]);
										}
									}
									else{
										printf ("There is no Element of Genap in Array.");
									}
								}
								break;
							}
							default : {
								printf ("Warning! Wrong Input, please try again.\n");
								break;
							}
						}
					} while ( c[8] < 1 || c[8] > 2);
					break;
				}
				case 3 : {
					do {
						printf ("C 2019 Gus Yudha All Rights Reserved.\n");
						printf ("Welcome to Nestmenu Identify Array of Elements.\n");
						printf ("Menu:\n");
						printf ("1. Elements of Ganjil\n");
						printf ("2. Elements of Genap\n");
						printf ("Input: ");		scanf ("%d", &c[9]);
						
						switch (c[9]) {
							case 1 : {
								do {
									printf ("Input how much space of array (20Maks): "); scanf ("%d", &b[2]);
								} while ( b[2] < 1 || b[2] > 20 );
								for (i=1; i <= b[2]; i++){
									printf ("Input the value for array[%d] = ", i); scanf ("%d", &a[i]);
								}
		
								i = 1;
								DA = false;
		
								while ( (DA == false)  && ( i <= b[2]) ) {
									if (a[i] % 2 == 0){
										DA = true;
										}
									else {
										i = i + 1;
									}
								}
								if ( DA == true ){
									printf ("An Element of Genap in Array[%d], that is (%d) has been Found!.\n", i, a[i]);
									printf ("This is not Array of Ganjil's Elements.");
								}
								else {
									printf ("This Array of Ganjil's Elements.");				
								}
								break;
							}
							case 2 : {
								do {
									printf ("Input how much space of array (20Maks): "); scanf ("%d", &b[2]);
								} while ( b[2] < 1 || b[2] > 20 );
								for (i=1; i <= b[2]; i++){
									printf ("Input the value for array[%d] = ", i); scanf ("%d", &a[i]);
								}
		
								i = 1;
								DA = false;
		
								while ( (DA == false)  && ( i <= b[2]) ) {
									if (a[i] % 2 == 0){
										DA = true;
										}
									else {
										i = i + 1;
									}
								}
								if ( DA == true ){
									printf ("An Element of Ganjil in Array[%d], that is (%d) has been Found!.\n", i, a[i]);
									printf ("This is not Array of Genap's Elements.");
								}
								else {
									printf ("This Array of Genap's Elements.");				
								}
								break;
							}
							default : {
								printf ("Warning! Wrong Input, please try again.\n");
								break;
							}
						}
					} while ( c[9] < 1 || c[9] > 2);
					break;
				}
				case 4 : {
					do {
						printf ("Input how much space of array (20Maks): "); scanf ("%d", &b[2]);
					} while ( b[2] < 1 || b[2] > 20 );
					for (i=1; i <= b[2]; i++){
						printf ("Input the value for array[%d] = ", i); scanf ("%d", &a[i]);
					}
			
					b[7] = 2;
					i = 1;
					DA = false;
		
					while ( (DA == false)  && ( b[7] <= b[2]) ) {
						if (a[i] == a[b[7]]){
							i = i + 1;
							b[7] = b[7] + 1;
						}
						else {
							DA = true;
						}
					}
					if ( DA == true ){
						printf ("This is not Array of Same Values Elements.");
					}
					else {
						printf ("This Array of Same Values Elements.");				
					}
					break;
				}
				default : {
					printf ("Warning! Wrong Input, please try again.\n");
					break;
				}
			}
	} while ( c[6] < 1 || c [6] > 4);
					break;
/*case 2*/		}
/*case exit*/	case 3 : {
					
					break;
/*case exit*/	}
				default : {
					printf ("Warning! Wrong Input, please try again.\n");
					break;
				}
			}
	}	while ( c[1] < 1 || c[1] > 3 );
}

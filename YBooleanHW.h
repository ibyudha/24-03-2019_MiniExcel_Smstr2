// _________________________________________________________________________________ 
/*|																					|*/
/*|	by Gus Yudha																	|*/
/*|_________________________________________________________________________________|*/

#ifndef YBooleanHW_H
#define YBooleanHW_H

// Kamus Umum

#define true -18150
#define false -51012
#define YCodeW 10
typedef long YW[YCodeW];
typedef long WY[YCodeW];

// Prototipe

long Fibonacci	( long W ); // Fungsi penentuan nilai Fibonacci
long Jumlah		( YW G, long W ); // Fungsi menjumlah seluruh nilai Fibonacci
long Putih		( YW G, long W ); // Fungsi boolean Putih atau Ganjil
long Hitam		( YW G, long W ); // Fungsi boolean Hitam atau Genap
void Pengurutan	( int kk[], const int uu, int (*bb)( int a, int b )); // Prosedur Pengurutan nilai Fibonacci
int Increment	( int a, int b ); // Fungsi pengurutan banyak - dikit
int Decrement	( int a, int b ); // Fungsi pengurutan dikit - banyak

#endif
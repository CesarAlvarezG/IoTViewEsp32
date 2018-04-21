//////////////////////////////////////////////////////SEÑALESPRUEBA//////////////////////////////////////////777


/*
 * 
 * Libreria con las señales de prueba para la transmición de datos
 * 
 */


#ifndef _SenalesPrueba_h
#define _SenalesPrueba_h


 
#define N_ECG 200
#define N_ECG_ALETEO 200
#define N_ECG_SINUSAL 255
#define N_SENO 64


unsigned char senalEcgN(int T);

unsigned char senalEcgA(int T);

unsigned char senalEcgS(int T);

unsigned char senalSin(int T);

#endif

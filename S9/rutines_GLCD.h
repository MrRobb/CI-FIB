
/* La pantalla té dos xips de memòria. Un controla la meitat esquerra i
l'altre la meitat dreta. Cada meitat es divideix en 8 files i 64 columnes.
Cada divisio d'aquestes és un byte i el bit de menor pes és el que està més amunt */

typedef unsigned char byte;


/* Envia una ordre al xip determinat per CS. L'ordre és un codi dels definits abans
OR el valor que es vol enviar */
void sendGLCDCommand(byte val, byte CS);

/* Estableix la línia que es mostra a la part de dalt de la pantalla (de 0 a 63)
Serveix per a fer scroll sense moure els continguts de tota la memòria */
void setStartLine(byte z);

/* Estableix la pàgina actual (de 0 a 7) */
void setXAddress(byte x);

/* Estableix la columna actual (de 0 a 127) */
void setYAddress(byte y);

/* Inicialitzacio GLCD */
void GLCDinit(void);

/* Escriu un byte a la pantalla a la fila x (de 0 a 7), columna y (de 0 a 127) */
void writeByte(byte x, byte y, byte data);

/* Escriu el caràcter c a la fila x (de 0 a 7), columna y (de 0 a 20)
Cada columna de text té una amplada de 6 píxels.
Compte els caracters estan definits amb un font 7x5 (7 alt, 5 amplada*/
//NO IMPLEMENTADA
void putch(byte x, byte y, char c);


/* Esborra la pantalla 
entre les files ri, re i les columnes ci, ce*/
void clearGLCD(byte ri, byte re, byte ci, byte ce);

/* llegeix un byte de la pantalla a la fila x (de 0 a 7), columna y (de 0 a 127) */
byte readByte(byte x, byte y);


/*  **************************************** */
// NO IMPLEMENTADES
/*  **************************************** */ 

// x [0:63] y [0:127]
 void SetDot(byte x, byte y);

// x [0:63] y [0:127]
void ClearDot(byte x, byte y);

// page [0:7] y [0:20] value [-32768 32767]
void writeNum (byte page, byte y, int value);

void writeTxt(byte page, byte y, char * s);



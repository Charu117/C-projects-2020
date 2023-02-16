/*
 * @param sel - serve per determinare quale numero che e' stato scelto
 * Scopo: Prende il numero del sel e fa partire la funzione corrispondente alla scelta che e' stata fatta
 */
void menu(int sel);

/*
 * @param alpha - un array di tipo char
 * @param dimAlpha - ha il valore della dimesione dell'array alpha
 * scopo: Carica un array che contiene tutti i caratteri dell'alfabeto
 */
void fillArr(char alpha[], int dimAlpha);

/*
 * @param str
 * @param size
 * Scopo: Se il primo carattere della stringa è minuscolo, la funzione li trasforma in maiuscole e viceversa.
 */
void convertStr(char str[], int size);

/*
 * @param str - Un array di char
 * Scopo: Calcola e restituisce la lunghezza di una stringa.
 */
int strlength(char str[]);

/*
 * @param structure - un array di tipo char: serve per determinare se la funzione deve contare i vocali o solo la quantità di ciasun carattere della stringa
 * @param str - un array di tipo char
 * @param len - la lunghezza di structure
 * Scopo: Conta quante volte i caratteri si ripetono.
 */
void countChar(char structure[], char str[], int len);

/*
 * @param str1 - un array di tipo char
 * @param str2 - un array di tipo char
 * Scopo: Paragona le due lunghezze delle due stringhe e lo stampa direttamente nella funzione
 */
void compareLen(char str1[], char str2[]);

/*
 * @param str - un array di tipo char
 * Scopo: Inverte l'ordine di una stringa e lo stampa direttamente nella funzione
 */
void strInvert(char str[]);

/*
 * @param num - un array di tipo char
 * Scopo: Converte una stringa che contiene il numero decimale al binario.
 * Le chiamate: strInvert(str[]) - inverte la stringa che contiene il numero binario per avere un risultato corretto.
 */
void decToBin(char num[]);
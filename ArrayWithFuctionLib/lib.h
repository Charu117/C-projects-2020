/*
 * @param arr - un array di tipo intero da caricare
 * @param size - dimensione dell'array
 * Scopo: Carica l'array con rand() utilizzando dei valori tra 0 e 9
 */
void fillArray(char arr[], int size);

/*
 * @param arr - un array di tipo intero
 * @param size - dimensione dell'array
 * Scopo: Calcola e restituisce la media di un array
 */
float average(char arr[], int size);

/*
 * @param aver - tipo float (media)
 * @param arr1 - un array di tipo intero gia' caricato
 * @param arr2 - un array di tipo intero da caricare
 * @param size - dimensione dell'array
 * Scopo: Carica il secondo Array utilizzando la formula -> arr2[i] = pow((avg - arr1[i]), 2)
 */
void fillArray2(float avg, char arr1[], char arr2[], int size);

/*
 * @param arr - un array di tipo intero che passa come un costante per non cambiare i suoi valori (solo per lettura)
 * @param size - dimensione dell'array
 * Scopo: Trova il valore massimo dell'array e lo restituisce
 */
int findMax(const char arr[], int size);

/*
 * @param arr - un array di tipo intero che passa come un costante per non cambiare i suoi valori(solo per lettura)
 * @param size - dimensione dell'array
 * Scopo: Trova il valore minimo dell'array e lo restituisce
 */
int findMin(const char arr[], int size);

/*
 * @param arr - un array di tipo intero che passa come un costante per non cambiare i suoi valori(solo per lettura)
 * @param size - dimensione dell'array
 * @param comment - Una stringa che contiene il messaggio da stampare
 * Scopo: Stampa un array con i commenti
 */
void printArrayInt(const char arr[], int size, char comment[]);



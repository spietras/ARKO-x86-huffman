//sizes in bytes

#define SYMBOLS 256
#define SIZE_OF_FILE_LENGTH 4
#define SIZE_OF_SYMBOL 1
#define SIZE_OF_SYMBOL_FREQUENCY 4

#define HEADERSIZE (SIZE_OF_FILE_LENGTH + (SIZE_OF_SYMBOL + SIZE_OF_SYMBOL_FREQUENCY)*SYMBOLS)
#include "../../General/bool.h"
typedef int datatype;
#define FORMATSTR "%d"
#define ELEMSIZE 20
#define BSTTYPE "Realloc"

/* Probably (2^n) -1 */
#define INITSIZE 31
#define SCALEFACTOR 2

struct dataframe {
   datatype d;
   bool isvalid;
};
typedef struct dataframe dataframe;

struct bst {
   dataframe* a;
   int capacity;
   /* Data element size, in bytes */
};
typedef struct bst bst;

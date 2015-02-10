#include "studente.h"

struct s_stackElement {
    studente s;
    struct s_stackElement * next;
};

typedef struct s_stackElement stackElement;
typedef stackElement * studenteStack;

/*
 * Aggiunge un nuovo elemento alla pila.
 * Restituisce:
 *  0   in caso di successo;
 *  -1  in caso di errore;
 */
int push(studenteStack *stack, studente newStudente);


/*
 * Estrae un elemento dalla pila, rimuovendolo.
 * Restituisce l'elemento estratto.
 * Se la pila è vuota, l'elemento restituito ha le stringhe nome e cognome di lunghezza 0.
 */
studente pop(studenteStack *stack);
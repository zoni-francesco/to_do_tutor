#ifndef TASK_H
#define TASK_H

/* ==================== Import ==================== */
#include <time.h>

/* ==================== Strutture Dati ==================== */
typedef enum{
    MASSIMA, MEDIA, MINIMA
}Priorità;

typedef enum{
    SCADUTA, IMMINENTE, PROSSIMA, LONTANA, COMPLETA
}Status;

typedef enum{
    ALFABETICO, INIZIA_CON, FINISCE_CON, STATUS, PRIORITA
}Criterio;

// La struttura è cosi composta per essere allineata su 192 bytes, 'tm' ne
// occupa 56, 'priorità' e 'status' 8 ciascuno, 'titolo' ne occupa 32 ed i
// rimamenti 88 bytes sono della descrizione. La scelta è stata fatta perchè
// titolo e descrizione di un compito non devono essere lunghi, non c'è grande
// differenza tra questa scelta e un struct da 256 bytes perchè entrambi i
// numeri sono un multiplo di 2 (quindi di 4 e 8) e dunque non richiedono
// padding.
typedef struct Task{
    struct tm data;
    Priorità priorità;
    Status status;
    char titolo[32];
    char descrizione[88];
}Task;

/* ==================== Funzioni ==================== */

Task *nuova_task(struct tm scadenza, Priorità priorità, Status status, char *titolo, char *descrizione);
void visualizza_task(Task *task);
void ricerca_task(Task *task, Criterio criterio, char *filtro);
void completa_task(Task *task);
void cancella_task(Task *task);
#endif

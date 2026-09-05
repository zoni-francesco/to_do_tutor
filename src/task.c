#include "task.h" 

/* ==================== Dichiarazioni ====================*/
Task *nuova_task(struct tm scadenza, Priorità priorità, Status status, char *titolo, char *descrizione);
void visualizza_task(Task *task);
void ricerca_task(Task *task, Criterio criterio, char *filtro);
void completa_task(Task *task);
void cancella_task(Task *task);



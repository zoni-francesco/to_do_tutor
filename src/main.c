#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task.h"

#define NUOVA_TASK      0
#define VISUALIZZA_TASK 1
#define RICERCA_TASK    2
#define COMPLETA_TASK   3
#define CANCELLA_TASK   4
#define ESCI            5

// Scrivere la logica iniziale di fetch dalla memoria e caricamento nel buffer
// dei cambi.

int key_from_string(char *s)
{
    if(strcmp(s, "nuova")) { return 0; }
    if(strcmp(s, "visualizza")) { return 1; }
    if(strcmp(s, "ricerca")) { return 2; }
    if(strcmp(s, "completa")) { return 3; }
    if(strcmp(s, "cancella")) { return 4; }
    if(strcmp(s, "esci")) { return 5; }

    return -1;
}

void run(char *comando)
{
    switch(key_from_string(comando))
    {
        case NUOVA_TASK:
            //Prendere l'input per creare una nuova task  
            break;
        case VISUALIZZA_TASK:
            //Prendere l'input per visualizzare una specifica task
            break;
        case RICERCA_TASK:
            //Prendere l'input per la ricerca filtrata di varie task
            break;
        case COMPLETA_TASK:
            //Prendere l'input per segnare una task come completata
            break;
        case CANCELLA_TASK:
            //Prendere l'input per cancellare una task
            break;
        case ESCI:
            exit(0);
        default:
            printf("%s: comando non esistente\n", comando);
            break;
    }
}

int main(void)
{
    printf("########## To Do Tutor ##########\n");
    //stampa_task()
    
    while (1)
    {
        char comando[64];
        fgets(comando, sizeof(comando), stdin);
        run(comando);
    }

    return 0;
}

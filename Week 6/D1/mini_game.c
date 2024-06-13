#include <stdio.h>

void playGame()
{
    char playerName[100];
    printf("Inserisci il tuo nome: ");
    scanf(" %99s", playerName); // Legge il nome del giocatore, con spazio davanti per ignorare /n se ce ne sono, 99 chars max

    printf("Benvenuto/a %s! Iniziamo il gioco.\n\n", playerName);

    int score = 0;
    int userChoice;
    // Array di domande
    char *questions[] = {
        "Qual è la capitale della Francia?\n1. Roma\n2. Parigi\n3. Berlino\n",
        "Quale squadra è giallo / viola in NBA?\n1. Bulls\n2. Timberwolves\n3. Lakers\n",
        "Qual è il pianeta più vicino al Sole?\n1. Venere\n2. Terra\n3. Mercurio\n"};
    /**
     *  Risposte corrette per ogni domanda
     *  D1 -> answers[0]
     *  D2 -> answers[1]
     *  D3 -> answers[2]
     */
    int answers[] = {2, 3, 3};

    for (int i = 0; i < 3; i++)
    {
        printf("%s", questions[i]);
        printf("Inserisci la tua risposta (1-3): ");
        scanf("%d", &userChoice);

        if (userChoice == answers[i])
        {
            printf("Risposta corretta!\n\n");
            score += 10; // Aggiunge punti al punteggio
        }
        else
        {
            printf("Risposta sbagliata.\n\n");
        }
    }

    printf("Fine del gioco, %s! Il tuo punteggio è: %d\n", playerName, score);
}

int main()
{
    char choice;

    do
    {
        printf("Benvenuto nel gioco di domanda e risposta!\n");
        printf("A. Inizia una nuova partita\n");
        printf("B. Esci dal gioco\n");

        while (1)
        { // Loop infinito che continuerà finché l'utente non inserisce una scelta valida
            printf("Scegli un'opzione: ");
            scanf(" %c", &choice);

            // Controllo se la scelta è valida
            if (choice == 'A' || choice == 'a' || choice == 'B' || choice == 'b')
            {
                break; // Esce dal ciclo while se la scelta è valida
            }
            else
            {
                printf("Scelta non valida, riprova.\n");
                while (getchar() != '\n'); // Pulizia del buffer per prevenire loop infiniti
            }
        }

        switch (choice)
        {
        case 'A':
        case 'a':
            playGame();
            break;
        case 'B':
        case 'b':
            printf("Grazie per aver giocato!\n");
            break;
        }
    } while (choice != 'B' && choice != 'b'); // Condizione di uscita

    return 0;
}

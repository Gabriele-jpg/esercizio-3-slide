#include <stdio.h>

int main() {
    int oraInizio, minutoInizio,oraFine, minutoFine,minutiTotali, oreTrascorse, minutiTrascorsi;
    printf("Inserisci l'orario di inizio (hh mm): ");
    scanf("%d %d", &oraInizio, &minutoInizio);
    printf("Inserisci l'orario di fine (hh mm): ");
    scanf("%d %d", &oraFine, &minutoFine);
    minutiTotali = (oraFine * 60 + minutoFine) - (oraInizio * 60 + minutoInizio);
    minutiTotali = (minutiTotali + 24 * 60) % (24 * 60); //se necessario per non trasformare il risultato in negativo
    oreTrascorse = minutiTotali / 60;
    minutiTrascorsi = minutiTotali % 60;
    printf("Tempo trascorso: %d ore e %d minuti\n", oreTrascorse, minutiTrascorsi);

    return 0;
}

#include <stdio.h>		/* Primzahltest: Variante mit Streichen ALLER Vielfachen			 */
/* eingabe ~ zu testende Zahl ACHTUNG: feld muss eingabe+1 groß sein */

/* ================== HINWEIS zur Aufgabenstellung ==========================================*/
/* statt: durch Aufzählen der Zahlen von 2 bis n in einem array und Streichen der Vielfachen */
/* sollte es heißen: durch Aufzählen der Zahlen von 0 bis n in einem array und               */
/*                   Streichen der Vielfachen ab der Zahl 2 (bei 1 würden alle gestrichen)   */
/* ================== HINWEIS zur Aufgabenstellung ==========================================*/
int feld[1001];

void printresultat(int i);

int prim(int i);

int main(void){
    int eingabe = 1000;	// vorher fix festgelegte Größe der Zahl (später via scan)
    int i = 0;			// Laufvariable explizit initialisiert mit 0 da noch keine lokale envs
    int teiler;
    // Nutze hier, dass Index == gespeicherter Zahl, also Start bei 0
    // war ja auch in der prim-Fkt. in der Aufgabe mit N_0 angegeben
    // Feld für die Zahlen bis 'eingabe' also von 0 bis 113 = 114 Plätze

    // Sonderfälle als Initialisierung für 0 und 1
    feld[0] = 0;		// 0 und 1 sind keine Primzahlen
    feld[1] = 0;		// 2 ist eine Primzahl, daher kann Schleife dort beginnen

    for	(i = 2; i <= eingabe; i++) {	// erst mal sind alle weiteren Primzahlkandidaten
        feld[i] = 1;
    }
    // Hier beginnt der Streich-Algorithmus für die Vielfachen
    // Weitere Optimierung: schon als 0 gekennzeichnete Zahlen skippen
    // da jede Nichtprimzahl als Vielfache von Primzahlen darstellbar
    teiler = 2;
    while (teiler <= eingabe/2) {		// hier kann man natürlich zu sqrt optimieren
        for (i=2; i*teiler <= eingabe; i++) {
            feld[i*teiler] = 0;		// Vielfache von teiler sind keine Primzahl
        }
        teiler = teiler+1;
    }

    // Ausgabe für die Eingabezahl wie gefordert
/*    if (feld[eingabe] == 1) {
        printf("Die Zahl %d ist eine Primzahl\n",eingabe);
    } else {
        printf("Die Zahl %d ist KEINE Primzahl\n",eingabe);
    }
*/
    // Hilfreich als Test, ob die 0/1-Entscheidungen überall richtig waren
/*    for (i=0; i<= eingabe; i++) {
        if (feld[i] == 1) {
            printf("Die Zahl %d ist eine Primzahl\n",i);
        } else {
            printf("Die Zahl %d ist KEINE Primzahl\n",i);
        }
    }
*/

    for (int i= 2; i<eingabe; i++) {
        printresultat(i);
    }

}

void printresultat(int i) {
    if(prim(i) == 1){
        printf("Die Zahl %d ist eine Primzahl\n", i);
    }else{
        printf("Die Zahl %d ist keine Primzahl\n",i);
    }
}

int prim(int i) {
    if(feld[i] == 1){
        return 1;
    } else {
        return 0;
    }
}

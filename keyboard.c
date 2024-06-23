#include <stdio.h>
#include <windows.h>
#include <conio.h>

void sound (int freq, int time){
    Beep(freq, time);
}

void main (void){
    char note;
    int frequency;
    int time = 1000;

    while(note!'q'){
        printf(
            "--------------------------------------\n"
            "              Welcome to              \n"
            "           MUSICAL KEYBOARD           \n"
            "--------------------------------------\n");
        printf("Play your song using these keys: \n");
        printf("C (A), D (S), E (D), F (F), G (G), A (H), B (J)\n");
        printf("Press 'Q' to quit.\n");
        note = getch();

        switch (note){
            case 'a':
                Beep(523, time);
                break;

            case 'd':
                Beep(587, time);
                break;

            case 'f':
                Beep(659, time);
                break;

            case 'g':
                Beep(698, time);
                break;

            case 'h':
                Beep(784, time);
                break;

            default:
                printf("\033[1;31mError: key not found. Try again!");
                break;

        }
        printf(
            "--------------------------------------\n"
            "               THE END!               \n"
            "--------------------------------------\n");
)
    }
}

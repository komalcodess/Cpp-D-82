#include <stdio.h>
#include <windows.h>

void typeText(const char *text, int speed) {
    for(int i = 0; text[i] != '\0'; i++) {
        printf("%c", text[i]);
        Sleep(speed);   // speed in milliseconds per character
    }
}

int main() {

    printf("Love Story - Typing Animation\n\n");
    Sleep(1500);

    // ------- Replace with your own non-copyright lyrics -------
    typeText("We were both young when I first saw you.\n", 80);
    Sleep(500);

    typeText("Standing there on the balcony in summer air.\n", 80);
    Sleep(500);

    // Add more typeText() lines here...
    // -----------------------------------------------------------

    printf("\n--- End ---\n");
    return 0;
}

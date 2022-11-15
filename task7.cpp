#include <windows.h> 
#include <cstdio>
#include <cmath>
void drawCoordinats();
int main() {
    drawCoordinats();
    return 0;
}
void drawCoordinats() {
    char x = (char)219;
    char y = '|';
    COORD position = {0, 10};
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
    for (int i = 0; i < 20; i++) {
        std::cout << x;
        if (i == 10) {
            COORD position = { 10, 0 };
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleCursorPosition(hConsole, position);
            for (int i = 0; i < 20; i++) {
                if (i == 9) continue;
                std::cout << x << '\n' << "          ";
                
            }
        }
    }
}

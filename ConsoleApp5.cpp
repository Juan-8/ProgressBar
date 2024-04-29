#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace System;
using namespace std;
void Window() {
   /* Console::SetWindowSize(80, 40);*/
    Console::CursorVisible = false;
}
void menu() {
    Console::ForegroundColor = ConsoleColor::DarkCyan;
    cout << "\nTitulo";
    cout << "\n";
    cout << "\nPresiona Enter para continuar...";
}

int main()
{
    Window();
    menu();
    int T = 0;

    while (_getch() == 13) {
        Console::Clear();
        Console::ForegroundColor = ConsoleColor::White;

        if (T == 0) {
            cout << "\n";
            cout << "\n\t\t\t\t\t\t\tCargando...";
        }
        else cout << "\n\t\t\t\t\t\t\tCompleate";

        cout << "\n\t  ";
        for (int C = 0; C < 50; C++) {
            cout << char(219) << char(219);
            _sleep(50);
        }
        _sleep(100);
        Console::Clear();
        Console::ForegroundColor = ConsoleColor::Green;
        cout << "\n";
        cout << "\n\t\t\t\t\t\t\t Compleate";
        cout << "\n\t  ";
        for (int C = 0; C < 50; C++) {
            cout << char(219) << char(219);
        }
        cout << "\n";
        Console::ForegroundColor = ConsoleColor::White;
        _sleep(500);
        cout << "\n\t  Press Enter to Continue...";
        while (_getch() == 13) {
            Console::Clear();
            Console::ForegroundColor = ConsoleColor::DarkCyan;
            cout << "\n";
            cout << "\n\t\t\t\t\t\t\tEl juego Inicia";
            break;
        }
        break;
    }

    cin.get();
    cin.ignore();
    return 0;
}

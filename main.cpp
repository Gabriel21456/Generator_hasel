#include <iostream>
#include <cstdlib>
#include <ctime>

std::string generujhaslo(int dlugosc) {
    const std::string znaki = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    std::string haslo;
    std::srand(std::time(0));

    for (int i = 0; i < dlugosc; ++i) {
        haslo += znaki[std::rand() % znaki.size()];
    }

    return haslo;
}

int main() {
    int dlugosc;

    std::cout << "Podaj dlugosc hasla: ";
    std::cin >> dlugosc;

    if (dlugosc < 6) {
        std::cout << "Dlugosc hasla musi miec co najmniej 6 znakow." << std::endl;
        return 1;
    }

    std::string haslo = generujhaslo(dlugosc);

    std::cout << "Wygenerowane haslo: " << haslo << std::endl;

    return 0;
}
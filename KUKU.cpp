#include <iostream>
int hours;

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Который сейчас час?\n";
    std::cin >> hours;

    if (hours < 1 || hours > 24) {
        std::cout << "не корректное время\n";
    }
    else {
        while (hours != 0) {
            std::cout << "Ку-ку\n";
            --hours;
            if (hours > 12 && hours <= 24) {
                hours -= 12;
            }
        }
    }
}

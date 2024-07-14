//
//  main.cpp
//  Counter
//
//  Created by Александр Нестеров on 08/07/2024.
//

#include <iostream>
#include <string>

class Counter {
private:
    int value;
public:
    Counter() : value(1) {}
    Counter(int initiaValue) : value(initiaValue) {}
    
    void increment() {
        value++;
    }
    void dicriment() {
        value--;
    }
    int getValue() const {
        return value;
    }
};

int main() {
    std::string answer;
    int initiaValue;
    Counter counter;

    std::cout << "Вы хотите указать начальное значение счётчика? ";
    std::cin >> answer;

    if (answer == "Да" || answer == "да" || answer == "ДА") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initiaValue;
        counter = Counter(initiaValue);
    } else if (answer == "нет" || answer == "Нет") {
        std::cout << "Программа завершена!" << std::endl;
        return 0;
    } else {
        std::cout << "Неверный ввод.\n";
        return 0;
    }

    
    char command;
    
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): " ;
        std::cin >> command;
        switch (command) {
            case '+':
                counter.increment();
                break;
            case '-':
                counter.dicriment();
                break;
            case '=':
                std::cout << counter.getValue() << std::endl;
                break;
            case 'x':
                std::cout << "До свидания!\n";
                break;
            default:
                std::cout << "Неверная команда.\n";
                break;
        }
    } while (command != 'x');
    return 0;
}

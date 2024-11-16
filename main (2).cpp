#include <iostream>

int main() {  int shiftLength = 720;
           int orderTime = 5;
           int orderCollectionTime = 5;
           int totalСustomers = 72;
            std::cout << "Длительность смены в минутах: " << shiftLength << "\n";
            std::cout << "Сколько минут клиент делает заказ? " << orderTime << "\n";
            std::cout << "Сколько минут кассир собирает заказ? " << orderCollectionTime << "\n";
            std::cout << "За смену длинной " << shiftLength << " минут кассир успевает обслужить " << totalСustomers << " клиента\n";

 }
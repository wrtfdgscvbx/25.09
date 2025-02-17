//1
#include <iostream>
using namespace std;

int main() {
    double distance, time;
    cout << "Введите расстояние до аэропорта (км): ";
    cin >> distance;
    cout << "Введите время, за которое нужно доехать (часы): ";
    cin >> time;

    double speed = distance / time;
    cout << "Необходимая скорость: " << speed << " км/ч" << endl;

    return 0;
}

//2
#include <iostream>
using namespace std;

int main() {
    int startHours, startMinutes, startSeconds;
    int endHours, endMinutes, endSeconds;

    cout << "Введите время начала поездки (часы минуты секунды): ";
    cin >> startHours >> startMinutes >> startSeconds;
    cout << "Введите время завершения поездки (часы минуты секунды): ";
    cin >> endHours >> endMinutes >> endSeconds;

    int startTotal = startHours * 3600 + startMinutes * 60 + startSeconds;
    int endTotal = endHours * 3600 + endMinutes * 60 + endSeconds;
    int duration = endTotal - startTotal;

    int costPerMinute = 2;
    int totalCost = (duration / 60) * costPerMinute;

    cout << "Стоимость поездки: " << totalCost << " гривен" << endl;

    return 0;
}
//3
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance, consumption;
    double price1, price2, price3;

    cout << "Введите расстояние (км): ";
    cin >> distance;
    cout << "Введите расход бензина на 100 км (литров): ";
    cin >> consumption;
    cout << "Введите стоимость первого вида бензина (гривен за литр): ";
    cin >> price1;
    cout << "Введите стоимость второго вида бензина (гривен за литр): ";
    cin >> price2;
    cout << "Введите стоимость третьего вида бензина (гривен за литр): ";
    cin >> price3;

    double totalConsumption = (consumption / 100) * distance;
    double cost1 = totalConsumption * price1;
    double cost2 = totalConsumption * price2;
    double cost3 = totalConsumption * price3;

    cout << "\nСравнительная таблица стоимости поездки:\n";
    cout << "---------------------------------\n";
    cout << "| Вид бензина | Стоимость (грн) |\n";
    cout << "---------------------------------\n";
    cout << "| Бензин 1    | " << setw(14) << cost1 << " |\n";
    cout << "| Бензин 2    | " << setw(14) << cost2 << " |\n";
    cout << "| Бензин 3    | " << setw(14) << cost3 << " |\n";
    cout << "---------------------------------\n";

    return 0;
}
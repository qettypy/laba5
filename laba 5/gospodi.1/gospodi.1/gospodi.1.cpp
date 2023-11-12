// gospodi.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <limits> 
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    int numVisitors;

   
    cout << "Введите количество посетителей спортзала: ";
    cin >> numVisitors;

    
    while (cin.fail() || numVisitors <= 0) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Пожалуйста, введите корректное количество посетителей: ";
        cin >> numVisitors;
    }

    
    int age;
    int maxAge = 0;
    int minAge = numeric_limits<int>::max(); 

    
    int totalAge = 0;

    for (int i = 1; i <= numVisitors; ++i) {
        
        cout << "Введите возраст посетителя #" << i << ": ";
       cin >> age;

       
        while (cin.fail() || age <= 0) {
            cin.clear(); 
         cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Пожалуйста, введите корректный возраст: ";
            cin >> age;
        }

        
        if (age > maxAge) {
            maxAge = age;
        }
        if (age < minAge) {
            minAge = age;
        }

        
        totalAge += age;
    }

    
    double averageAge = static_cast<double>(totalAge) / numVisitors;

   
    cout << "Самый молодой посетитель: " << minAge << " лет\n";
    cout << "Самый старший посетитель: " << maxAge << " лет\n";
    cout << "Средний возраст посетителей: " << averageAge << " лет\n";

    return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

#include <iostream>
using namespace std;
char field(char a1, char a2, char a3, char b1, char b2, char b3, char c1, char c2, char c3)
{
    cout << c1 << "|" << c2 << "|" << c3 << endl;
    cout << b1 << "|" << b2 << "|" << b3 << endl;
    cout << a1 << "|" << a2 << "|" << a3 << endl;
    return 0;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    char a1 = '-', a2 = '-', a3 = '-', b1 = '-', b2 = '-', b3 = '-', c1 = '-', c2 = '-', c3 = '-';
    int input = 0;
    cout << "Введите число от 1 до 9. Счет ячеек идет с нижнего левого угла, слева направо, затем вверх." << endl << "Ходит игрок 1: ";
    //- пустая клетка; x - игрок 1; o - игрок 2;
    cin >> input;
    switch (input)
    {
    case 1:
        if (a1 != )
        {
            field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
            break;
        }
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        break;
    default:
        cout << "Ошибка!";
        break;
    }
}

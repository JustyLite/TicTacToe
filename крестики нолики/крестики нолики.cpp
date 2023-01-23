/* Крестики-Нолики    *
 *Выполнил узбэк ИС211*/
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
    cout << "Введите число от 1 до 9. Счет ячеек идет с нижнего левого угла, слева направо, затем вверх." << endl;
    //- пустая клетка; x - игрок 1; o - игрок 2;

    while (true)
    {
        pl1:
        cout << "Ходит игрок 1: ";
        int input = 0;
        cin >> input; //Ход игрока 1
        switch (input)
        {
        case 1:
            if (a1 == '-')
            {
                a1 = 'x';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl1;
            break;
        case 2:
            if (a2 == '-')
            {
                a2 = 'x';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl1;
            break;
        case 3:
            if (a3 == '-')
            {
                a3 = 'x';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl1;
            break;
        case 4:
            if (b1 == '-')
            {
                b1 = 'x';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl1;
            break;
        case 5:
            if (b2 == '-')
            {
                b2 = 'x';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl1;
            break;
        case 6:
            if (b3 == '-')
            {
                b3 = 'x';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl1;
            break;
        case 7:
            if (c1 == '-')
            {
                c1 = 'x';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl1;
            break;
        case 8:
            if (c2 == '-')
            {
                c2 = 'x';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl1;
            break;
        case 9:
            if (c3 == '-')
            {
                c3 = 'x';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl1;
            break;
        default:
            cout << "Ошибка! Нет такого поля!" << endl;
            goto pl1;
            break;

        }
        pl2:
        cout << "Ходит игрок 2: ";
        cin >> input; //Ход игрока 2
        switch (input)
        {
        case 1:
            if (a1 == '-')
            {
                a1 = 'o';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl2;
            break;
        case 2:
            if (a2 == '-')
            {
                a2 = 'o';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl2;
            break;
        case 3:
            if (a3 == '-')
            {
                a3 = 'o';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl2;
            break;
        case 4:
            if (b1 == '-')
            {
                b1 = 'o';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl2;
            break;
        case 5:
            if (b2 == '-')
            {
                b2 = 'o';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl2;
            break;
        case 6:
            if (b3 == '-')
            {
                b3 = 'o';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl2;
            break;
        case 7:
            if (c1 == '-')
            {
                c1 = 'o';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl2;
            break;
        case 8:
            if (c2 == '-')
            {
                c2 = 'o';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl2;
            break;
        case 9:
            if (c3 == '-')
            {
                c3 = 'o';
                field(a1, a2, a3, b1, b2, b3, c1, c2, c3);
                break;
            }
            else cout << "Ошибка! Это поле заполнено!" << endl;
            goto pl2;
            break;
        default:
            cout << "Ошибка! Нет такого поля!" << endl;
            goto pl2;
            break;
        }
    }
}

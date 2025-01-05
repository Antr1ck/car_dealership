#include "function.h"

Car::void add(Car cars[], int& size)
{
    if (size >= SIZE)
    {
        cout << "full\n";
        return;
    }

    string name;
    int year;
    double engineVolume, price;

    cout << "Input name, year, engine and price";
    cin >> name >> year >> engine >> price;

    cars[size++] = Car(name, year, engineVolume, price);
}

Car::void del(Car cars[], int& size)
{
    string name;
    cout << "name";
    cin >> name;

    for (int i = 0; i < size; i++)
    {
        if (cars[i].name == name)
        {

            for (int j = i; j < size - 1; j++)
            {
                cars[j] = cars[j + 1];
            }
            --size;
            return;
        }
    }
}

Car::void info(const Car cars[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "\nname: " << cars[i].name << "\nyear: " << cars[i].year << "\nengine: " << cars[i].engine << "price" << cars[i].price;
    }
}

Car::void sort(Car cars[], int size)
{
    int buffer;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (cars[j].price > cars[j + 1].price)
            {
                buffer = cars[j].price;
                cars[j].price = cars[j + 1];
                cars[j + 1] = buffer;
            }
        }
    }
}

Car::void search(const Car cars[], int size)
{
    string name;
    cout << "Input name";
    cin >> name;

    for (int i = 0; i < size; i++)
    {
        if (cars[i].name == name)
        {
            cout << cars[i].name << cars[i].year << cars[i].engine << cars[i].price;
            return;
        }
    }
    cout << "no";
}

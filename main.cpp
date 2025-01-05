#include "function.h"
int main() 
{
    Car cars[SIZE];
    int number = 0;
    int choice;

    do 
    {
        cout << "1  add 2  delete 3 info 4 sort 5 search 0 exit";
        cin >> choice;

        switch (choice) 
        {
        case 1:
        {
            add(cars, number);
            break;
        }
        case 2:
        {
            del(cars, number);
            break;
        }
        case 3:
        {
            info(cars, number);
            break;
        }
        case 4:
        {
            sort(cars, number);
            break;
        }
        case 5:
        {
            search(cars, number);
            break;
        }
        default:
        {
            cout << "OSHIBKAAA";
        }
    } while (choice != 0);

    return 0;
}

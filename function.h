#pragma once
#include <iostream>
#include <string>
#define SIZE = 100;

using namespace std;

class Car
{
public:
    string name;
    int year;
    double engine;
    double price;

    void add(Car cars[], int& size);
    void del(Car cars[], int& size);
    void info(const Car cars[], int size);
    void sort(Car cars[], int size);
    void search(const Car cars[], int size);
};


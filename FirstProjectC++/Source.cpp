#include <iostream>
#include <bitset>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    const int size = 10;
    int arr[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    double average = 0;

    int sum = 0;
    for (int i = 0; i < size; ++i) 
    {
        sum += arr[i];
    }

    if (size > 0) {
        average = static_cast<double>(sum) / size;
    }

    std::cout << "Среднее арифметическое: " << average << std::endl;

    return 0;
}
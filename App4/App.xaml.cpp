#include <iostream>  
#include <cstdlib>  

using namespace std;

int main() {
    // 1. 
    int SIZE1 = 10;
    int array1[SIZE1];

    for (int i = 0; i < SIZE1; i++) {
        array1[i] = rand() % 101; // случайное число от 0 до 100  
    }

    cout << "1. Массив: ";

    for (int i = 0; i < SIZE1; i++) {
        cout << array1[i] << " ";
    }

    double srednee = 0;
    for (int i = 0; i < SIZE1; i++) {
        srednee += array1[i];
    }
    srednee /= SIZE1; // среднее значение  

    int floceee = array1[0];
    for (int i = 0; i < SIZE1; i++) {
        if ((array1[i] - srednee) * (array1[i] - srednee) < (floceee - srednee) * (floceee - srednee)) {
            floceee = array1[i];
        }
    }
    cout << "\nЭлемент, максимально близкий к среднему арифметическому: " << floceee;

    // 2.
    int SIZE2 = 10;
    int array2[SIZE2];

    for (int i = 0; i < SIZE2; i++) {
        array2[i] = rand() % 101;
    }
    cout << "\n2. Исходный массив: ";
    for (int i = 0; i < SIZE2; i++) {
        cout << array2[i] << " ";
    }

    for (int i = 0; i < SIZE2 / 2; i++) {
        int fleeeee = array2[i];
        array2[i] = array2[SIZE2 - i - 1];
        array2[SIZE2 - i - 1] = fleeeee;
    }

    cout << "\nПеревернутый массив: ";
    for (int i = 0; i < SIZE2; i++) {
        cout << array2[i] << " ";
    }

    // 3. 
    int SIZE3 = 200;
    int array3[SIZE3];

    for (int i = 0; i < SIZE3; i++) {
        array3[i] = rand() % 201;
    }
    int one_count = 0, two_count = 0, three_count = 0;

    for (int i = 0; i < SIZE3; i++) {
        if (array3[i] < 10) one_count++;
        else if (array3[i] < 100) two_count++;
        else if (array3[i] <= 200) three_count++;
    }

    double total_count = SIZE3;
    double one_percentage = (one_count / total_count) * 100;
    double two_percentage = (two_count / total_count) * 100;
    double three_percentage = (three_count / total_count) * 100;

    cout << "\n\n3. Одноразрядные: " << one_percentage
        << "%, Двухразрядные: " << two_percentage
        << "%, Трехразрядные: " << three_percentage << "%";

    // 4. 
    int SIZE4 = 20;
    int array4[SIZE4];

    for (int i = 0; i < SIZE4; i++) {
        array4[i] = rand() % 41 - 10; // от -10 до 30  
    }

    cout << "\n4. Массив: ";
    for (int i = 0; i < SIZE4; i++) {
        cout << array4[i] << " ";
    }

    int suma_oneee = 0;
    bool falseee = false;

    for (int i = 0; i < SIZE4; i++) {
        if (falseee) {
            suma_oneee += array4[i];
        }
        if (array4[i] < 0 && !falseee) {
            falseee = true;
        }
    }
    cout << "\nСумма элементов после первого отрицательного: " << suma_oneee;

    // 5.
    int SIZE5 = 20;
    int array5[SIZE5];

    for (int i = 0; i < SIZE5; i++) {
        array5[i] = rand() % 41 - 30; // от -30 до 10  
    }

    cout << "\n5. Массив: ";
    for (int i = 0; i < SIZE5; i++) {
        cout << array5[i] << " ";
    }

    int sum_positive = 0;
    bool false_trueeee = false;

    for (int i = 0; i < SIZE5; i++) {
        if (false_trueeee) {
            break;
        }
        if (array5[i] > 0) {
            false_trueeee = true;
        }
        else {
            sum_positive += array5[i];
        }
    }
    cout << "\nСумма элементов до первого положительного: " << sum_positive;

    // 6.
    const int SIZE6 = 10;
    int array6[SIZE6];

    for (int i = 0; i < SIZE6; i++) {
        array6[i] = rand() % 41 - 20; // от -20 до 20  
    }

    cout << "\n6. Массив: ";
    for (int i = 0; i < SIZE6; i++) {
        cout << array6[i] << " ";
    }

    int positive_count = 0, positive_sum = 0;
    for (int i = 0; i < SIZE6; i++) {
        if (array6[i] > 0) {
            positive_count++;
            positive_sum += array6[i];
        }
    }

    double positive_srednee = (positive_count > 0) ? ((double)positive_sum / positive_count) : 0;

    cout << "\nКоличество положительных элементов: " << positive_count;
    cout << "\nСумма положительных элементов: " << positive_sum;
    cout << "\nСреднее арифметическое положительных элементов: " << positive_srednee;

    return 0;
}
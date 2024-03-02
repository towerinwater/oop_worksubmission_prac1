#include <iostream>
extern double sum_even(double array[], int n);
int main(){
    double array[10] = {56.789, 23.456, 78.901, 12.345, 45.678, 89.012, 34.567, 67.890, 90.123, 23.456};
    std::cout << sum_even(array, 10) << std::endl;
    return 0;

}
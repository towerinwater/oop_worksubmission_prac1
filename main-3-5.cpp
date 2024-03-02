#include <iostream>
extern double sum_even(double array[], int n);
int main(){
    double array[10] = {1,2,3,4,5,6,7,8,9,10};
    std::cout << sum_even(array, 10) << std::endl;
    return 0;

}
//  Write a function that returns the sum of the elements in 
//the even positions in an array. 
// The function must return 0 if the size parameter, n, is less than 1. 
//Note, 0 is considered an even position.
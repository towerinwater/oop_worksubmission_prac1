#include <iostream>
extern double weighted_average(int array[], int n);
int main(){
    int array[] = {1,2,1,4,1,3,8,6,4,4,4,6,3,2};
    int n = sizeof(array)/sizeof(array[0]);
    std::cout << weighted_average(array, n) << std::endl;
}
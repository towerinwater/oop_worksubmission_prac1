#include <iostream>
extern  int sum_two_arrays(int array[], int secondarray[], int n);
int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,0};
    int second_array[10] = {11,12,13,14,15,16,17,18,19,20};
    std::cout << sum_two_arrays(array, second_array, 10) << std::endl;
}

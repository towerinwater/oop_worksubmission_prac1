#include <iostream>
extern double array_mean(int array[], int n);
int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,0};
    
    std::cout << array_mean(array, 10) << std::endl;
    return 0;
}
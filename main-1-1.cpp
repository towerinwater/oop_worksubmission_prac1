#include <iostream>
extern int array_sum(int array[], int n);
int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,0};
    int sum;
    sum = array_sum(array, 10);
    std::cout << sum << std::endl;
    return 0;
}
#include <iostream>
extern int max_element(int array[], int n);
int main(){
    int array[10] = {21,32,55,27,398,244,82,16,4,-7};
    std::cout << max_element(array, 10) << std::endl;
}
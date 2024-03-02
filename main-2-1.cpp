#include <iostream>
extern int min_element(int array[], int n);
int main(){
    int array[10] = {21,32,55,27,398,244,82,16,4,-7};
    std::cout << min_element(array, 10) << std::endl;
}
#include <iostream>
extern  bool is_ascending(int array[], int n);
int main(){
    int array_1[5] = {1,2,3,4,5};
    int array_2[6] = {1,2,1,4,1,3};
    std::cout << is_ascending(array_1, 5) << std::endl;
    std::cout << is_ascending(array_2, 6) << std::endl;
}
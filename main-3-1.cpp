#include <iostream>
extern bool is_fanarray(int array[], int n);
int main(){
    int array[5] = {1,2,3,2,1};
    int array_1[4] = {1,2,2,1};
    int array_2[5] = {1,2,1,2,1};
    std::cout << is_fanarray(array_2, 5) << std::endl;
}
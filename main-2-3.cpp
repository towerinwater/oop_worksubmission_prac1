#include <iostream>
extern void two_five_nine(int array[], int n);
int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    two_five_nine(array, 10);
    return 0;
}
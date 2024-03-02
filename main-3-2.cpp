#include <iostream>
extern int median_array(int array[], int n);
int main(){
	int arr[5] = {3,5,2,1,4};
    std::cout << median_array(arr, 5) << std::endl;

}
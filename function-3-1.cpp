#include <cmath>
bool is_fanarray(int array[], int n){
    //Base case 
    if(n <= 1){
        return false;
    }
    //Indexing the array backward
    int idx = n - 1;
    //Getting the center position of the array
    int center = n/2;
    //Loop to check for palindrome and ascending of elements
    for(int i = 0; i < center; i++){
        //Checking if element equal on each side of center number
        if(array[i] != array[idx--]){
            return false;
        }
        //Checking if the next element is bigger than the previous one
        if(i != idx && array[i] > array[idx]){
            return false;
        }
    }
    return true;
}
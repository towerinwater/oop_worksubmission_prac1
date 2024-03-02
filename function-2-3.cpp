#include <iostream>
void two_five_nine(int array[], int n){
    int count_arr[3];
    for(int i = 0; i < n; i++){
        switch(array[i]){
            case 2:
                count_arr[0]++;
                break;
            case 5:
                count_arr[1]++;
                break;
            case 9:
                count_arr[2]++;
                break;
        }
    }
    std::cout << "2: " << count_arr[0]
                << ";5: " << count_arr[1]
                << ";9: " << count_arr[2] << std::endl;
}
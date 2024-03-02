#include <iostream>
double array_mean(int array[], int n){
    int sum = 0;
    
    if(n<1)
    {
        return 0.0;
    }
    for(int i = 0; i < n; i++){
        sum += array[i];
    }
    double res = static_cast<double>(sum)/n;
    return res;
}

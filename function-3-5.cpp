double sum_even(double array[], int n){
    //Base case 
    if(n <= 1){
        return 0;
    }else if(n == 2 || n == 3){
        return array[1];
    }
    //
    double res;
    for(int i = 0; i <= n; i += 2){
        res += array[i];
    }
    return res;
}
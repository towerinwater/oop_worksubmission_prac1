bool is_descending(int array[], int n){
    //Base case
    if(n <= 1){
        return false;
    }
    for(int i = 0; i < n - 1; i++){
        if(array[i + 1] > array[i]){
            return false;
        }
    }
    return true;
}
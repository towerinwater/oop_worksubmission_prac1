int median_array(int array[], int n){
    //Base case
    if(n <= 1){
        return 0;
    }
    //Temporary storage
    int temp;
    //Sorting the array into order
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
           if(array[j] > array[j + 1]) {    //Swap value if the two consecutive values have the first value larger than second
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
           }
        }
    }
    //Getting the median of the array
    int mid = n/2;
    return array[mid];
}
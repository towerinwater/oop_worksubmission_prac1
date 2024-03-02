int array_sum(int array[], int n){
    int res = 0;
    if(n >= 1){
        for(int i = 0; i < n; i++){
            res += array[i];
        }
        return res;
    }else{
        return 0;
    }
}

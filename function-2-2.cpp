
int max_element(int array[], int n){
    if(n < 1){
        return 0;
    }
    int flag = array[0];
    for(int i = 1; i < n; i++){
        if(array[i] > flag){
            flag = array[i];
        }
    }
    return flag;
}
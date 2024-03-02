int num_count(int array[], int n, int number){
    int i = 0;
    if(n < 1){
        return i;
    }
    do{
       i++; 
    }while(array[i] != number);
    return i += 1;
}
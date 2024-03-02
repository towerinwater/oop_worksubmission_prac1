#include <iostream>
int* sort_array(int array[], int n);
int* remove_duplicates(int array[], int n, int* unique_count);
int* count_duplicates(int array[], int n);
double weighted_average(int array[], int n){
    //Base case
    if(n <= 1){
        return 0.0;
    }
    //
    int* pSorted_Arr = sort_array(array, n);
    //
    int* pCount = count_duplicates(pSorted_Arr, n);
    //
    int unique_num;
    int* pMain_Arr = remove_duplicates(pSorted_Arr, n, &unique_num);
    //
    int idx;
    double res = 0;
    for(int i = 0; i < unique_num; i++){
        idx = pMain_Arr[i];
        res += pMain_Arr[i] * ((double)pCount[idx]/n);
    }
    delete[] pSorted_Arr;
    delete[] pCount;
    delete[] pMain_Arr;
    return res;

}
int* sort_array(int array[], int n){
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
    //
    int* pArr = new int[n];
    for(int i = 0; i < n; i++){
        pArr[i] = array[i];
    }
    return pArr;
}
int* remove_duplicates(int array[], int n, int* unique_count){
    //Base case
    if(n <= 1){
        return nullptr;
    }
    //
	int unique_num = 1;
	for(int i = 1; i < n; i++){
		if(array[i] != array[i + 1]){
			unique_num++;
		}
	}
    //
    *unique_count = unique_num;
	//
	int idx = 0;
	int* pArr = new int[unique_num];
	for(int i = 0; i < n; i++){
		if(array[i] != array[i + 1]){
			pArr[idx++] = array[i];
		}
	}
	//
	return pArr;
}
int* count_duplicates(int array[], int n){
    //
    int max_val = array[n - 1] + 1;
    int* pArr = new int[max_val];
    //
    int idx;
    //
    for(int i = 0; i < n; i++){
        idx = array[i];
        pArr[idx] += 1;
    }
    //
    return pArr;
}
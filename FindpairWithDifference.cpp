bool findPair(int arr[], int size, int n){
   
      sort(arr,arr+size);
    int i=0,j=i+1;
    while(i<size && j<size){
        if(i==j)j++;
        if(arr[j]-arr[i] == n){
            return true;
        }else if(arr[j] - arr[i] < n){
            j++;
        }else {
            i++;
        }
    }
    return false;
}

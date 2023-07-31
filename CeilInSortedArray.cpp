pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
 
    pair<int,int> ans(-1,-1);
    
    sort(arr,arr+n);
    
         for(int i=0; i<n; i++) {
        if(arr[i] <= x)
            ans.first = arr[i];
        if(arr[i] >= x) {
            ans.second = arr[i];
            break;
        }
    }
    
    return ans;
    
}

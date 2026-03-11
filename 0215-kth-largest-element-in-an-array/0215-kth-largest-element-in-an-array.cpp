class Solution {
public:
    void heapify(vector<int>& arr,int n,int i){
        int largest=i;
        int l=(i*2)+1;
        int r=(i*2)+2;
        while(l<n&& arr[l]>arr[largest]){
            largest=l;
        }
         while(r<n && arr[r]>arr[largest]){
            largest=r;
        }
        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }
    
    int findKthLargest(vector<int>& arr, int k) {
        int n=arr.size();
        for(int i=(n/2)-1;i>=0;i--){
            heapify(arr,n,i);
        }
        for(int i=n-1;i>=n-k+1;i--){
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
        }
    return arr[0];
}
};
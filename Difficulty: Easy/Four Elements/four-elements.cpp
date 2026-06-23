bool find4Numbers(int A[], int n, int X) {
   
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            if(A[j-1]>A[j]){
                int temp = A[j];
                A[j] = A[j-1];
                A[j-1] = temp;
            }
        }
    }
    
    for(int i=0;i<n-3;i++){
        int target1 = X - A[i];
        for(int j=i+1;j<n-2;j++){
            int target2 = target1 - A[j];
            int first = j+1, last = n-1;
            while(first<last){
                if(A[first]+A[last]==target2)
                return 1;
                else if(A[first]+A[last]>target2)
                last--;
                else
                first++;
            }
        }
    }
    return 0;
}
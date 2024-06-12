void insertionSort(int arr[], int n){
	for(int i = 1; i<n; i++){
		int key = arr[i], j = i - 1;
		
		while(j>= 0 && arr[j] > key)
		arr[j+1] = arr[j--];
		arr[j+1] = key;
	}
}
----------------------------------------------------------------------------------------------
void bubbleSort(int arr, int n){
	for(int i = 0; i<n; i++){
		for(int j= 0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1])
			}
		}
	}
}
-----------------------------------------------------------------------------------------------
void selectionSort(int arr[],int n){
	for(int i =0; i< n-1; i++){
		int min_index = i;
	for(int j=i+1; j<n; j++)
		min_index = j;
	if(arr[j] < arr[min_index])
	swap(arr[i],arr[min_index])
	}
}
----------------------------------------------------------------------------------------------
void quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; ++j)
            if (arr[j] < pivot)
                swap(arr[++i], arr[j]);
                
        swap(arr[++i], arr[high]);
        quicksort(arr, low, i - 1);
        quicksort(arr, i + 1, high);
    }
}
----------------------------------------------------------------------------------------------------
void heapify(int arr[], int n, int i) {
    int largest = i, l = 2 * i + 1, r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest]) largest = l;
    if (r < n && arr[r] > arr[largest]) largest = r;
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) 
	heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
------------------------------------------------------------------------------------------------------
void merge(vector<int>& arr, int l, int m, int r) {
    vector<int> L(arr.begin() + l, arr.begin() + m + 1), R(arr.begin() + m + 1, arr.begin() + r + 1);
    for (int i = l, j = 0, k = 0; i <= r; ++i)
        
	arr[i] = (j < L.size() && (k >= R.size() || L[j] <= R[k])) ? L[j++] : R[k++];
}

void mergeSort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}





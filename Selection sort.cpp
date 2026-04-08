void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;

    // Move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
        min_idx = i; // Assume the first element is the smallest

        // Find the actual minimum element in unsorted array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
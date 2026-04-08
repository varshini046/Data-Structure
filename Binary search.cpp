int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevents potential overflow

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            low = mid + 1; // Target is in the right half
        else
            high = mid - 1; // Target is in the left half
    }
    return -1; // Not found
}
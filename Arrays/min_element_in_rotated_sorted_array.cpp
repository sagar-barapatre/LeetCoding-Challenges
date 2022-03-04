int findMin(int arr[], int low, int high)
{
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == arr[high])
            high--;
        else if (arr[mid] > arr[high])
            low = mid + 1;
        else
            high = mid;
    }
    return arr[high];
}
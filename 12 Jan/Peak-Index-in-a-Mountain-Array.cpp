class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        if(arr[0] > arr[1]) return 0;
        if(arr.back() > arr[arr.size() - 2]) return arr.size() - 1;
        int low = 0, high = arr.size() - 1;
        while(low < high) {
            int mid = (high + low) / 2;
            if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) return mid;
            else if(arr[mid - 1] < arr[mid] && arr[mid] < arr[mid + 1]) low = mid;
            else high = mid;
        }
        return -1;
    }
};
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        quick_sort(nums,0,nums.size() - 1);		//¿ìÅÄ
        return nums[nums.size() - k];
    }
    
int mpartition(vector<int>& a, int l, int r) {		
    int pivot = a[l];

    while (l<r) {
        while (l<r && pivot<=a[r]) r--;
        if (l<r) a[l++]=a[r];
        while (l<r && pivot>a[l]) l++;
        if (l<r) a[r--]=a[l];
    }
    a[l]=pivot;
    return l;
}

void quick_sort (vector<int>& a, int l, int r) {

    if (l < r) {
        int q = mpartition(a, l, r);
        quick_sort(a, l, q-1);
        quick_sort(a, q+1, r);
    }
}
};
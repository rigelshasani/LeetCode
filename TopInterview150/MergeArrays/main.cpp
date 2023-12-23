//https://leetcode.com/problems/merge-sorted-array/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i= 0; i< n ;i++){
            nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};


int main() {
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    std::vector<int> nums2 = {2, 5, 6};
    int n = 3;

    // Creating an instance of Solution
    Solution sol;
    
    // Merging nums2 into nums1
    sol.merge(nums1, m, nums2, n);

    // Printing the merged array
    for (int num : nums1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
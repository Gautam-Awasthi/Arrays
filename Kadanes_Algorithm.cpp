
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases
follows. The first line of each test case contains a single integer N denoting the size of array. The second line 
contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print the maximum sum of the contiguous sub-array in a separate line for each test case.

User Task:
The task is to complete the function maxSubarraySum() which finds subarray with maximum sum.

Constraints:
1 ≤ T ≤ 110
1 ≤ N ≤ 106
-107 ≤ A[i] <= 107

Example:
Input:
2
5
1 2 3 -2 5
4
-1 -2 -3 -4

Output:
9
-1

Explanation:
Testcase 1: Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.


Sol:

int maxSubarraySum(int a[], int n){
    
    int ans=INT_MIN;
    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp+=a[i];
        ans=max(ans,temp);
        temp=max(temp,0);
    }
    return ans;
}

/*
Any Segment that is turning out to be negative at any stage will not be included in maxarray.
*/


Given an array arr[] of N non-negative integers representing height of blocks at index i as Ai where the width of each 
block is 1. Compute how much water can be trapped in between blocks after raining.
Structure is like below:
|  |
|_|
We can trap 2 units of water in the middle gap.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.
 Each test case contains an integer N denoting the size of the array, followed by N space separated numbers to be stored 
 in array.

Output:
Output the total unit of water trapped in between the blocks.

User Task:
The task is to complete the function trappingWater() which returns the total amount of water that can be trapped.

Constraints:
1 <= T <= 100
3 <= N <= 107
0 <= Ai <= 108

Example:
Input:
2
4
7 4 0 9
3
6 9 9

Output:
10
0

Explanation:
Testcase 1: Water trapped by block of height 4 is 3 units, block of height 0 is 7 units. So, total unit of water trapped 
is 10 units.
 
 
/*
Think that whenever you are standing at a place why it will store water. 
The difference in the length of walls on both sides will give the storage.
Water will be stored only if the min(largest wall on left of i,largest wall on right of i)>wall at i.
*/ 

Sol : 
int trappingWater(int a[], int n){
    int l[n];
    l[0]=a[0];
    int r[n];
    r[n-1]=a[n-1];
    
    for(int i=1;i<n;i++)
    {
        l[i]=max(l[i-1],a[i]);
    }
    for(int i=n-2;i>=0;i--)
    {
        r[i]=max(r[i+1],a[i]);
    }
    int ans=0;
    for(int i=1;i<n-1;i++)
    {   int t=min(l[i],r[i]);
        if(t>a[i])
        {
            ans=ans+(t-a[i]);
        }
    }
    
    return ans;
    

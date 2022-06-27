https://www.codingninjas.com/codestudio/problems/1112654?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0
int uniqueElement(vector<int> arr, int n)
{
	int low = 0 , high = n-2;
    
    while(low <= high) {
        int mid = (low+high)/2;
        if(arr[mid] == arr[mid^1]) low = mid + 1; // Ye if Condition next even aur previous odd nikalti hai.
        else high = mid - 1;
    }
    return arr[low];
}

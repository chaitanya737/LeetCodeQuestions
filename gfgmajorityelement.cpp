https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1#
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        unordered_map<int , int> hm;
        for(int i = 0 ; i < size ; i++){
            hm[a[i]]++;
        }
        for(auto i : hm){
            if(i.second > size/2) return i.first;
        }
        return -1;
    }
};
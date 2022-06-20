#include <bits/stdc++.h>
using namespace std;
int count = 0;
void merge(int *arr , int s , int e) {
   
   int mid = (s+e)/2;

   int len1 = mid - s + 1;
   int len2 = e - mid;

   int *first = new int[len1];
   int *second = new int[len2];

   int k = s;
   for(int i = 0 ; i < len1 ; i++) first[i] = arr[k++];
   k = mid+1;
   for(int i = 0 ; i < len2 ; i++) second[i] = arr[k++];

   int i = 0 , j = 0;
   int L = s;
   while(i < len1 and j < len2) {
      if(first[i] < second[j]) arr[L++] = first[i++];
      else arr[L++] = second[j++];
   }

   while(i < len1) arr[L++] = first[i++];
   while(j < len2) arr[L++] = second[j++];

}

void mergeSort(int *arr , int s , int e) {
   if(s>=e) return;
   int mid = (s+e)/2;

   mergeSort(arr,s,mid);

   mergeSort(arr,mid+1 ,e);

   merge(arr,s,e);
}
int main()
{
    int arr[] = {2,1,3,5,2,7,6,0,9};
    int n = sizeof(arr)/sizeof(int);

    mergeSort(arr,0,n-1);

    for(int i = 0 ; i < n ; i++) cout << arr[i] << " ";
    return 0;
}
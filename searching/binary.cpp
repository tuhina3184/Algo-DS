#include <iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if(r >= l){
        int mid = l + (r-1)/2;
        if(arr[mid] == x){
            return mid;
        }
        if(arr[mid] < x){
            return binarySearch(arr, mid+1, r, x);
        }
        if(arr[mid] > x){
            return binarySearch(arr, l, mid-1, x);
        }
    }
        return -1;
}

int main(){
    int n,i,x;
    cout << "Enter size:";
    cin >> n;
    int arr[n];
    cout << "Enter sorted array:";
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter term to be searched:";
    cin >> x;
    int l = arr[0];
    int r = arr[n-1];
    int loc;
    loc = binarySearch(arr,l,r,x);
    if(loc != -1){
        cout << loc;
        cout << "\n";
    }
    else{
        cout << "Element not found!!";
        cout << "\n";
    }
    return 0;
}

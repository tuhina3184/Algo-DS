// Linearly search x in arr[]. If x is present then return its 
// location, otherwise return -1

#include <iostream>

using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for (i=0; i<n; i++)
        if (arr[i] == x)
        return i;
    return -1;
}


int main(){
    int i,x,n,loc;
    cout << "Enter size:";
    cin >> n;
    int arr[n];
    for (i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Enter term to be searched:";
    cin >> x;
    loc = search(arr, n, x);
    cout << "\nLocation is: "<<loc;
    return 0;
}
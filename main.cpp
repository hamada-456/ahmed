#include <iostream>

using namespace std;
int ahmed(int *arr, int n, int target){
    int l = 0;
    int h = n-1;
    int m = h+l/2;
    while (l<=h){
        if(arr[m] == target){
            return m;
        }
        else if(arr[m] > target ){
            h = m -1;
            m = h+l/2;
        }
        else{
            l =m+1;
            m = h+l/2;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,4,5,7};
    int Size = 5;
    int target= 5;
    int index = ahmed(arr, Size, target);
    cout<<index<<endl;

    return 0;
}

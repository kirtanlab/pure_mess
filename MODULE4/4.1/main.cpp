#include <iostream>
using namespace std;

class arr{
    int* arr1 = nullptr;
    int* arr2 = nullptr;
    int size1;
    int size2;
public:
     int* take_arr(int size){
        int* arr = new int[size];
        for(int i = 0;i < size ; i++){
            cout << "location [" << i << "] :";
            cin >> arr[i];
        }
        return arr;
    }
    void prnt_arr(int *arr,int size){
        cout<<" Provided Array: {";
        for(int i =0;i < size;++i){
            cout << arr[i] << "," ;
        }
        cout << "}";
    }
    void arr_fun(){
        //initializing first array
        cout << " enter the size of first array" << endl;
        cin >> size1;
        arr1 = new int[size1];
        cout << " enter the elements of first aray" << endl;
        arr1 = take_arr(size1);
        prnt_arr(arr1,size1);

        //initializing second array
        cout << "\n enter the size of second array" << endl;
        cin >> size2;
        arr2 = new int[size2];
        cout << "\n enter the elements of second aray" << endl;
        arr2 = take_arr(size2);
        prnt_arr(arr2,size2);
        sum_arr();
    }
    void sum_arr(){
        //Sum of Two arrays
if (size1 >= size2){
    int* res_arr = new int[size1];
    for(int i=0; i < size1; i++){
        if (i < size2)
            res_arr[i] = arr1[i] + arr2[i];
        else
            res_arr[i] = arr1[i];
    }
     cout<<"\n sum of array Array: {";
        for(int i =0;i < size1;++i){
            cout << res_arr[i] << "," ;
        }
        cout << "}";
}
else {
    int* res_arr = new int[size2];

    for(int i=0; i<size2; i++){
        if (i < size1)
            res_arr[i] = arr1[i] + arr2[i];
        else
            res_arr[i] = arr2[i];
    }
     cout<<"\n sum of array Array: {";
        for(int i =0;i < size2;++i){
            cout << res_arr[i] << "," ;
        }
        cout << "}";
}

    }
};

int main(){
    arr Arr;
    Arr.arr_fun();
    return 0;
}

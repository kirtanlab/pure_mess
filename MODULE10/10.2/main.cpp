#include <iostream>
using namespace std;


class sub_arr {
   private:
      int SIZE;
      int* arr;
   public:
      sub_arr() {
          cout << "How many Elements do you want in array: " << endl;
          cin >> SIZE;
            arr = new int[SIZE];
        int i;
         for(i = 0; i < SIZE; i++) {
           arr[i] = i*i;
         }
      }
      void prnt(){
          for(int i = 0; i < SIZE; i++) {
           cout << arr[i] << " ";
         }
      }
      int &operator[](int i) {
         if( i >= SIZE ) {
            cout << "Index running Out of Size of Array" << endl;
            return arr[0];
         }
         return arr[i];
      }
};

int main() {
   sub_arr A;
        cout << "Auto_genarated Array is :" << endl;
        A.prnt();
   cout <<"\n**Using [] Operator for find subscript**" << endl;
   cout << "Value of A[3] : " << A[2] <<endl;
   cout << "Value of A[6] : " << A[5]<<endl;
   cout << "Value of A[13] : " << A[12]<<endl;

   return 0;
}

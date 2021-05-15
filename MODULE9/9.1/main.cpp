#include <iostream>
using namespace std;
class arr_2d {
  private:
    int **arr;
    static int val;
    int columns;
    int rows;
  public:
    arr_2d();
    void inpt();
    void prnt();
};

arr_2d::arr_2d() {
     cout << "how many rows do you want to add: " << endl;
        cin >> rows;
        cout << "How many Rows do you want to add: " << endl;
        cin >> columns;
    arr = new int *[rows];
    for (int i = 0; i < rows; i++)
        arr[i] = new int[columns];
}
void arr_2d::inpt(){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}
void arr_2d::prnt(){
     for (int i = 0; i < rows; i++){
       for (int j = 0; j < columns; j++){
          cout << arr[i][j] << " ";
       }
       cout << "\n";
     }
}
int main() {
    arr_2d *arr1 = new arr_2d;
<<<<<<< HEAD
    arr1->inpt();
    arr1->prnt();
    return 0;
}/*#include <iostream>
using namespace std;
class arr_2d {
  private:
    int **arr;
    static int val;
    int columns;
    int rows;
  public:
    arr_2d();
    void inpt();
    void prnt();
};

arr_2d::arr_2d() {
     cout << "how many rows do you want to add: " << endl;
        cin >> rows;
        cout << "How many Rows do you want to add: " << endl;
        cin >> columns;
    arr = new int *[rows];
    for (int i = 0; i < rows; i++)
        arr[i] = new int[columns];
}
void arr_2d::inpt(){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}
void arr_2d::prnt(){
     for (int i = 0; i < rows; i++){
       for (int j = 0; j < columns; j++){
          cout << arr[i][j] << " ";
       }
       cout << "\n";
     }
}
int main() {
    arr_2d *arr1 = new arr_2d();
=======
>>>>>>> 349f9f54c06132a33dd5f6796075a4f8925da1d4
    arr1->inpt();
    arr1->prnt();
    return 0;
}
*/

#include <iostream>
#include lab41.cpp
using namespace std;

class ArrayTools {
    public:
        void    a(int myArray);
        void    ();
        void    ();
        int     ();
    private:
        int minValue;
        int maxValue;
        int sumValue;
        int searchValue;
        int sortedYorN;
}

int ArrayTools::a.Print() {
    for(int i = 0; i<SIZE;i++){
        i = i - 1;
        cout<<myArray[i];
    }
}

int ArrayTools::a.Find_min(int minValue) {
    minValue = 
}

int ArrayTools::a.Find_max() {
    
}

int ArrayTools::a.Find_sum() {
    
}

int ArrayTools::a.Search() {
    
}

int ArrayTools::a.Num_even/odd() {
    
}

int ArrayTools::a.Is_sorted() {
    
}

int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    ArrayTools a(myArray);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    // for loop
    int i=0;
    for(i=0;i<=10;i++){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<endl;

    // while loop
    int a = 10;
    while(a>0)
    {
        cout<<a<<endl;
        a--;
    }
    cout<<endl;
    cout<<endl;

    // do-while loop
    int b = 0; 
    do {
        cout<<b<<endl;
        b+=2;
    } 
    while (b <= 10);

    cout<<endl;
    cout<<endl;

    //nested for loop
    int set = 10;
    for(int b = 1;b<=set;b++){
        for(int c = 1;c<=set;c++){
            cout<<b*c<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    // nested while loop
    int ROWS = 5; 

    int d = 0;
    while (d < ROWS) {
        int e = 0;
        while (e <= d) {
            cout << "* ";
            e++;
        }
        cout << endl;
        d++;
    }
    cout<<endl;
    cout<<endl;

    // nested for-while loop
    int rows = 5; 
    for (int i = rows; i >= 1; i--) {
        int j = 1;
        while (j <= i) {
            cout << j << " " ;
            j++;
        }
        cout<<endl;
        
    }
    cout<<endl;

    //nested do-while
    int rowred = 1;
    do {
        int cols = 1;
        do {
            cout << "* ";
            cols++;
        } 
        while (cols <= 5); 
        
        cout <<endl; 
        rowred++;
    } while (rowred <= 3); 

    return 0;
}






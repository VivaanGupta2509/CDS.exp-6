# Experiment 6

## Aim - 
To study and implement decision making loops in C++ 

## Apparatus - 
VS Code

## Theory - 
Decision making aka conditional loops in C++ are loops that execute a block of code as long as a specified condition is true. 
These loops are used to repeat the set of steps until the condition is no longer true. 
The basic types of loops in C++ are the __for loop__,__while loop__ and the __do-while loop__. 

### Types of loops:-

#### a) For Loop

#### b) While loop

#### c) Do-While loop

### For Loop -

A "for" loop is a control flow statement used to repeat a block of code a certain number of times.
The syntax can vary slightly depending on the programming language.

### While loop -
A "while" loop is another type of control flow statement that repeatedly executes a block of code as long as a specified condition is true.
You can control the flow inside a "while" loop using break to exit the loop and continue to skip to the next iteration:

### Do-while loop -

It executes the block of code at least once before checking the condition.
You can control the flow inside a "while" loop using break to exit the loop and continue to skip to the next iteration:

### Nested loops :

Nested loops involve placing one loop inside another. They can be useful for handling multi-dimensional data or performing complex iterations.
Nested loops can be quite powerful but can also lead to performance issues if not used carefully, especially with large datasets or high iteration counts.

## Code - 
```
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
```


## Output - 








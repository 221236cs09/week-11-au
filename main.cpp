//
//  main.cpp
//  week11_1
//
//  Created by Islombek Abdurahmonov on 22/11/22.
//

#include <iostream>
using namespace std;

void swap1(int &a, int &b){
    a = a+b;
    b = a-b;
    b = a-b;
    cout << &a << " " << &b << " " << endl;
}

void swap2(int *a, int *b){
    *a = *a + (*b);
    *b = *a - (*b);
    *a = *a - (*b);
    cout << a << " " << b << " " << endl;
}

int main(int argc, const char * argv[]) {
    int a = 5, b=4;
    int *p1 = &a;
    int *p2 = &b;
    
    swap2(p1, p2);
    cout << a << endl << b << endl;
    cout << &a << " " << &b << endl;
    
//    int a;
//    cout << &a << endl;
//    cin >> a;
//    cout << &a << endl;
//    int *p=&a;
//    cout << *p << endl;
//    cout << p << endl;
//    a++;
//    cout << p << endl;
    
//    int num=5;
//    int *p = &num;
//    int n=55;
//    int m=55;
//
//    cout << &n << endl;
//    cout << &m << endl;
//    m++;
//    cout << n << endl << m << endl;
//    int &r=n;
//    cout << &n << endl;
//    cout << &r << endl;
//    r++;
//    cout << n << endl << r << endl;
    
    return 0;
}

/*Vehicles may be either stopped of running in a lane. If two vehicles are running in opposite direction
 * in a single lane there is a chance of collision. Write a C++ program using exception handling to avoid
 * collisions. You are free to make necessary assumptions.*/

#include <bits/stdc++.h>
using namespace std;

class Car {
    int dir; // either +1 or -1
public:
    Car() : dir(0) {}
    Car(int i) : dir(i) {}
};

class Lane {
    int lanedir; 
    Car* cars; 
    int ctr; 

public:
    Lane() : ctr(0), lanedir(0) {
        
    }

    void addcar(int d) {
        if (ctr == 0) {
            lanedir = d; 
            ctr++;
        } else {
            if (lanedir == -1 * d) { 
                throw "Collision"; 
            } else {
                ctr++; 
            }
        }
    }
};

class Highway {
    int length; 
    Lane* lanes; 

public:
    Highway(int n) : length(n) {
        lanes = new Lane[n];
    }

    void add(int lno, int dir) {
        if (lno > length) {
            throw -1; 
        }
        lanes[lno - 1].addcar(dir);
    }
};

int main() {
    cout << "Enter no. of highway lanes:" << endl;
    int n;
    cin >> n;

    try {
        Highway hw(n);
        while (true) {
            cout << "Enter Vehicle lane no and direction. Enter -1 -1 to stop" << endl;
            int l, b;
            cin >> l >> b; 
            if (l == -1 && b == -1) {
                break; 
            }
            hw.add(l, b); 
        }
        cout << "NO COLLISIONS!!!!";
    }
    catch (const char* str) {
        cout << "Collision occurred";
    }
    catch (int a) {
        cout << "Wrong lane info";
    }
    catch (...) {
        cout << "Default expression";
    }
    return 0;
}

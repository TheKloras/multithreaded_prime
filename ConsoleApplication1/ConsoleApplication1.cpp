// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
using namespace std;

void calc(int n) {
    int m = n * 200000;
    int i = (n - 2) * 200000;
    int k;
    bool prime;
    while (i < m) {
        prime = true;
        for (k = 2; k <= i / 2; ++k) {
            if (i % k == 0) {
                prime = false;
                break;
            }
        }
        if (prime == true) {
            cout << i << endl;
        }
        i++;
    }
}
int main(){
    //int x,i,n;
    
    cout << "Prime!\n";
    
    thread thread1(calc, 1);
    thread thread2(calc, 2);
    thread thread3(calc, 3);
    thread thread4(calc, 4);
    thread thread5(calc, 5);
    thread thread6(calc, 6);
    thread thread7(calc, 7);
    thread thread8(calc, 8);
    thread thread9(calc, 9);
    thread thread10(calc, 10);
    thread thread11(calc, 11);
    thread thread12(calc, 12);
    thread thread13(calc, 13);
    thread thread14(calc, 14);
    thread thread15(calc, 15);
    thread thread16(calc, 16);
    thread thread17(calc, 17);
    thread thread18(calc, 18);
    thread thread19(calc, 19);
    thread thread20(calc, 20);

    thread1.join();
    thread2.join();
    thread3.join();
    thread4.join();
    thread5.join();
    thread6.join();
    thread7.join();
    thread8.join();
    thread9.join();
    thread10.join();
    thread11.join();
    thread12.join();
    thread13.join();
    thread14.join();
    thread15.join();
    thread16.join();
    thread17.join();
    thread18.join();
    thread19.join();
    thread20.join();
}

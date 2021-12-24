//
//  main.cpp
//  day1
//
//  Created by Ashley Chen on 12/24/21.
//
#include <vector>
#include <iostream>
using namespace std;

void partOne(){
    int count = 0;
    int prev_val, curr_val;
    cin >> curr_val;        //set first value
    prev_val = curr_val;
    while (cin >> curr_val) {
        if (curr_val > prev_val) {
            count++;
        }
        prev_val = curr_val;
    }
    cout << count << endl;
} 

void partTwo(){
    int count = 0;
    int val1, val2, val3, prev, curr, read;
    cin >> val1 >> val2 >> val3;
    curr = val1+val2+val3;
    prev = curr;
    while (cin >> read) {
        val1 = val2;
        val2 = val3;
        val3 = read;
        curr = val1+val2+val3;
        if(curr > prev){
            count++;
        }
        prev = curr;
    }
    cout << count << endl;
}

int main(int argc, const char * argv[]) {
    partOne();      //correct: 1288
    partTwo();      //correct: 1311
    return 0;
}

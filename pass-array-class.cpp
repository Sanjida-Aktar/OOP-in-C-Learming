#include<bits/stdc++.h>
using namespace std;

class Array{
    public:
    int size;
    int *arr;
    Array(int size){
        this->size = size;
        arr = new int[size];
    }
};
int main(){
     Array a(5);
     a.arr[0] = 1;
        a.arr[1] = 2;
    return 0;
}
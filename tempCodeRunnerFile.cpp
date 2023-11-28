#include<iostream>

using namespace std;

class test

{
    int a, b;
    public:
    void getdata(int x, int y){
        a=x;
        b=y;
    }
    friend class sample;

};

class sample{
    public:
    int compare(test x){
        if(x.a> x.b)
        return x.a;
        else
        return x.b;
    }

};

int main(){
    test t1;
    t1.getdata(50,60);
    sample s1;
    cout << s1.compare(t1) << endl;
}

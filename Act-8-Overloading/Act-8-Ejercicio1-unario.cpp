// Randy Oliver Ortega Cota
// A00232304
// TC1030 gpo 700
// 31 de mayo de 2021
#include <iostream>
using namespace std;

class Test{
    private:
        int count;
    public:
        Test(){count = 5;}
        void operator ++();
        void operator --();
        void Display() {
            cout<<"El contador es : "<<count<<endl;
        }
};

void Test::operator++(){
    count = count + 5;
};
void Test::operator--(){
    count = count - 10;
};

int main(){
    Test t;
    ++t;
    t.Display();

    --t;
    --t;
    --t;
    t.Display();

    return 0;
}
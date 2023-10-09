#include <iostream>
#include "InscribedCircle.h"

using namespace std;

int main() {

    InscribedCircle obj;

    obj.input();

    cout << "Info:" << endl;
    obj.print();

    obj.checkFit();

    return 0;
}
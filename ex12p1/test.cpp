#include "KeyValue.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
    KeyValue<int, int>* pair = new KeyValue(123, 321);

    cout << pair->getKeyByValue(321) << endl;
    cout << pair->getValueByKey(123) << endl;
    cout << pair->setKey(321);
    cout << pair->setValue(42);

    cout << pair->getKeyByValue(24) << endl;
    cout << pair->getValueByKey(42) << endl;

}
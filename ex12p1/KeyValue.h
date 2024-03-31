#include <string>
#include <iostream>

using namespace std;

template <typename Key, typename Value>
class KeyValue
{
private:
    Key key;
    Value value;
public:
    KeyValue(Key key, Value value) {this->key = key; this->value = value;};
    ~KeyValue();

    Value getValueByKey(Key key){
        if (key == this->key){
            return value;
        }
        cout << "Error: wrong key!";
    }

    Key getKeyByValue(Value value){
        if (value == this->value){
            return key;
        }
        cout << "Error: wrong value";
    }

    string setValue(Key key){
        if (key == this->key){
            Value temp;
            cout << "Enter a new value for the key: ";
            cin >> temp;
            this->value = temp;
            return "Value set.\n";
        }
        return "Error: wrong key.\n";
    }

        string setKey(Value value){
        if (value == this->value){
            Key temp;
            cout << "Enter a new key for the value: ";
            cin >> temp;
            this->key = temp;
            return "Key set.\n";
        }
        return "Error: wrong value.\n";
    }
};


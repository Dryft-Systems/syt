#include <iostream>
#include <string>

using namespace std;

class MyClass {
public:
    MyClass(string data) {
        this->data = new string(data);  // Memory allocation without deallocation
    }

    ~MyClass() {
        // Destructor does not free memory, causing a memory leak
    }

    void printData() {
        cout << *data << endl;  // Potential dereference of a null pointer
    }

private:
    string* data;
};

int main() {
    MyClass* obj1 = new MyClass("Hello World");  // Dynamic memory allocation without a matching delete

    obj1->printData();

    return 0;  // Memory allocated for obj1 is never released
}

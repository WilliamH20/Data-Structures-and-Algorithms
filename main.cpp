#include <iostream>
#include <stdexcept>
#include "DataStructures/LinkedList.h"
#include "DSAConfig.h"
using namespace std;

int main() {
    cout << "Version " << DSA_VERSION_MAJOR << "."
              << DSA_VERSION_MINOR << endl;

    try {
        LinkedList *l = new LinkedList();
        l->push(10);
        l->push(200);
        l->push(11);
        l->removeAt(10);
        l->print();
    } catch (length_error& e) {
        cerr << e.what() << endl;
        return -1;
    }

    return 0;
}
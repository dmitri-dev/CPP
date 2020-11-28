#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Collection {
    int elno;
    int *elements;
};

void AddToCollection(Collection &col, int element) {
    if (col.elno == 0) {
        col.elements = new int[1] { element };
    } else {
        *(col.elements + col.elno) = element;
    }
    col.elno++;
}

void PrintCollection(Collection col) {
    cout << "[ ";
    for(int i = 0; i < col.elno; i++)
        cout << col.elements[i] << " ";
    cout << "]" << endl;
}

void randomArray() {
    Collection collection = { 0, nullptr };
    int elems;
    cout << "How many elements? ";
    cin >> elems;
    srand(time(nullptr));
    for(int i = 0; i < elems; i++)
        AddToCollection(collection, rand() % 100 + 1);
    PrintCollection(collection);
    delete[] collection.elements;
}
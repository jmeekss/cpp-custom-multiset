/*
* Author:	J Meeks
* Purpose:	This program tests the custom container for a multiset to store data of any type
*/

#include <set>
#include <iostream>
#include "bag.h"

using namespace std;

int main() {
	//tests the custom container by getting it's size, empty state, full state, and adding/removing items, as well as printing contents
	cout << "\nMultiset/Bag Test\n\n";

	ArrayBag<string> bag;

        cout << boolalpha << "isEmpty returns: " << bag.isEmpty()
                << "\nisFull() returns: " << bag.isFull()
		<< "\nsize: " << bag.getSize()
                << "\ncontains() for John returns: " << bag.contains("John")
                << "\ncontains() for Bob returns: " << bag.contains("Bob") << endl;

	cout << "\nAdd John, Dylan, Mary, and Joe to bag";

        bag.add("John");
        bag.add("Dylan");
        bag.add("Mary");
        bag.add("Joe");

        bag.printElements();

        cout << boolalpha << "isEmpty returns: " << bag.isEmpty()
                << "\nisFull() returns: " << bag.isFull()
                << "\nsize: " << bag.getSize()
                << "\ncontains() for John returns: " << bag.contains("John")
                << "\ncontains() for Bob returns: " << bag.contains("Bob") << endl;

	cout << "\nRemove item from bag";

	bag.remove();

	bag.printElements();

	cout << "Calling makeEmpty\n";

        cout << boolalpha << "isEmpty returns: " << bag.isEmpty()
                << "\nisFull() returns: " << bag.isFull()
                << "\nsize: " << bag.getSize()
                << "\ncontains() for John returns: " << bag.contains("John")
                << "\ncontains() for Bob returns: " << bag.contains("Bob") << endl;

	bag.printElements();

	//returns 0 to indicate normal program exit
	return 0;
}

#ifndef BAG_H
#include <iostream>
#include <ctime>
#define BAG_H

//declares functions and data members
template <class T>
class ArrayBag {
        private:
                T* arr;
                unsigned int size;
        public:
		ArrayBag();
		~ArrayBag();
		int getSize() const;
		bool isEmpty() const;
		bool isFull() const;
		bool add(T toAdd);
		bool remove();
		bool contains(T con) const;
		void makeEmpty();
		void printElements() const;
};

		//constructor for class, sets size of array to 1000
		template<class T>
                ArrayBag<T>::ArrayBag() {
                        arr = new T[1000];
                        size = 0;
                }

		//destructor of class, frees memory
		template<class T>
                ArrayBag<T>::~ArrayBag(){
                        delete [] arr;
                }

		//returns the size of the bag
		template<class T>
                int ArrayBag<T>::getSize() const {
                        return size;
                }

		//returns if bag is empty
		template<class T>
                bool ArrayBag<T>::isEmpty() const {
                        if(size == 0){
                                return true;
                        } else {
                                return false;
                        }
                }

		//returns if bag is full
		template<class T>
                bool ArrayBag<T>::isFull() const {
                        if(size == 1000){
                                return true;
                        } else {
                                return false;
                        }
                }

		//adds specified item to bag
		template<class T>
                bool ArrayBag<T>::add(T toAdd) {
                        if(isFull()){
                                return false;
                        } else { //adds items and increases size
                                arr[size] = toAdd;
                                size++;
                                return true;
                        }
                }

		//removes random item from bag
		template<class T>
                bool ArrayBag<T>::remove() {
			if(getSize() > 0){
				size--;
				return true;
                        }
			return false;
                }

		//returns whether bag contains specified item
		template<class T>
                bool ArrayBag<T>::contains(T con) const {
                        for(unsigned int i = 0; i < size; i++){
                                if(arr[i] == con){
                                        return true;
                                }
                        }
                        return false;
                }

		//clears bag and resets size
		template<class T>
                void ArrayBag<T>::makeEmpty() {
                        arr.clear();
                        size = 0;
                }

		//prints all items in bag
		template<class T>
                void ArrayBag<T>::printElements() const {
                        std::cout << "\nELEMENTS\n";
                        for(unsigned int i = 0; i < size; i++){
                                std::cout << arr[i] << "\n";
                        }
                        std::cout << "\n";
                }

#endif

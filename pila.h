#ifndef pila_H
#define pila_H

template<typename T>
class Stack{
	T* array;
	int top = -1;
	int size = 0;
	int maxSize = -1;
	
	public:
		Stack(int _maxSize) : maxSize(_maxSize) {
			array = new T[maxSize];
		}
		
		T getTop() {
			if(isEmpty()) 
				return NULL;
			
			return array[top];
		}
		
		void push(T val) {
			if(top == maxSize-1)
				return;
			
			array[++top] = val;
		}
		
		T pop() {
			if(isEmpty()) 
				return nullptr;
			
			return array[top--];
		}
		
		bool isEmpty() {
			return top == -1;
		}
		
		friend ostream& operator<<(ostream& out, Stack<T>& s) {
			out << "\nTop->\t" << *s.getTop();
			for(int i=s.top-1; i>=0; i--)
				out << "\t" << *s.array[i];
			return out << "------------------------------------------------------" << endl;

		}
};
#endif
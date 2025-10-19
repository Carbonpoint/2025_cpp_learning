#include <vector>
#include <iostream>

const int MAX_SIZE = 10;
const int BOTTOM_OF_STACK = -1;

struct Stack{
	std::vector<int> v;
	int top = BOTTOM_OF_STACK;
};

void push(Stack&, int);
void pop(Stack&);
int top(Stack&);
bool is_full(Stack& s);
bool is_empty(Stack&);
void print_stack(Stack);
int main(){
	Stack my_stack;
	push(my_stack, 42);
	std::cout << "Stack after push." << '\n';
	print_stack(Stack(my_stack));
	pop(my_stack);
	print_stack(Stack(my_stack));
	std::cout << "Stack after pop." << '\n';
	for(int i=0; i < 20; i++) push(my_stack, i);
	return 0;

}

bool is_full(Stack& s){
	return s.top == MAX_SIZE -1;
}
bool is_empty(Stack& s){
	return s.top == BOTTOM_OF_STACK;
}
void push(Stack& s, int value){
	if(is_full(s)) std::cout << "Stack is full." << '\n';
	else {
		s.v.push_back(value);
		++s.top;
	}
}

void pop(Stack& s){
	if(is_empty(s)) std::cout << "Stack is empty." << '\n';
	else {
		s.v.pop_back();
		--s.top;
	}
}
int top(Stack& s)
{
	auto t{BOTTOM_OF_STACK};
	if(!is_empty(s)) t = s.v.back();
	else std::cout << "Stack is empty." << '\n';
	return t;
}
void print_stack(Stack& s){
	std::cout << "[";
	for(int i = 0; i <= s.top; ++i) std::cout << s.v[i] << '\n';
	std::cout << "]\n";

}

/*
void print_stack(Stack& s)
{
	std::cout << "[ ";
	for (auto const& elem : s.v)
		std::cout << elem << ' ';
	std::cout << "]\n";
}
*/

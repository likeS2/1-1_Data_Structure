#pragma once
#include<iostream>


template<typename Type>
struct Node
{
	Type val;
	Node<Type>* prev;
	Node<Type>* next;
};



template<typename Type>
class DLL
{
public:
	DLL() {};
	~DLL() {};

	void make_list();
	int length();
	void print_all();

	void push_front(Type data);
	void push_back(Type data);
	void pop_front();
	void pop_back();
	void insert(Type pos, Type data);
	int size();


private:
	Node<Type>*head = nullptr;
	int len = 0;
};



template<typename Type>
void DLL<Type>::make_list()
{
	head = new Node<Type>;
	head->val = NULL;
	head->prev = nullptr;
	head->next = nullptr;
	len = 0;
}

template<typename Type>
void DLL<Type>::length()
{
	return len;
}

template<typename Type>
void DLL<Type>::print_all()
{
	if (len != 0)
	{
		Node<Type>* temp = head;

		while (temp != nullptr)
		{
			cout << temp->val;
			cout << "->";
			temp = temp->next;
		}
	}
}

template<typename Type>
void DLL<Type>::push_front(Type data)
{
	Node<Type>* temp = head;

	Node<Type>* new_node = new Node<Type>;
	new_node->val = data;
	new_node->next = nullptr;

}

template<typename Type>
void DLL<Type>::push_back(Type data)
{

}

template<typename Type>
void DLL<Type>::pop_front()
{

}

template<typename Type>
void DLL<Type>::pop_back()
{

}

template<typename Type>
void DLL<Type>::insert(Type pos, Type val)
{

}

template<typename Type>
int DLL<Type>::size()
{

}

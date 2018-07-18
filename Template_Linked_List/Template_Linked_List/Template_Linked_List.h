#pragma once

#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

#include <iostream>

using namespace std;

template<typename Type>
struct Node
{
	Type val;
	Node<Type>* next;
};




template<typename Type>
class Linked_List
{
public:
	Linked_List() {};
	~Linked_List() {}


	void make_list();
	int length();
	void insert(Type data);
	//bool insert_at(int pos, Type data);
	bool remove(Type data);
	bool remove_at(int pos);
	void print_all();

private:
	Node<Type>*head;
	int len = 0;
};

template<typename Type>
void Linked_List<Type>::make_list()
{
	head = new Node<Type>;
	head->val = NULL;
	head->next = nullptr;
	len = 0;
}

template<typename Type>
int Linked_List<Type>::length()
{
	return len;
}

template<typename Type>
void Linked_List<Type>::insert(Type data)
{
	Node<Type>* temp = head;

	Node<Type>* new_node = new Node<Type>;
	new_node->val = data;
	new_node->next = nullptr;

	if (len == 0)
		head = new_node;

	else
	{
		while (temp->next != nullptr)
			temp = temp->next;

		temp->next = new_node;
	}

	len++;
}
/*template<typename Type>
bool Linked_List<Type>::insert_at(int pos, Type data)
{
	Node<Type>* temp = head;

	if (pos > len)
		return false;

	Node<Type>* new_node = new Node<Type>;
	new_node->val = data;
	new_node->next = nullptr;

	if (pos == 0)
		temp = new_node;

	else
	{
		for (int i = 0; i < pos; i++)
			temp = temp->next;

		temp->next = new_node;
	}

	len++;

	return true;
}*/

template<typename Type>
bool Linked_List<Type>::remove(Type data)
{

	if (len == 0)
		return false;

	Node<Type>* prev = head;
	Node<Type>* curr = head;

	if (head->val == data)
	{
		head = head->next;
		delete prev;
		len--;
		return true;
	}

	while (curr->next != nullptr)
	{
		if (curr->val == data)
		{
			prev->next = curr->next;
			delete curr;
			curr = prev->next;
			len--;
			return true;
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}

	if (curr->val == data)
	{
		delete curr;
		prev->next = nullptr;
		len--;
		return true;
	}

	return false;
}

template<typename Type>
bool Linked_List<Type>::remove_at(int pos)
{
	if (len == 0)
		return false;

	if (pos > len || pos < 0)
		return false;

	if (pos == 0)
	{
		Node<Type>* temp = head;
		head = head->next;
		delete temp;
		len--;
		return true;
	}

	Node<Type>* prev = head;
	Node<Type>* curr = head;

	for (int i = 0; i < pos; i++)
	{
		prev = curr;
		curr = curr->next;
	}

	prev->next = curr->next;
	delete curr;
	curr = prev->next;
	len--;

	return true;
}

template<typename Type>
void Linked_List<Type>::print_all()
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


#endif _LINKED_LIST_H


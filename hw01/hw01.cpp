

class LinkedList
{
public:
	LinkedList();
	void addToLinkedList(const string&);
	void printLinkedList();
	void insert(const string&);

private:
	Ll* head;
	int size;

}



int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}

void LinkedList::printLinkedList()
{
	Ll* tp = head;
	while(tp!=0)
	{
		cout << *tp <<endl;
		tp = tp->next;
	}
}

void LinkedList::insert(const string& foo)
{
	Ll* newNode = new Ll(foo)
	//empty
	if (head == 0)
	{
		head = newNode;
	}
	else
	{
		Ll* curr = head
		Contact* trail= 0;
		//Traverse to find insert
		while(curr != 0)
		{
			if(curr->foo >= newNode->foo)
			{
				break;
			}
			else
			{
				trail = curr;
				curr = curr->next;
			}
		}

		//insert at head
		if (curr == head)
		{
			newNode->next = head;
			head = newNode;
		}
		else
		{
			//insert after head
			newNode->next = curr;
			trail->next = newNode
		}
	}
	size++;
}
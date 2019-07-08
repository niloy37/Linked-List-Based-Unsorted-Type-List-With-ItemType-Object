#include "ItemType.h"
struct NodeType;
class UnsortedType {
	private :
	NodeType *listData;
	int length;
	NodeType *currentPos;

	public:
	UnsortedType(); //constructor
	~UnsortedType(); //Destructor
	void makeEmpty(); //makes the list empty
	bool isFull(); //return true if we cannot allocate any more nodes
	int getLength(); //returns current length of Linked List
	ItemType getItem(ItemType& item , bool& found); //retrieves list element whose key matches item's keys
	void putItem(ItemType item);//insert item in list
	void deleteItem(ItemType item); // delete item from list
	void resetList(); // intializes current pos for a iteration through the list
	ItemType getNextItem(); // gets next item from the list


};
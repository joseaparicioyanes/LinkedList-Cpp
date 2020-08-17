#include "LinkedList.cpp"


int main(){

	LinkedList list;
	for (int i = 0; i < 10;i++)
		list.insert(i);

	list.insert(4);
	list.insert(4);
	list.insert(4);
	list.insert(4);
	list.deleteNode(1);
	list.deleteAll(4);
	list.show();

	system("pause");
	return 0;
}
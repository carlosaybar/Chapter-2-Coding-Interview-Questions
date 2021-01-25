#include <iostream>

using namespace std;

class linkedList {
public:
    int data;
    linkedList* head;


};



void addValue(linkedList** pos, int value)
{
    linkedList* node = new linkedList(); //creates new node to store the next value
    node->data = value; //assings the appropriate value to the empty node
    node->head = (*pos); //moves to the next node
    (*pos) = node;

    // the below if statement checks if the current position is empty
    // if it is empty it sets the node equal to the current postion
    if (node->head == nullptr) {
        (*pos) = node;
    }
}


/*
the following method contains a while loop to
print all the values from the lists until
the pointer to the next address is empty
*/
void print_list(linkedList* n) {
    while (n != NULL) {
        cout << n->data << " "; //prints each value from the list followed by a space
        n = n->head;
    }


}



int main() {
    linkedList* list = NULL; //creates and initializes the second list


   //passing specific values into list1
    addValue(&list, 1);
    addValue(&list, 3);
    addValue(&list, 4);
    addValue(&list, 11);
    addValue(&list, 19);
    addValue(&list, 10);
    addValue(&list, 11);
    addValue(&list, 9);
    addValue(&list, 13);




    cout << "the list is: " << endl;
    print_list(list);

}

#include <iostream>
#include <string>

using namespace std;

int intersect1; //keeps track of the intersecting node from list 1
int intersect2; //keeps track of the intersecting node from the second list
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
        cout << n->data << ""; //prints each value from the list followed by a space
        n = n->head;
    }


}

/*
This method compares the values from both lists at exactly the same position
if the values from a position in list one is equal to the value at exactly the
same position in the second list, then the program prints that the list intersect
and returns the intersecting values. It compares the entire lists and returns as
many intersections as there are.

*/
void addLists(linkedList* list1, linkedList* list2)
{
    string list1_to_string; 
    string list2_to_string;

    while (list1!= NULL && list2 != NULL)
    {
        list1_to_string += to_string(list1 -> data); //concatenates all the values of list1 to string
        list2_to_string += to_string(list2->data);//concatenates all the values of list2 to string

        list1 = list1->head; //moves to the next node of list1
        list2 = list2->head;// moves to the next node of list2
    }

    int result = stoi(list1_to_string) + stoi(list2_to_string); //adds the values of list1 and list2 and stores them in the int result variable
    cout << result << endl;

}


int main() {
    linkedList* list2 = NULL; //creates and initializes the first list
    linkedList* list1 = NULL; //creates and initializes the second list


   //passing specific values into list1
    addValue(&list1, 1);
    addValue(&list1, 3);
    addValue(&list1, 4);

    //passing specific values into list2
    addValue(&list2, 1);
    addValue(&list2, 5);
    addValue(&list2, 2);

    cout << "the first and second lists respectively are: " << endl;
    print_list(list1);
    cout << endl;
    print_list(list2);
    cout << endl;
   
    cout << "the list added results in: " << endl;
    addLists(list1, list2);
}

#include <iostream>

using namespace std;

int intersect1; //keeps track of the intersecting node from list 1
int intersect2; //keeps track of the intersecting node from the second list
int counter = 0;
class linkedList {
public:
    char data;
    linkedList* head;

};



void addValue(linkedList** pos, char value)
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

void getSize(linkedList* next)
{
    linkedList* current = next; // Initialize current  
    while (current != NULL)
    {
        counter++;
        current = current->head;
    }
}

/*
This method compares the values from both lists at exactly the same position
if the values from a position in list one is equal to the value at exactly the
same position in the second list, then the program prints that the list intersect
and returns the intersecting values. It compares the entire lists and returns as
many intersections as there are.

*/

void palindrome(linkedList* list)
{
    linkedList* last = NULL;
    while(last != list)
    {
        linkedList* current = list;
        while (current->head != last)
        {
            current = current->head;
        }
        cout << current->data << endl;
        last = current;
    }

    /*
     int index = 0;
    linkedList* startingPosition = list;
    linkedList* finalPosition = list;
    //linkedList* tail = new linkedList(*counter);

    while (startingPosition != NULL && finalPosition != NULL)
    {


        // finalPosition = finalPosition->counter;
       // cout << finalPosition->data << endl;
       cout << startingPosition->data << endl;

        if (startingPosition->data == finalPosition->data)
        {
            cout << "the list contains intersecting values " << startingPosition->data << " and " << finalPosition->data << endl; //prints the values at the intersection from both lists
        }

        startingPosition = startingPosition->head;
        finalPosition = finalPosition->head;

    }

    */
   

}




int main() {
    linkedList* list = NULL; //creates and initializes the second list


   //passing specific values into list1
    addValue(&list, 't');
    addValue(&list, 'a');
    addValue(&list, 'c');
    addValue(&list, 'o');
    addValue(&list, 'c');
    addValue(&list, 'a');
    addValue(&list, 't');



    cout << "the first list is: " << endl;
    print_list(list);
    cout << endl;
    getSize(list);
    cout << endl;
    palindrome(list);

}

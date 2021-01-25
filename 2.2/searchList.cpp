#include <iostream>

using namespace std;

int intersect1; //keeps track of the intersecting node from list 1
int intersect2; //keeps track of the intersecting node from the second list
int counter = 0;
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
    linkedList* currentPosition = list;
    int input;
    int count = 0;
    cout << "what number to last element of the list do you want to find: "; // Type a number and press enter
    cin >> input; // Get user input from the keyboard
    cout << endl;


    int index = counter - input;
    while (currentPosition != NULL) {
        if (count == index)
        {
            cout << "the " << input << "th" " to last node contains a value of " << currentPosition->data << endl;
        }
        count++;
        currentPosition = currentPosition->head;
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



    cout << "the first list is: " << endl;
    print_list(list);
    cout << endl;
    getSize(list);
    cout << endl;
    palindrome(list);

}

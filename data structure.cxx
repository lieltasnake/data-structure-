
/* DISCRIPTION OF THE PROJECT
This project is a Customer Management System where customers are managed
 using two data structures: a Linked List and an Array List.
The system allows you to perform various operations such as
inserting, deleting, sorting, searching, and displaying customer data.
Here’s a step-by-step breakdown of the code:
1. Data Structures:
Customer Structure:
struct Customer {
    char customer_name[100];  // Customer's name
    int customer_id;          // Unique ID for the customer
    char sex;                 // Customer's sex ('M' for male, 'F' for female)
    int phone_number;         // Customer's phone number
    int age;                  // Customer's age
};
Purpose: Defines the structure to store information about a customer.
Node Structure:
struct Node {
    Customer data;  // Holds customer information3
    Node* next;     // Pointer to the next node in the linked list
};
Purpose: Defines a node in the linked list that holds a Customer object and a pointer to the next node.
2. Linked List Functions:
The linked list operations include inserting, deleting, searching, sorting, and displaying customer data.
Insert at Beginning:
void insertAtBeginning(Node*& head, Customer customer)
Adds a new customer at the beginning of the linked list.
Insert at End:
void insertAtEnd(Node*& head, Customer customer)
Adds a new customer at the end of the linked list.
Insert at Specific Position:
void insertAtPosition(Node*& head, Customer customer, int position)
Inserts a customer at a specified position in the linked list.
Delete from Beginning:
void deleteAtBeginning(Node*& head)
Deletes the first customer node from the linked list.
Delete from End:
void deleteAtEnd(Node*& head)
Deletes the last customer node from the linked list.
Delete at Specific Position:
void deleteAtPosition(Node*& head, int position)
Deletes a customer at a specified position in the linked list.
Delete All Nodes:
void deleteAll(Node*& head)
Deletes all customer nodes from the linked list.
Sorting Customers: The system supports three sorting algorithms to order customers by their names:
Selection Sort:
Sorts by iteratively finding the minimum and swapping.
Bubble Sort:
Compares adjacent elements and swaps them if needed, repeatedly.
Insertion Sort:
Builds a sorted list one element at a time, inserting each customer at the correct position.
Search Operations:
Linear Search:
Node* linearSearch(Node* head, int phone_number)
Searches for a customer by their phone number by going through each node in the list.

Binary Search:
Node* binarySearch(Node* head, int phone_number)
Searches for a customer by phone number in a sorted linked list using binary search.
Display:
void display(Node* head)
Displays all customers in the linked list.
3. Array List Functions:
The array list operations include inserting, deleting, sorting, searching, and displaying customer data using a static array (Customer arr[100]).
Insert at Beginning, End, and Position: Similar to linked list insertions, but using an array structure. Insertion requires shifting elements to make space.
Delete from Beginning, End, and Position: Similar to linked list deletions but involves shifting elements in the array.
Delete All: Resets the size of the array to zero.
Sorting Customers in Array: Supports:
Selection Sort
Bubble Sort
Insertion Sort
Search Operations:
Linear Search: Searches for a customer by phone number by iterating through the array.
Binary Search: Performs a binary search in a sorted array to find a customer by phone number.
Display:
void displayArray(Customer arr[], int size)
Displays all customers stored in the array.
4. Main Program:
The main() function provides the user with a menu-driven interface to interact with the customer data stored in either the Linked List or the Array List.
do {
    cout << "\nCustomer Management System\n";
    cout << "1. Linked List Operations\n";
    cout << "2. Array List Operations\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
Purpose: The user is presented with a choice to interact with linked lists or array lists. The system then displays further submenus to perform different operations like inserting, deleting, sorting, searching, or displaying customers.
Inside Linked List Operations Menu:
The user can choose from:
Insert Customer: Inserts a customer at the beginning, end, or a specific position.
Delete Customer: Deletes a customer from the beginning, end, a specific position, or all nodes.
Sort Customers: Sort customers using selection, bubble, or insertion sort.
Search Customer: Allows the user to search for customers using linear or binary search by their phone number.
Display Customer Data: Displays all customer data.
Inside Array List Operations Menu:
Similar options as the linked list menu but operations are performed on the array list.
5. How It Works:
Customer Information: For each operation like inserting, deleting, or displaying a customer, the program requests customer data such as name, ID, sex, phone number, and age.
Insert/Remove: The system manipulates the linked list or array based on user input for where to insert or remove the customer.
Sort/Search: Users can sort the customer data or search for specific customers by phone number using linear or binary search algorithms.
Display: Displays customer data from the linked list or array in a readable format.
Purpose of the Project:
This project is designed to manage customer data using two common data structures (linked lists and arrays). It is useful for applications where:
Data needs to be dynamically managed (linked list).
A static but easy-to-manage collection of data is sufficient (array).
The project covers basic operations that are commonly performed in many real-world applications such as customer management, inventory systems, and more. The user interface (menu-driven) allows users to easily interact with and manipulate the data, making the system intuitive to use.
Conclusion:
This project demonstrates:
How to use basic data structures (Linked List and Array List) for storing and managing data.
How to implement basic algorithms like sorting and searching.
A simple interface for interacting with the system.
The purpose is to showcase the implementation and manipulation of customer data in a structured way using these data structures.
Purpose of the Project
The given code is a Customer Management System that allows users to manage customer data using two different data structures: Linked List and Array List. This project offers a menu-driven interface to perform various operations on customer data. These operations include adding, deleting, sorting, and searching customers.
The program provides functionalities such as:
Insertion of customer data at the beginning, end, or at a specified position.
Deletion of customer data at the beginning, end, a specific position, or all customers.
Sorting customer data using three sorting algorithms (Selection Sort, Bubble Sort, and Insertion Sort).
Searching customer data using Linear Search and Binary Search.
Displaying all customer data.
Explanation of the Code
1. Structure Definition
The program uses two main structures to represent customer data and nodes of the linked list.
struct Customer {
    char customer_name[100];
    int customer_id;
    char sex;
    int phone_number;
    int age;
};
Customer Structure: This represents a customer and stores their personal details:
customer_name: A character array (string) to hold the name of the customer.
customer_id: An integer to store the unique ID of the customer.
sex: A character to represent the gender (M/F).
phone_number: An integer representing the customer’s phone number.
age: An integer to store the age of the customer.
struct Node {
    Customer data;
    Node* next;
};
Node Structure: This represents a node in the Linked List. Each node contains:
data: A Customer object which holds customer data.
next: A pointer to the next node in the linked list.
2. Linked List Operations
The program performs various operations on a linked list of Customer data. Below are the operations performed for the linked list.
a. Insert at the Beginning
void insertAtBeginning(Node*& head, Customer customer) {
    Node* newNode = new Node;
    newNode->data = customer;
    newNode->next = head;
    head = newNode;
}
This function inserts a new customer at the beginning of the linked list.
A new node is created with the customer data.
The new node's next pointer is set to the current head of the list, and the head is updated to point to the new node.
b. Insert at the End
void insertAtEnd(Node*& head, Customer customer) {
    Node* newNode = new Node;
    newNode->data = customer;
    newNode->next = nullptr;

    if (!head) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}
This function inserts a customer at the end of the list.
If the list is empty, the new node becomes the head.
Otherwise, it traverses the list to the last node and appends the new node at the end.
c. Insert at a Specific Position
void insertAtPosition(Node*& head, Customer customer, int position) {
    Node* newNode = new Node;
    newNode->data = customer;

    if (position == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 0; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }

    if (!temp) {
        cout << "Position out of range\n";
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}
This function inserts a new customer at a specific position in the list.
The function traverses the list until it reaches the desired position, then inserts the new node.
d. Delete at the Beginning
void deleteAtBeginning(Node*& head) {
    if (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
This function deletes the first node in the list and updates the head to point to the next node.
e. Delete at the End
void deleteAtEnd(Node*& head) {
    if (head) {
        if (!head->next) {
            delete head;
            head = nullptr;
        } else {
            Node* temp = head;
            while (temp->next && temp->next->next) {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = nullptr;
        }
    }
}
This function deletes the last node in the linked list.
f. Delete a Node at a Specific Position
void deleteAtPosition(Node*& head, int position) {
    if (!head) return;

    if (position == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    for (int i = 0; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }

    if (!temp || !temp->next) {
        cout << "Position out of range\n";
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}
This function deletes the node at the specified position in the linked list.
g. Delete All Nodes
void deleteAll(Node*& head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
This function deletes all nodes in the list.
h. Sorting Functions The program offers three types of sorting algorithms for sorting customers by their name in the linked list:
1. Selection Sort
2. Bubble Sort
3. Insertion Sort
Each of these algorithms iterates through the list and sorts the customer data based on customer names using comparisons.
3. Array List Operations
The program also supports array-based lists for customer management. Below are similar operations to the linked list, but now they are applied to arrays.
a. Insert at the Beginning
void insertAtBeginning(Customer arr[], int& size, Customer customer) {
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = customer;
    size++;
}
This function shifts elements in the array and inserts a customer at the beginning.
b. Insert at the End
void insertAtEnd(Customer arr[], int& size, Customer customer) {
    arr[size++] = customer;
}
This function adds a customer at the end of the array.
c. Insert at a Specific Position
void insertAtPosition(Customer arr[], int& size, Customer customer, int position) {
    if (position < 0 || position > size) {
        cout << "Invalid position\n";
        return;
    }
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = customer;
    size++;
}
This function inserts a customer at the given position by shifting other elements.
d. Delete at the Beginning
void deleteAtBeginning(Customer arr[], int& size) {
    if (size == 0) return;
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}
This function deletes the first customer in the array and shifts elements left.

e. Delete at the End
void deleteAtEnd(Customer arr[], int& size) {
    if (size == 0) return;
    size--;
    }
This function removes the last customer from the array.
f. Sorting Functions for Array The program provides sorting functions for the array list using:
1. Selection Sort
2. Bubble Sort
3. Insertion Sort
g. Searching Functions for Array The program allows searching for customers using:
1. Linear Search: Iterates through the array to find a customer based on phone number.
2. Binary Search: Works after sorting the array, searching in a more efficient manner.
4. Menu-Driven Interface
The main part of the program provides a menu-driven interface for interacting with the system. The user can choose whether to perform operations on a linked list or an array list. The interface displays options for adding, deleting, sorting, and searching customers.
Conclusion
This Customer Management System allows you to manipulate customer data using linked lists and arrays. You can add, delete, search, and sort customers, making it a versatile tool for managing a customer database. The program implements various data structures and algorithms to manage and manipulate customer information effectively.
*/

#include <iostream>
#include <cstring>
#include<iomanip>
using namespace std;

struct Customer {
    char customer_name[100];
    int customer_id;
    char sex;
    int phone_number;
    int age;
};

struct Node {
    Customer data;
    Node* next;
};

// Linked List Functions

// Insert at the beginning of the Linked List
void insertAtBeginning(Node*& head, Customer customer) {
    Node* newNode = new Node;
    newNode->data = customer;
    newNode->next = head;
    head = newNode;
}

// Insert at the end of the Linked List
void insertAtEnd(Node*& head, Customer customer) {
    Node* newNode = new Node;
    newNode->data = customer;
    newNode->next = NULL;

    if (!head) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Insert at a specific position in the Linked List
void insertAtPosition(Node*& head, Customer customer, int position) {
    Node* newNode = new Node;
    newNode->data = customer;

    if (position == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (!temp) {
        cout << "Position out of range\n";
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete the first node of the Linked List
void deleteAtBeginning(Node*& head) {
    if (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// Delete the last node of the Linked List
void deleteAtEnd(Node*& head) {
    if (head) {
        if (!head->next) {
            delete head;
            head = NULL;
        } else {
            Node* temp = head;
            while (temp->next && temp->next->next) {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = NULL;
        }
    }
}

// Delete a node at a specific position
void deleteAtPosition(Node*& head, int position) {
    if (!head) return;

    if (position == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (!temp || !temp->next) {
        cout << "Position out of range\n";
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

// Delete all nodes in the Linked List
void deleteAll(Node*& head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// Selection Sort by customer name (Linked List)
void selectionSort(Node* head) {
    for (Node* i = head; i != NULL; i = i->next) {
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (strcmp(i->data.customer_name, j->data.customer_name) > 0) {
                swap(i->data, j->data);
            }
        }
    }
}

// Bubble Sort by customer name (Linked List)
void bubbleSort(Node* head) {
    bool swapped;
    do {
        swapped = false;
        for (Node* temp = head; temp && temp->next; temp = temp->next) {
            if (strcmp(temp->data.customer_name, temp->next->data.customer_name) > 0) {
                swap(temp->data, temp->next->data);
                swapped = true;
            }
        }
    } while (swapped);
}

// Insertion Sort by customer name (Linked List)
void insertionSort(Node*& head) {
    if (!head) return;

    Node* sorted = NULL;
    Node* temp = head;

    while (temp) {
        Node* next = temp->next;
        if (!sorted || strcmp(sorted->data.customer_name, temp->data.customer_name) >= 0) {
            temp->next = sorted;
            sorted = temp;
        } else {
            Node* curr = sorted;
            while (curr->next && strcmp(curr->next->data.customer_name, temp->data.customer_name) < 0) {
                curr = curr->next;
            }
            temp->next = curr->next;
            curr->next = temp;
        }
        temp = next;
    }

    head = sorted;
}

// Linear Search by phone number (Linked List)
Node* linearSearch(Node* head, int phone_number) {
    Node* temp = head;
    while (temp) {
        if (temp->data.phone_number == phone_number)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

// Binary Search by phone number (Linked List)
Node* binarySearch(Node* head, int phone_number) {
    Node* temp = head;
    Node* arr[3];
    int i = 0;

    while (temp) {
        arr[i++] = temp;
        temp = temp->next;
    }

    int low = 0, high = i - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid]->data.phone_number == phone_number)
            return arr[mid];
        else if (arr[mid]->data.phone_number < phone_number)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return NULL;
}

// Display all customers (Linked List)
void display(Node* head) {
    Node* temp = head;

        cout<<left;
        cout<<setfill('-')<<setw(15)<<"Name"<<setw(12)<<"Id"<<setw(10)<<"sex"<<setw(15)<<"pho_no"<<setw(10)<<"age"<<endl;
    while (temp) {
        cout << setw(15) << temp->data.customer_name << setw(12) << temp->data.customer_id
             << setw(10)<< temp->data.sex << setw(15) << temp->data.phone_number
             << setw(10)<< temp->data.age << endl;
        temp = temp->next;
    }
}

// Array List Functions

// Insert at the beginning of the Array List
void insertAtBeginning(Customer arr[], int& size, Customer customer) {
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = customer;
    size++;
}

// Insert at the end of the Array List
void insertAtEnd(Customer arr[], int& size, Customer customer) {
    arr[size++] = customer;
}

// Insert at a specific position in the Array List
void insertAtPosition(Customer arr[], int& size, Customer customer, int position) {
    if (position < 0 || position > size) {
        cout << "Invalid position\n";
        return;
    }

    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = customer;
    size++;
}

// Delete the first element of the Array List
void deleteAtBeginning(Customer arr[], int& size) {
    if (size == 0) return;
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

// Delete the last element of the Array List
void deleteAtEnd(Customer arr[], int& size) {
    if (size == 0) return;
    size--;
}

// Delete at a specific position in the Array List
void deleteAtPosition(Customer arr[], int& size, int position) {
    if (position < 0 || position >= size) {
        cout << "Invalid position\n";
        return;
    }
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

// Delete all elements of the Array List
void deleteAll(Customer arr[], int& size) {
    size = 0;
}

// Selection Sort by customer name (Array List)
void selectionSortArray(Customer arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < size; j++) {
            if (strcmp(arr[j].customer_name, arr[minIdx].customer_name) < 0) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

// Bubble Sort by customer name (Array List)
void bubbleSortArray(Customer arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (strcmp(arr[j].customer_name, arr[j + 1].customer_name) > 0) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Insertion Sort by customer name (Array List)
void insertionSortArray(Customer arr[], int size) {
    for (int i = 1; i < size; i++) {
        Customer key = arr[i];
        int j = i - 1;
        while (j >= 0 && strcmp(arr[j].customer_name, key.customer_name) > 0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Linear Search by phone number (Array List)
int linearSearchArray(Customer arr[], int size, int phone_number) {
    for (int i = 0; i < size; i++) {
        if (arr[i].phone_number == phone_number) {
            return i;
        }
    }
    return -1;
}

// Binary Search by phone number (Array List)
int binarySearchArray(Customer arr[], int size, int phone_number) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid].phone_number == phone_number) {
            return mid;
        }
        if (arr[mid].phone_number < phone_number) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

// Display all customers (Array List)
void displayArray(Customer arr[], int size) {

        cout<<left;
        cout<<setfill('-')<<setw(15)<<"Name"<<setw(10)<<"Id"<<setw(10)<<"sex"<<setw(15)<<"pho_no"<<setw(10)<<"age"<<endl;
    for (int i = 0; i < size; i++) {
        cout << setw(15) << arr[i].customer_name <<setw(10) << arr[i].customer_id
             << setw(10) << arr[i].sex << setw(15) << arr[i].phone_number
             << setw(10) << arr[i].age << endl;
    }
}

// Main program for menu-driven interface
int main() {
    cout << "DATA STRUCTURE AND ALGORITHM GROUP PROJECT" << endl;
    cout << "THIS PROJECT TITTLE IS CUSTOMER RELATIONSHIP MANAGEMEMT SYSTEM"  << endl;

    cout<<setfill('=')<<setw(20)<<endl;

    cout <<" GROUP MEMMBERS "<<endl;
    cout << left;
    cout<<"   "<<setfill('-')<<setw(27)<<"Name"<<"Id_num"<<endl;
    cout<<setw(27)<<"1 :Tewodros kassa"<<"01702 /15"<<endl;
    cout<<setw(27)<<"2 :Teklemariam Mihret"<<"01679 /15"<<endl;
    cout<<setw(27)<<"3 :Yohannes Haile"<<"02778 /15"<<endl;
    cout<<setw(27)<<"4 :Lielt Asnake"<<"02487 /15"<<endl;
    cout<<setw(27)<<"5 :Haymanot Belete"<<"02381 /15"<<endl;
    Node* linkedListHead = NULL;
    Customer arrayList[3];
    int linkedListSize = 0, arrayListSize = 0;
    int choice, position, phoneNumber, index;
    Customer tempCustomer;

    do {
        cout << "\nCustomer Management System\n";
        cout << "1. Linked List Operations\n";
        cout << "2. Array List Operations\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            // Linked List Menu
            do {
                cout << "\nLinked List Operations\n";
                cout << "1. Insert Customer\n";
                cout << "2. Delete Customer\n";
                cout << "3. Sort Customers\n";
                cout << "4. Search Customer\n";
                cout << "5. Display Customer Data\n";
                cout << "6. Exit Linked List\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice) {
                case 1:
                    cout << "\nInsert Customer at \n1) Begin \n2) End \n3) Position: "<<endl;
                    cout<<"enter your choice: ";
                    int option;
                    cin >> option;
                    cout << "Enter customer name: ";
                    cin >> tempCustomer.customer_name;
                    cout << "Enter customer ID: ";
                    cin >> tempCustomer.customer_id;
                    cout << "Enter customer sex (M/F): ";
                    cin >> tempCustomer.sex;
                    cout << "Enter customer phone number: ";
                    cin >> tempCustomer.phone_number;
                    cout << "Enter customer age: ";
                    cin >> tempCustomer.age;

                    if (option == 1) insertAtBeginning(linkedListHead, tempCustomer);
                    else if (option == 2) insertAtEnd(linkedListHead, tempCustomer);
                    else if (option == 3) {
                        cout << "Enter position: ";
                        cin >> position;
                        insertAtPosition(linkedListHead, tempCustomer, position);
                    }
                    break;

                case 2:
                    cout << "\nDelete Customer at \n1) Begin \n2) End \n3) Position \n4) All: "<<endl;
                    cout<<"enter your choice: ";
                    cin >> option;
                    if (option == 1) deleteAtBeginning(linkedListHead);
                    else if (option == 2) deleteAtEnd(linkedListHead);
                    else if (option == 3) {
                        cout << "Enter position: ";
                        cin >> position;
                        deleteAtPosition(linkedListHead, position);
                    }
                    else if (option == 4) deleteAll(linkedListHead);
                    break;

                case 3:
                    cout << "\nSort Customers by \n1) Selection Sort \n2) Bubble Sort \n3) Insertion Sort: "<<endl;
                    cout<<"enter your choice: ";
                    cin >> option;
                    if (option == 1) selectionSort(linkedListHead);
                    else if (option == 2) bubbleSort(linkedListHead);
                    else if (option == 3) insertionSort(linkedListHead);
                    break;

                case 4:
                    cout << "\nSearch Customer by \n1) Linear Search \n2) Binary Search: "<<endl;
                    cout<<"enter your choice: ";
                    cin >> option;
                    cout << "Enter customer phone number to search: ";
                    cin >> phoneNumber;
                    if (option == 1) {
                        Node* result = linearSearch(linkedListHead, phoneNumber);
                        if (result) cout << "Customer found: " << result->data.customer_name << endl;
                        else cout << "Customer not found.\n";
                    } else if (option == 2) {
                        Node* result = binarySearch(linkedListHead, phoneNumber);
                        if (result) cout << "Customer found: " << result->data.customer_name << endl;
                        else cout << "Customer not found.\n";
                    }
                    break;

                case 5:
                    cout << "\nDisplaying Customer Data:\n";
                    display(linkedListHead);
                    break;

                case 6:
                    cout << "Exiting Linked List Operations\n";
                    break;

                default:
                    cout << "Invalid choice. Try again.\n";
                }
            } while (choice != 6);
            break;

        case 2:
            // Array List Menu
            do {
                cout << "\nArray List Operations\n";
                cout << "1. Insert Customer\n";
                cout << "2. Delete Customer\n";
                cout << "3. Sort Customers\n";
                cout << "4. Search Customer\n";
                cout << "5. Display Customer Data\n";
                cout << "6. Exit Array List\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice) {
                case 1:
                    cout << "\nInsert Customer at \n1) Begin \n2) End \n3) Position: "<<endl;
                    cout<<"enter your choice: ";
                    int option;
                    cin >> option;
                    cout << "Enter customer name: ";
                    cin >> tempCustomer.customer_name;
                    cout << "Enter customer ID: ";
                    cin >> tempCustomer.customer_id;
                    cout << "Enter customer sex (M/F): ";
                    cin >> tempCustomer.sex;
                    cout << "Enter customer phone number: ";
                    cin >> tempCustomer.phone_number;
                    cout << "Enter customer age: ";
                    cin >> tempCustomer.age;

                    if (option == 1) insertAtBeginning(arrayList, arrayListSize, tempCustomer);
                    else if (option == 2) insertAtEnd(arrayList, arrayListSize, tempCustomer);
                    else if (option == 3) {
                        cout << "Enter position: ";
                        cin >> position;
                        insertAtPosition(arrayList, arrayListSize, tempCustomer, position);
                    }
                    break;

                case 2:
                    cout << "\nDelete Customer at \n1) Begin \n2) End \n3) Position \n4) All: "<<endl;
                    cout<<"enter your choice: ";
                    cin >> option;
                    if (option == 1) deleteAtBeginning(arrayList, arrayListSize);
                    else if (option == 2) deleteAtEnd(arrayList, arrayListSize);
                    else if (option == 3) {
                        cout << "Enter position: ";
                        cin >> position;
                        deleteAtPosition(arrayList, arrayListSize, position);
                    }
                    else if (option == 4) deleteAll(arrayList, arrayListSize);
                    break;

                case 3:
                    cout << "\nSort Customers by \n1) Selection Sort \n2) Bubble Sort \n3) Insertion Sort: "<<endl;
                    cout<<"enter your choice: ";
                    cin >> option;
                    if (option == 1) selectionSortArray(arrayList, arrayListSize);
                    else if (option == 2) bubbleSortArray(arrayList, arrayListSize);
                    else if (option == 3) insertionSortArray(arrayList, arrayListSize);
                    break;

                case 4:
                    cout << "\nSearch Customer by \n1) Linear Search \n2) Binary Search: "<<endl;
                    cout<<"enter your choice: ";
                    cin >> option;
                    cout << "Enter customer phone number to search: ";
                    cin >> phoneNumber;
                    if (option == 1) {
                        index = linearSearchArray(arrayList, arrayListSize, phoneNumber);
                        if (index != -1) cout << "Customer found: " << arrayList[index].customer_name << endl;
                        else cout << "Customer not found.\n";
                    } else if (option == 2) {
                        index = binarySearchArray(arrayList, arrayListSize, phoneNumber);
                        if (index != -1) cout << "Customer found: " << arrayList[index].customer_name << endl;
                        else cout << "Customer not found.\n";
                    }
                    break;

                case 5:
                    cout << "\nDisplaying Customer Data:\n";
                    displayArray(arrayList, arrayListSize);
                    break;

                case 6:
                    cout << "Exiting Array List Operations\n";
                    break;

                default:
                    cout << "Invalid choice. Try again.\n";
                }
            } while (choice != 6);
            break;

        case 3:
            cout << "Exiting Customer Management System\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}




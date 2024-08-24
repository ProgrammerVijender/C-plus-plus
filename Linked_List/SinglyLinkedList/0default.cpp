// #include <iostream>
// using namespace std;

// class Node {
//     int data;
//     Node* next;
// };

// void printList(Node* head) {
//     while (head != nullptr) {
//         std::cout << head->data << " ";
//         head = head->next;
//     }
// }

// int main() {
//     Node* head = nullptr;
//     Node* second = nullptr;
//     Node* third = nullptr;

//     head->data = 1;
//     head->next = second;

//     second->data = 2;
//     second->next = third;

//     third->data = 3;
//     third->next = nullptr;

//     printList(head);

//     return 0;
// }


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Allocate nodes in the heap
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assign data and link nodes
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;

    // Print the linked list
    printList(head);

    // Free allocated memory
    delete head;
    delete second;
    delete third;

    return 0;
}

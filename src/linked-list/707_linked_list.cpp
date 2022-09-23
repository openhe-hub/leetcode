#include <iostream>

using namespace std;

struct Node {
    int val;
    Node *next;
};

class MyLinkedList {
    Node *header;
    int length;
public:
    MyLinkedList() {
        length = 0;
        header = nullptr;
    }

    int get(int index) {
        if (index < 0 || index >= length) return -1;
        int cnt = 0;
        Node *curr = header;
        while (cnt != index) {
            curr = curr->next;
            cnt++;
        }
        return curr->val;
    }

    void addAtHead(int val) {
        Node *new_header = new Node{val, header};
        header = new_header;
        length++;
    }

    void addAtTail(int val) {
        if (!length){
            header=new Node{val, nullptr};
            length++;
        }else{
            Node *curr = header;
            while (curr->next != nullptr) {
                curr = curr->next;
            }
            Node *new_tail = new Node{val, nullptr};
            curr->next = new_tail;
            length++;
        }

    }

    void addAtIndex(int index, int val) {
        if (index <= 0) addAtHead(val);
        else if (index == length) addAtTail(val);
        else if (index>length) return;
        else {
            int cnt = 1;
            Node *prev = header;
            Node *curr = header->next;
            while (cnt != index) {
                curr = curr->next;
                prev = prev->next;
                cnt++;
            }
            Node *new_node = new Node{val, curr};
            prev->next=new_node;
            length++;
        }
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= length) return;
        if (index == 0) {
            header = header->next;
            length--;
            return;
        } else {
            int cnt = 1;
            Node *prev = header;
            Node *curr = header->next;
            while (cnt != index) {
                curr = curr->next;
                prev = prev->next;
                cnt++;
            }
            prev->next = curr->next;
            length--;
        }
    }
};

int main() {
    MyLinkedList *linkedList = new MyLinkedList();
    linkedList->addAtTail(1);
    cout << linkedList->get(0) << endl;
    return 0;
}
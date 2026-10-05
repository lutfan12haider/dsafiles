#include <iostream>

class StackDS {

private:
    struct Node {
        int data;
        Node* next;
        Node(int data) : data(data), next(nullptr) {}

    };

public:
    class Stack {
    private:
        Node* head;
        
    public:
        Stack() : head(nullptr) {}

        void push(int data) {
            Node* newNode = new Node(data);
            
            if (head == nullptr) {
                head = newNode;
                return;
            }
            newNode->next = head;
            head = newNode;
        }

        bool isEmpty() {
            return head == nullptr;
        }

        int pop() {
            if (isEmpty()) {
                return -1;
            }

            Node* top = head;
            int data = top->data;
            head = head->next;
            delete top;
            return data;
        }



        int peek() {
            if (isEmpty()) {
                return -1;
            }
            return head->data;
        }


        ~Stack() {
            while (head != nullptr) {
                Node* temp = head;
                head = head->next;
                
                delete temp;
            }
        }
    };

    static void main() {
        Stack stack;
        
        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);

        while (!stack.isEmpty()) {
            std::cout << stack.peek() << std::endl;
            stack.pop();
        }
    }
};



int main() {
    StackDS::main();

    return 0;
}
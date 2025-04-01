#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    // Demonstrating std::list
    list<int> myList = {1, 2, 3, 4, 5};
    cout << "Contents of list: ";
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;
    // Demonstrating std::queue
    queue<string> myQueue;
    myQueue.push("Alice");
    myQueue.push("Bob");
    myQueue.push("Charlie");
    cout << "Queue front: " << myQueue.front() << ", back: " << myQueue.back() << endl;
    myQueue.pop(); // Removing the front element
    cout << "After pop, queue front: " << myQueue.front() << endl;
    // Demonstrating std::stack
    stack<int> myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    cout << "Top of stack: " << myStack.top() << endl;
    myStack.pop(); // Removing the top element
    cout << "After pop, top of stack: " << myStack.top() << endl;
    // Demonstrating std::vector
    vector<int> myVector = {10, 20, 30, 40, 50};
    cout << "Contents of vector: ";
    for (int val : myVector)
    {
        cout << val << " ";
    }
    cout << endl;
    // Adding and modifying elements in vector
    myVector.push_back(60);
    cout << "After push_back, vector: ";
    for (int val : myVector)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}

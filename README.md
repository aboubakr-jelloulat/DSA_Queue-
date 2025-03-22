# 📚 Queue Data Structure with Linked List

Welcome to the **Queue Implementation using a Doubly Linked List** repository! 🚀 This project provides a **custom implementation of a queue** using a **doubly linked list** in C++. The queue follows the **FIFO (First-In-First-Out) principle**, ensuring efficient insertion and deletion of elements. 📥📤

---

## 🔍 What is a Queue?

A **queue** is a linear data structure that follows the **FIFO (First In, First Out) principle**:
- **Enqueue (Push)**: Insert elements at the **back** of the queue.
- **Dequeue (Pop)**: Remove elements from the **front** of the queue.

Think of it like a **line at a ticket counter** – the first person in the line gets served first. 🎟️

### 🚀 Queue in C++ STL
C++ provides a built-in **`queue`** container in the Standard Template Library (STL):

```cpp
#include <queue>
#include <iostream>

using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl; // 10
    cout << "Back: " << q.back() << endl;  // 30

    q.pop();
    cout << "After pop, Front: " << q.front() << endl; // 20

    return 0;
}
```

But **what if you want to implement your own queue?** That's where this project comes in! 💡

---

## 🛠️ Custom Queue Implementation

This project implements a queue using a **doubly linked list** instead of an array. The **linked list approach** provides **dynamic memory allocation** and avoids the **fixed size limitations** of an array-based queue. 🔄

### 📌 Features
| Feature | Description |
|---------|-------------|
| ✅ `push(T item)` | Adds an element at the back of the queue 📥 |
| ❌ `pop()` | Removes the front element of the queue 🗑️ |
| 🔍 `front()` | Returns the first element without removing it 🔎 |
| 🎯 `back()` | Returns the last element without removing it 🎯 |
| 🔄 `Reverse()` | Reverses the queue order 🔃 |
| 📏 `Size()` | Returns the number of elements in the queue 📊 |
| 📌 `UpdateItem(index, newValue)` | Updates the value at a specific position ✏️ |
| 🏁 `IsEmpty()` | Checks if the queue is empty ⚠️ |
| 🖨️ `Print()` | Displays all elements of the queue 📝 |
| 🧹 `Clear()` | Removes all elements from the queue 🗑️ |

---

## 🏗️ How It Works

Our queue is implemented using **composition**, meaning the `clsMyQueue` class contains an instance of `clsDblLinkedList<T>`. This approach ensures:
- **Encapsulation** 🔒 (Queue operations are built on top of a linked list)
- **Modularity** ⚙️ (The queue and linked list can be used separately)
- **Reusability** 🔄 (Existing linked list operations enhance the queue)

```cpp
class clsMyQueue {
protected:
    clsDblLinkedList<T> _MyList; // Using a doubly linked list internally

public:
    void push(T item) { _MyList.InsertAtEnd(item); }
    void pop() { _MyList.DeleteFirstNode(); }
    T front() { return _MyList.GetItem(0); }
    T back() { return _MyList.GetItem(Size() - 1); }
    int Size() { return _MyList.Size(); }
    bool IsEmpty() { return _MyList.IsEmpty(); }
    void Print() { _MyList.PrintList(); }
};
```

---

## 🔧 Installation & Usage

### 1️⃣ Clone the Repository
```sh
git clone https://github.com/aboubakr-jelloulat/DSA_Queue-.git
cd DSA_Queue-
```

### 2️⃣ Include the Header File
```cpp
#include "clsMyQueue.h"
```

### 3️⃣ Example Usage
```cpp
#include "clsMyQueue.h"

int main() {
    clsMyQueue<int> myQueue;
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.Print(); // Output: 10 20 30

    myQueue.pop();
    cout << "Front: " << myQueue.front() << endl; // 20

    return 0;
}
```

---

## 🏆 Why Use This Project?

✅ **Dynamic Memory Management**: Avoids fixed-size limitations of array-based queues.
✅ **Efficient Operations**: O(1) for push and pop operations.
✅ **Reusable Code**: Built on top of a doubly linked list for maximum flexibility.
✅ **Ideal for Learning**: Great for understanding linked lists and queues in depth.

---

## 📜 License

@ programming Advices

Happy coding! 🚀


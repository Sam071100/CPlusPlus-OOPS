// Power of List STL for using doubly Linked List data strucutre

#include <bits/stdc++.h>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
      cout <<*it<<" ";
    }
    cout <<endl;
}

int main()
{
    // List is doubly linked list which has all the propety of Linked list
    // When we want the insertion and deletion to be fast --> linked list
    // When we want the access to be fast ---> vector
    
    list<int> list1;  // List of 0 Length
    //list<int> list2(7); --> Empty list of size 7

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    list<int>::iterator itr;
    itr = list1.begin();
    itr++;
    cout << *itr<<endl;
    display(list1);

    list<int> list2(3); //--> Empty list of size 7
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 2;
    iter++;
    // Sorting the List
    list1.sort();
    display(list1);

// Removing element from the list
    list2.pop_back();
    list2.pop_front();

    list1.remove(1); // Takes the value to be removed and removes all its ocurrences
    display(list1);
    display(list2);

    // Merging the two list -> Merge Sort
    list1.merge(list2);
    cout <<"List1 after merging: ";
    display(list1);

    // Sorting and Merging:
    list2.push_front(10);
    list2.push_front(20);
    list2.push_front(35);
    list2.push_front(49);
    display(list2);

    list1.sort();
    list2.sort();

    list2.merge(list1);
    cout <<"List2 after sorting and merging: ";
    display(list2);
    cout <<"Displaying list1 after merging list1 into list2: ";
    display(list1); // Becomes EMPTY

    // Reversing the List2
    list2.reverse();
    display(list2);

    return 0;
}


/*
Let me list down the differences:

Deque manages its elements with a dynamic array, provides random access, and has almost the same interface as a vector.
List manages its elements as a doubly linked list and does not provide random access.
Deque provides Fast insertions and deletions at both the end and the beginning. Inserting and deleting elements in the middle is relatively slow because all elements up to either of both ends may be moved to make room or to fill a gap.
In List, inserting and removing elements is fast at each position, including both ends.
Deque: Any insertion or deletion of elements other than at the beginning or end invalidates all pointers, references, and iterators that refer to elements of the deque.
List: Inserting and deleting elements does not invalidate pointers, references, and iterators to other elements.
Complexity

             Insert/erase at the beginning       in middle        at the end

Deque:       Amortized constant                  Linear           Amortized constant
List:        Constant                            Constant         Constant

*/

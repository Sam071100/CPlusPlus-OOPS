// "Introduction to STL (Standard Template Library)"
/*
--> Competitive Programming, Limited Time, Sort, Search is benieficial then

* STL is Library of generic classes and functions.
Why Use STL????
-> Resuse: well Tested Components 
-> Time Savings!

History of STL: 
HP Company -> Employees: 1. Alexendar 2.Menglee ----> CREDITS

Components of STL:
  1. Containers (is an object which stores data) ex: Vector, uses template classes
  2. Algorithms (procedure to process and store data)
  3. Iterators (object "not pointers" which points to an element of a container)

  Containers are of three types -->

  1. Sequence containers -> vector, List, dequeue {Linear access} ---> all types of iterator are supported
  2. Associative containers -> set, multiset, map, multimap  {uses BST to store the data, direct access} ----> Only Bidirectional iterator are supported
  3. Derived Containers -> stack, queues, trees, priority queue {Real World Modelling} ---> No Iterators are supported


  STL = Containers + Algo + Iterators

  1. Sequence Containers:
     1. vector -> Random access ->fast (contigous memory), Random access iterator is supported
               -> insertion & deletion -> slow (shift all the elements)
               -> insertion and deletion at the end -> fast

    2. List -> Random access -> slow (memory is not contigous), Bidirectional iterator is supported
            -> Middle Insertion or deletion -> fast
            -> Insertion/deletion at end or first -> fast

    3. Deque -> Random access iterator is supported

    To Be Continued........
      
  2. Associative containers: {all operations are fast in O(log n) time except random access}
      
*/
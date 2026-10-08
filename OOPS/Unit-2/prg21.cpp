//it cannot be copied to another pointer, but its ownership can be transferred
//default choice for single owner resourses or function return
//get() returns the address of unique pointer variable/object
//SHARED POINTER: special pointer- allows multiple pointer to share ownership of the same object. it is automatically destroyed or reset when the last shared_ptr pointing to the object is destroyed or reset
//release() release ownership without deleting the object
//reset() delete currennt object n optionally points to the new one
//NULL POINTER: was introduced in cpp11.
//implemeent a self referential class to implement a singly linked list . first implement it using raw pointers and null ponter, then redesign the soluton using unique pointers and discuss the changes required in ownership managemnet. finally demonstrate shared pointer in a scenerio where multiple objects share the ownersip of the same resource
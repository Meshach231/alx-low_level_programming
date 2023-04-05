About this project:
This is the continuation of singly linked list project which comprises on how to use linked list.

Description of tasks files:
1. lists.h: header file containing definitions and prototype for all types and functions written for the project.

2. 0-print_listint.c: c function that prints all the elements of a listint_t linked list.
   - Returns the number of nodes in the listint_t list.

3. 1-listint_len.c: c function that returns the number of elements in a listint_t link list.

4. 2-add_node int.c: c function that adds a new node at thew begining of a listint_t linked list.
   - if the function fails - return NULL.
   - otherwise - returns the address of a new element.

5. 3-add_nodeint_end.c: c function that adds a new node at the end of a listint_t linked list.
   - if the function fails - return NULL.
   - otherwise - returns the address of a new element

6. 4-free_listint.c: c function that frees a listint_t linked list.

7. 5-free_lintint2.c: c function that frees a listint_t linked list.
   - sets the head to NULL.

8. 6-pop_listint.c: C function that deletes the head node of a listint_t linked list.
   - If the linked list is empty - returns 0.
   - Otherwise - returns the head node's data (n).

9. 7-get_nodeint.c: C function that locates a given node of a listint_t linked list.
    - If the node does not exist - returns NULL.
    - Otherwise - returns the located node.

10. 8-sum_listint.c: C function that returns the sum of all the data (n) of a listint_t linked list.
    - If the linked list is empty - returns 0.
    - Otherwise - returns the sum of all the data (n).

11. 9-insert_nodeint.c: C function that inserts a new node to a listint_t linked list at a given position.
    - If it is not possible to add the new node at index idx, or the function fails - returns NULL.
    - Otherwise - returns the address of the new node.

12. 10-delete_nodeint.c: C function that deletes the node at a given index of a listint_t linked list.
    - If the function succeeds - returns 1.
    - If the function fails - returns -1.

13. 100-reverse_listint.c** - function that reverses a listint_t linked list with the specifications:
Not allowed to use more than 1 loop
    - Not allowed to use malloc, free or arrays
    - Can only declare a maximum of two variables
    - Returns a pointer to the first node of the reversed list.

14. 101-print_listint_safe.c** - function that prints a listint_t linked list with the specifications:
Can print lists with a loop
    - Should go through the list only once
    - If the function fails, exit the program with status 98
    - Returns the number of nodes in the listint_t list.

15. 102-free_listint_safe.c** - function that frees a listint_t list with the specifications:
Can free lists with a loop
    - Should go though the list only once
    - Sets the head to NULL
    - Returns the size of the list that was freed.

16. 103-find_loop.c** - function that finds the loop in a listint_t list with the specifications:
    - Not allowed to use malloc, free or arrays
    - Can only declare a maximum of two variables
    - If no loop is found - returns NULL.
    - Otherwise - returns the address of the node where the loop starts.


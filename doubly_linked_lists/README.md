Doubly Linked Lists
What is a Doubly Linked List?
A doubly linked list is a linear data structure consisting of nodes, where each node has three main components:

Data: The value stored in the node (e.g., an integer).
Pointer to the next node (next): This links the current node to the next node in the sequence.
Pointer to the previous node (prev): This links the current node to the preceding node in the sequence.
Key Features:
Traversal can be performed in both forward and backward directions.
Insertion and deletion of nodes can be done efficiently at any position without shifting other elements, unlike arrays.
The head (first node) has prev set to NULL, and the tail (last node) has next set to NULL.
Example of a Doubly Linked List
A list containing the numbers 1, 2, and 3 would look like this:

css
Copier le code
NULL <- [1] <-> [2] <-> [3] -> NULL
How to Use Doubly Linked Lists
Common Operations:
Insertion:

At the beginning.
At the end.
At a specific position.
Deletion:

From the beginning.
From the end.
From a specific position.
Traversal:

Forward (from head to tail).
Backward (from tail to head).
Accessing Nodes:

Search for a node at a specific index or with specific data.
Additional Operations:

Calculate the sum of all node data.
Count the number of nodes in the list.
Example Usage in C
1. Traversing Forward
c
Copier le code
void traverse_forward(dlistint_t *head) {
    while (head != NULL) {
        printf("%d\n", head->n);
        head = head->next;
    }
}
2. Inserting at the Beginning
c
Copier le code
dlistint_t *add_node_beginning(dlistint_t **head, int data) {
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (!new_node) return NULL;

    new_node->n = data;
    new_node->prev = NULL;
    new_node->next = *head;

    if (*head) (*head)->prev = new_node;
    *head = new_node;

    return new_node;
}
Implementation Tips:
Always initialize the prev and next pointers to NULL for newly created nodes.
Keep track of the head and tail pointers to simplify insertion at the ends of the list.
Free allocated memory properly to avoid memory leaks.

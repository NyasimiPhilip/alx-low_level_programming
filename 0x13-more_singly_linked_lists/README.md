 <h1>C - More Singly Linked Lists Project</h1>
    <h2>Header File 📁</h2>
    <ul>
        <li><strong>lists.h:</strong> Header file containing definitions and prototypes for all types and functions written for the project.</li>
         <h2>Type/File Definitions/Prototypes</h2>
    <table>
        <tr>
            <th>Type/File</th>
            <th>Definition/Prototype</th>
        </tr>
        <tr>
            <td>struct listint_s</td>
            <td>int n<br>struct listint_s *next</td>
        </tr>
        <tr>
            <td>typedef listint_t struct listint_s</td>
        </tr>
        <tr>
            <td>0-print_listint.c</td>
            <td>size_t print_listint(const listint_t *h);</td>
        </tr>
        <tr>
            <td>1-listint_len.c</td>
            <td>size_t listint_len(const listint_t *h);</td>
        </tr>
        <tr>
            <td>2-add_nodeint.c</td>
            <td>listint_t *add_nodeint(listint_t **head, const int n);</td>
        </tr>
        <tr>
            <td>3-add_nodeint_end.c</td>
            <td>listint_t *add_nodeint_end(listint_t **head, const int n);</td>
        </tr>
        <tr>
            <td>4-free_listint.c</td>
            <td>void free_listint(listint_t *head);</td>
        </tr>
        <tr>
            <td>5-free_listint2.c</td>
            <td>void free_listint2(listint_t **head);</td>
        </tr>
        <tr>
            <td>6-pop_listint.c</td>
            <td>int pop_listint(listint_t **head);</td>
        </tr>
        <tr>
            <td>7-get_nodeint.c</td>
            <td>listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);</td>
        </tr>
        <tr>
            <td>8-sum_listint.c</td>
            <td>int sum_listint(listint_t *head);</td>
        </tr>
        <tr>
            <td>9-insert_nodeint.c</td>
            <td>listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);</td>
        </tr>
        <tr>
            <td>10-delete_nodeint.c</td>
            <td>int delete_nodeint_at_index(listint_t **head, unsigned int index);</td>
        </tr>
        <tr>
            <td>100-reverse_listint.c</td>
            <td>listint_t *reverse_listint(listint_t **head);</td>
        </tr>
        <tr>
            <td>101-print_listint_safe.c</td>
            <td>size_t print_listint_safe(const listint_t *head);</td>
        </tr>
        <tr>
            <td>102-free_listint_safe.c</td>
            <td>size_t free_listint_safe(listint_t **h);</td>
        </tr>
        <tr>
            <td>103-find_loop.c</td>
            <td>listint_t *find_listint_loop(listint_t *head);</td>
        </tr>
    </table>
    </ul>
    <h2>Tasks 📃</h2>
    <ol>
        <li><strong>Print list</strong></li>
        <p><strong>0-print_listint.c:</strong> C function that prints all the elements of a listint_t linked list. Returns the number of nodes in the listint_t list.</p>
        <li><strong>List length</strong></li>
        <p><strong>1-listint_len.c:</strong> C function that returns the number of elements in a listint_t linked list.</p>
        <li><strong>Add node</strong></li>
        <p><strong>2-add_nodeint.c:</strong> C function that adds a new node at the beginning of a listint_t linked list. If the function fails - returns NULL. Otherwise - returns the address of the new element.</p>
        <li><strong>Add node at the end</strong></li>
        <p><strong>3-add_nodeint_end.c:</strong> C function that adds a new node at the end of a listint_t linked list. If the function fails - returns NULL. Otherwise - returns the address of the new element.</p>
        <li><strong>Free list</strong></li>
        <p><strong>4-free_listint.c:</strong> C function that frees a listint_t linked list.</p>
        <li><strong>Free</strong></li>
        <p><strong>5-free_listint2.c:</strong> C function that frees a listint_t linked list. Sets the head to NULL.</p>
        <li><strong>Pop</strong></li>
        <p><strong>6-pop_listint.c:</strong> C function that deletes the head node of a listint_t linked list. If the linked list is empty - returns 0. Otherwise - returns the head node's data (n).</p>
        <li><strong>Get node at index</strong></li>
        <p><strong>7-get_nodeint.c:</strong> C function that locates a given node of a listint_t linked list. If the node does not exist - returns NULL. Otherwise - returns the located node.</p>
        <li><strong>Sum list</strong></li>
        <p><strong>8-sum_listint.c:</strong> C function that returns the sum of all the data (n) of a listint_t linked list. If the linked list is empty - returns 0. Otherwise - returns the sum of all the data (n).</p>
        <li><strong>Insert</strong></li>
        <p><strong>9-insert_nodeint.c:</strong> C function that inserts a new node to a listint_t linked list at a given position. If it is not possible to add the new node at index idx, or the function fails - returns NULL. Otherwise - returns the address of the new node.</p>
        <li><strong>Delete at index</strong></li>
        <p><strong>10-delete_nodeint.c:</strong> C function that deletes the node at a given index of a listint_t linked list. If the function succeeds - returns 1. If the function fails - returns -1.</p>
        <li><strong>Reverse list</strong></li>
        <p><strong>100-reverse_listint.c:</strong> C function that reverses a listint_t linked list using a maximum of one loop and two variables. Returns a pointer to the first node of the reversed list.</p>
        <li><strong>Print (safe version)</strong></li>
        <p><strong>101-print_listint_safe.c:</strong> C function that prints a listint_t linked list safely (i.e., can free lists containing loops). Returns the number of nodes in the listint_t list.</p>
        <li><strong>Free (safe version)</strong></li>
        <p><strong>102-free_listint_safe.c:</strong> C function that frees a listint_t linked list safely (i.e., can free lists containing loops). Returns the size of the list that was freed. Sets the head to NULL.</p>
        <li><strong>Find the loop</strong></li>
        <p><strong>103-find_loop.c:</strong> C function that finds the loop contained in a listint_t linked list using a maximum of two variables. If no loop is found - returns NULL. Otherwise - returns the address of the node where the loop starts.</p>
    </ol>

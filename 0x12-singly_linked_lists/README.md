<h1>C - Singly Linked Lists Project</h1>
    <p>Singly linked lists in C(linked lists versus arrays)</p>
    <h2>Header File 📁</h2>
    <ul>
        <li><strong>lists.h:</strong> Header file containing definitions and prototypes for all types and functions written for the project.</li>
        <table>
            <tr>
                <th>Type/File</th>
                <th>Definition/Prototype</th>
            </tr>
            <tr>
                <td>struct list_s</td>
                <td>char *str<br>unsigned int len<br>struct list_s *next</td>
            </tr>
            <tr>
                <td>typedef list_t struct list_s</td>
            </tr>
        </table>
    </ul>
    <h2>Tasks 📃</h2>
    <ol>
        <li><strong>Print list</strong></li>
        <p><strong>0-print_list.c:</strong> C function that prints all the elements of a list_t list. If str is NULL, the function prints [0] (nil).</p>
        <li><strong>List length</strong></li>
        <p><strong>1-list_len.c:</strong> C function that returns the number of elements in a linked list_t list.</p>
        <li><strong>Add node</strong></li>
        <p><strong>2-add_node.c:</strong> C function that adds a new node at the beginning of a list_t list. If the function fails - returns NULL. Otherwise - returns the address of the new element.</p>
        <li><strong>Add node at the end</strong></li>
        <p><strong>3-add_node_end.c:</strong> C function that adds a new node at the end of a linked list_t list. If the function fails - returns NULL. Otherwise - returns the address of the new element.</p>
        <li><strong>Free list</strong></li>
        <p><strong>4-free_list.c:</strong> C function that frees a list_t list.</p>
        <li><strong>The Hare and the Tortoise</strong></li>
        <p><strong>100-first.c:</strong> C function that prints You're beat! and yet, you must allow,<br>I bore my house upon my back!<br>before the main function is executed.</p>
        <li><strong>Real programmers can write assembly code in any language</strong></li>
        <p><strong>101-hello_holberton.asm:</strong> 64-but assembly program that prints Hello, Holberton followed by a new line using only the printf function without interrupts.</p>
    </ol>

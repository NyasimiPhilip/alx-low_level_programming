<h1>C - Function Pointers Project</h1>
    <p>In this project, I learned about function pointers in C - what they hold, where they point in virtual memory, and how to use them.</p>
    <h2>Tests ✔️</h2>
    <p>tests: Folder of test files. Provided by Holberton School.</p>
    <h2>Header Files 📁</h2>
    <ul>
        <li><strong>function_pointers.h:</strong> Header file containing prototypes for all functions written for programs 0-2 of the project.</li>
        <table>
            <tr>
                <th>File</th>
                <th>Prototype</th>
            </tr>
            <tr>
                <td>0-print_name.c</td>
                <td>void print_name(char *name, void (*f)(char *));</td>
            </tr>
            <tr>
                <td>1-array_iterator.c</td>
                <td>void array_iterator(int *array, size_t size, void (*action)(int));</td>
            </tr>
            <tr>
                <td>2-int_index.c</td>
                <td>int int_index(int *array, int size, int (*cmp)(int));</td>
            </tr>
        </table>
    </ul>
    <h2>File Definitions/Prototypes</h2>
    <ul>
        <li><strong>struct op</strong></li>
        <li><strong>char *op</strong></li>
        <li><strong>int (*f)(int a, int b)</strong></li>
        <li><strong>typedef op_t struct op</strong></li>
        <li><strong>3-op_functions.c</strong></li>
        <li><strong>int op_add(int a, int b);</strong></li>
        <li><strong>int op_sub(int a, int b);</strong></li>
        <li><strong>int op_mul(int a, int b);</strong></li>
        <li><strong>int op_div(int a, int b);</strong></li>
        <li><strong>int op_mod(int a, int b);</strong></li>
        <li><strong>3-get_op_func.c</strong></li>
        <li><strong>int (*get_op_func(char *s))(int, int);</strong></li>
    </ul>
    <h2>Tasks 📃</h2>
    <ol>
        <li><strong>What's my name</strong></li>
        <p><strong>0-print_name.c:</strong> C function that prints a name.</p>
        <li><strong>If you spend too much time thinking about a thing, you'll never get it done</strong></li>
        <p><strong>1-array_iterator.c:</strong> C function that executes a function given as a parameter on each element of an array.</p>
        <li><strong>To hell with circumstances; I create opportunities</strong></li>
        <p><strong>2-int_index.c:</strong> C function that searches for an integer. Returns the index of the first element for which the cmp function does not return 0. If no element is matched or size <= 0, the function returns -1.</p>
        <li><strong>A goal is not always meant to be reached, it often serves simply as something to aim at</strong></li>
        <p><strong>3-op_functions.c:</strong> File containing five functions for basic mathematical operations. <strong>3-get_op_func.c:</strong> C function that selects the correct function to perform the operation asked by the user. <strong>3-main.c:</strong> C program that performs simple mathematical operations.</p>
        <li><strong>Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker</strong></li>
        <p><strong>100-main_opcodes.c:</strong> C program that prints the opcodes of its own main function.</p>
    </ol>

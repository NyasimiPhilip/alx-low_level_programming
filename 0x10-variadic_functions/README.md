<h1>C - Variadic Functions Project</h1>
    <p>In this project, I learned about using variadic functions with the va_start, va_arg, and va_end macros as well as why and how to use the const type qualifier in C.</p>
    <h2>Test ✔️</h2>
    <p>tests: Folder of test files. Provided by Holberton School.</p>
    <h2>Header File 📁</h2>
    <ul>
        <li><strong>variadic_functions.h:</strong> Header file containing definitions and prototypes for all types and functions written in the project.</li>
        <table>
            <tr>
                <th>File</th>
                <th>Definition/Prototype</th>
            </tr>
            <tr>
                <td>0-sum_them_all.c</td>
                <td>int sum_them_all(const unsigned int n, ...);</td>
            </tr>
            <tr>
                <td>1-print_numbers.c</td>
                <td>void print_numbers(const char *separator, const unsigned int n, ...);</td>
            </tr>
            <tr>
                <td>2-print_strings.c</td>
                <td>void print_strings(const char *separator, const unsigned int n, ...);</td>
            </tr>
            <tr>
                <td>3-print_all.c</td>
                <td>void print_all(const char * const format, ...);</td>
            </tr>
        </table>
    </ul>
    <h2>Struct Definition</h2>
    <ul>
        <li><strong>struct printer</strong></li>
        <table>
            <tr>
                <th>Symbol</th>
                <th>Print Function</th>
            </tr>
            <tr>
                <td>char *symbol</td>
                <td>void (*print)(va_list arg)</td>
            </tr>
        </table>
        <li><strong>typedef printer_t struct printer</strong></li>
    </ul>
    <h2>Tasks 📃</h2>
    <ol>
        <li><strong>Beauty is variable, ugliness is constant</strong></li>
        <p><strong>0-sum_them_all.c:</strong> C function that returns the sum of all its parameters. If the parameter n == 0, the function returns 0.</p>
        <li><strong>To be is to be the value of a variable</strong></li>
        <p><strong>1-print_numbers.c:</strong> C function that prints numbers, followed by a new line. The parameter separator is the string to be printed between numbers. The parameter n is the number of integers passed to the function. If separator is NULL, it is not printed.</p>
        <li><strong>One woman's constant is another woman's variable</strong></li>
        <p><strong>2-print_strings.c:</strong> C function that prints strings, followed by a new line. The parameter separator is the string to be printed between the strings. The parameter n is the number of strings passed to the function. If separator is NULL, it is not printed. If one of the strings is NULL, the function prints (nil) instead.</p>
        <li><strong>To be is a to be the value of a variable</strong></li>
        <p><strong>3-print_all.c:</strong> C function that prints anything. Usage: print_all("ceis", 'H', 0, "lberton"). The parameter format is a list of types of arguments passed to the function (c:char, i:int, f:float, s:char * (if the string is NULL, (nil) is printed instead)). Any other character is ignored. A new line is printed at the end of the function.</p>
        <li><strong>Real programmers can write assembly code in any language</strong></li>
        <p><strong>100-hello_holberton.asm:</strong> 64-bit assembly program that prints Hello, Holberton, followed by a new line using only the system call write with int.</p>
    </ol>

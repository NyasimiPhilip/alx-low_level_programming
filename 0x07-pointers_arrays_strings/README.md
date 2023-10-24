<h1>C - Even more pointers, arrays, and strings</h1>
    <p>In this project, I learned about what and how to use pointers to pointers and multidimensional arrays in C as well as the most common C standard library functions to manipulate strings.</p>
    <h2>Tests</h2>
    <ul>
        <li>tests: the main.c to be compiled with actual implementation of the functions.</li>
    </ul>
    <h2>Helper File</h2>
    <ul>
        <li>_putchar.c: C function that writes a character to stdout.</li>
    </ul>
    <h2>Header File</h2>
    <ul>
        <li>main.h: Header file containing prototypes for all functions written in the project.</li>
    </ul>
    <h2>Tasks</h2>
    <ol>
        <li>
            <h3>0. memset</h3>
            <p>0-memset.c: C function that fills the first n bytes of memory area pointed to by s with the constant byte b.</p>
            <p>Prototype: <code>char *_memset(char *s, char b, unsigned int n);</code></p>
        </li>
        <li>
            <h3>1. memcpy</h3>
            <p>1-memcpy.c: C function that copies n bytes from memory area src to memory area dest.</p>
            <p>Prototype: <code>char *_memcpy(char *dest, char *src, unsigned int n);</code></p>
        </li>
        <li>
            <h3>2. strchr</h3>
            <p>2-strchr.c: C function that returns a pointer to the first occurrence of the character c in the string s.</p>
            <p>Prototype: <code>char *_strchr(char *s, char c);</code></p>
        </li>
        <li>
            <h3>3. strspn</h3>
            <p>3-strspn.c: C function that returns the number of bytes in the initial segment of memory area s which consists only of bytes from a substring accept.</p>
            <p>Prototype: <code>unsigned int _strspn(char *s, char *accept);</code></p>
        </li>
        <li>
            <h3>4. strpbrk</h3>
            <p>4-strpbrk.c: C function that locates the first occurrence in a string s of any of the bytes in a string accept.</p>
            <p>Prototype: <code>char *_strpbrk(char *s, char *accept);</code></p>
        </li>
        <li>
            <h3>5. strstr</h3>
            <p>5-strstr.c: C function that finds the first occurrence of a substring needle in a string haystack.</p>
            <p>Prototype: <code>char *_strstr(char *haystack, char *needle);</code></p>
        </li>
        <li>
            <h3>6. Chess is mental torture</h3>
            <p>7-print_chessboard.c: C function that prints the chessboard.</p>
            <p>Prototype: <code>void print_chessboard(char (*a)[8]);</code></p>
        </li>
        <li>
            <h3>7. The line of life is a ragged diagonal between duty and desire</h3>
            <p>8-print_diagsums.c: C function that prints the sum of the two diagonals of a square matrix of integers.</p>
            <p>Prototype: <code>void print_diagsums(int *a, int size);</code></p>
        </li>
        <li>
            <h3>8. Double pointer, double fun</h3>
            <p>9-set_string.c: C function that sets the value of a pointer to a char.</p>
            <p>Prototype: <code>void set_string(char **s, char *to);</code></p>
        </li>
        <li>
            <h3>9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure</h3>
            <p>101-crackme_password: File containing the password for the crackme2 executable.</p>
        </li>
    </ol>

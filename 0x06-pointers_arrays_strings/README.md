 <h1>0x06-pointers_arrays_strings</h1>
    <h2>Task 1: strcat</h2>
    <p>
        Write a function that concatenates two strings.
        <br> Prototype: <code>char *_strcat(char *dest, char *src);</code>
        <br> This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte.
        <br> Returns a pointer to the resulting string dest.
        <br> FYI: The standard library provides a similar function: <code>strcat</code>. Run <code>man strcat</code> to learn more.
    </p>
    <h2>Task 2: strncat</h2>
    <p>
        Write a function that concatenates two strings.
        <br> Prototype: <code>char *_strncat(char *dest, char *src, int n);</code>
        <br> The <code>_strncat</code> function is similar to the <code>_strcat</code> function, except that it will use at most n bytes from src, and src does not need to be null-terminated if it contains n or more bytes.
        <br> Return a pointer to the resulting string dest.
        <br> FYI: The standard library provides a similar function: <code>strncat</code>. Run <code>man strncat</code> to learn more.
    </p>    <h2>Task 3: strncpy</h2>
    <p>
        Write a function that copies a string.
        <br> Prototype: <code>char *_strncpy(char *dest, char *src, int n);</code>
        <br> Your function should work exactly like <code>strncpy</code>.
        <br> FYI: The standard library provides a similar function: <code>strncpy</code>. Run <code>man strncpy</code> to learn more.
    </p>
    <h2>Task 4: strcmp</h2>
    <p>
        Write a function that compares two strings.
        <br> Prototype: <code>int _strcmp(char *s1, char *s2);</code>
        <br> Your function should work exactly like <code>strcmp</code>.
        <br> FYI: The standard library provides a similar function: <code>strcmp</code>. Run <code>man strcmp</code> to learn more.
    </p>
    <h2>Task 5: Reverse Array</h2>
    <p>
        Write a function that reverses the content of an array of integers.
        <br> Prototype: <code>void reverse_array(int *a, int n);</code>
        <br> Where n is the number of elements of the array.
    </p>
    <h2>Task 6: String to Uppercase</h2>
    <p>
        Write a function that changes all lowercase letters of a string to uppercase.
        <br> Prototype: <code>char *string_toupper(char *);</code>
    </p>
    <h2>Task 7: Capitalize Words</h2>
    <p>
        Write a function that capitalizes all words of a string.
        <br> Prototype: <code>char *cap_string(char *);</code>
        <br> Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
    </p>
    <h2>Task 8: Leet Encoding</h2>
    <p>
        Write a function that encodes a string into 1337.
        <br> Prototype: <code>char *leet(char *);</code>
        <br> You can only use one if in your code. You can only use two loops in your code. You are not allowed to use switch. You are not allowed to use any ternary operation.
    </p>
    <h2>Task 9: ROT13 Encoding</h2>
    <p>
        Write a function that encodes a string using ROT13.
        <br> Prototype: <code>char *rot13(char *);</code>
        <br> You can only use if statement once in your code. You can only use two loops in your code. You are not allowed to use switch. You are not allowed to use any ternary operation.
    </p>
    <h2>Task 10: Print Integer</h2>
    <p>
        Write a function that prints an integer.
        <br> Prototype: <code>void print_number(int n);</code>
        <br> You can only use _putchar function to print. You are not allowed to use long. You are not allowed to use arrays or pointers. You are not allowed to hard-code special values.
    </p>
    <h2>Task 11: Add Two Numbers</h2>
    <p>
        Write a function that adds two numbers.
        <br> Prototype: <code>char *infinite_add(char *n1, char *n2, char *r, int size_r);</code>
        <br> Where n1 and n2 are the two numbers, r is the buffer that the function will use to store the result, and size_r is the buffer size. The function returns a pointer to the result. You can assume that you will always get positive numbers or 0.
    </p>
    <h2>Task 12: Print Buffer</h2>
    <p>
        Write a function that prints a buffer.
        <br> Prototype: <code>void print_buffer(char *b, int size);</code>
        <br> The function must print the content of size bytes of the buffer pointed by b. The output should print 10 bytes per line. Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0. Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space. Each line shows the content of the buffer. If the byte is a printable character, print the letter; if not, print a period (.). Each line ends with a new line (\n). If size is 0 or less, the output should be a new line only (\n).
    </p>

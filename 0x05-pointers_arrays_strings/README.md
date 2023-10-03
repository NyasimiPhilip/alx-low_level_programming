 <h1>C - Pointers, arrays and strings #TASKS</h1>
    <h2>Task 0: 98 Battery st.</h2>
    <p>
        Write a function that takes a pointer to an int as a parameter and updates the value it points to to 98.
        <br> Prototype: <code>void reset_to_98(int *n);</code>
    </p>
    <h2>Task 1: Don't swap horses in crossing a stream</h2>
    <p>
        Write a function that swaps the values of two integers.
        <br> Prototype: <code>void swap_int(int *a, int *b);</code>
    </p>
    <h2>Task 2: This report, by its very length, defends itself against the risk of being read</h2>
    <p>
        Write a function that returns the length of a string.
        <br> Prototype: <code>int _strlen(char *s);</code>
        <br> FYI: The standard library provides a similar function: <code>strlen</code>. Run <code>man strlen</code> to learn more.
    </p>
    <h2>Task 3: I do not fear computers. I fear the lack of them</h2>
    <p>
        Write a function that prints a string, followed by a new line, to stdout.
        <br> Prototype: <code>void _puts(char *str);</code>
        <br> FYI: The standard library provides a similar function: <code>puts</code>. Run <code>man puts</code> to learn more.
    </p>
    <h2>Task 4: I can only go one way. I've not got a reverse gear</h2>
    <p>
        Write a function that prints a string, in reverse, followed by a new line.
        <br> Prototype: <code>void print_rev(char *s);</code>
    </p>
    <h2>Task 5: A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes</h2>
    <p>
        Write a function that reverses a string.
        <br> Prototype: <code>void rev_string(char *s);</code>
    </p>
    <h2>Task 6: Half the lies they tell about me aren't true</h2>
    <p>
        Write a function that prints every other character of a string, starting with the first character, followed by a new line.
        <br> Prototype: <code>void puts2(char *str);</code>
    </p>
    <h2>Task 7: Winning is only half of it. Having fun is the other half</h2>
    <p>
        Write a function that prints half of a string, followed by a new line.
        <br> Prototype: <code>void puts_half(char *str);</code>
        <br> The function should print the second half of the string. If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
    </p>
    <h2>Task 8: Arrays are not pointers</h2>
    <p>
        Write a function that prints n elements of an array of integers, followed by a new line.
        <br> Prototype: <code>void print_array(int *a, int n);</code>
        <br> where n is the number of elements of the array to be printed. Numbers must be separated by a comma, followed by a space. The numbers should be displayed in the same order as they are stored in the array. You are allowed to use printf.
    </p>
    <h2>Task 9: strcpy</h2>
    <p>
        Prototype: <code>char *_strcpy(char *dest, char *src);</code>
        <br> Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
        <br> Return value: the pointer to dest. FYI: The standard library provides a similar function: strcpy. Run <code>man strcpy</code> to learn more.
    </p>
    <h2>Task 10: Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the number</h2>
    <p>
        Write a function that converts a string to an integer.
        <br> Prototype: <code>int _atoi(char *s);</code>
        <br> The number in the string can be preceded by an infinite number of characters. You need to take into account all the - and + signs before the number. If there are no numbers in the string, the function must return 0. You are not allowed to use long. You are not allowed to declare new variables of "type" array. We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code. FYI: The standard library provides a similar function: atoi. Run <code>man atoi</code> to learn more.
    </p>
    <h2>Task 11: Don't hate the hacker, hate the code</h2>
    <p>
        Create a program that generates random valid passwords for the program 101-crackme.
        <br> You are allowed to use the standard library. You don't have to pass the betty-style tests (you still need to pass the betty-doc tests). Run <code>man srand</code>, <code>rand</code>, <code>time</code> gdb, and objdump can help.
    </p>

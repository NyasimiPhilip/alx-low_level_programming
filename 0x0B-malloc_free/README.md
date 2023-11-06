 <h1>C - malloc, free</h1>
        <h2>TASKS</h2>
        <h3><a href="0-create_array.c">0. Float like a butterfly, sting like a bee</a></h3>
        <ul>
            <li>Write a function that creates an array of chars and initializes it with a specific char.</li>
            <li>Prototype: <code>char *create_array(unsigned int size, char c);</code></li>
            <li>Returns NULL if size = 0</li>
            <li>Returns a pointer to the array or NULL if it fails</li>
        </ul>
        <h3><a href="1-strdup.c">1. The woman who has no imagination has no wings</a></h3>
        <ul>
            <li>Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.</li>
            <li>Prototype: <code>char *_strdup(char *str);</code></li>
            <li>The <code>_strdup()</code> function returns a pointer to a new string, which is a duplicate of the string <code>str</code>. Memory for the new string is obtained with malloc and can be freed with free.</li>
            <li>Returns NULL if <code>str = NULL</code></li>
            <li>On success, the <code>_strdup</code> function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available.</li>
        </ul>
        <h3><a href="2-str_concat.c">2. He who is not courageous enough to take risks will accomplish nothing in life</a></h3>
        <ul>
            <li>Write a function that concatenates two strings.</li>
            <li>Prototype: <code>char *str_concat(char *s1, char *s2);</code></li>
            <li>The returned pointer should point to a newly allocated space in memory, which contains the contents of <code>s1</code>, followed by the contents of <code>s2</code>, and null-terminated.</li>
            <li>If <code>NULL</code> is passed, treat it as an empty string.</li>
            <li>The function should return <code>NULL</code> on failure.</li>
        </ul>
        <h3><a href="3-alloc_grid.c">3. If you even dream of beating me, you'd better wake up and apologize</a></h3>
        <ul>
            <li>Write a function that returns a pointer to a 2-dimensional array of integers.</li>
            <li>Prototype: <code>int **alloc_grid(int width, int height);</code></li>
            <li>Each element of the grid should be initialized to 0.</li>
            <li>The function should return <code>NULL</code> on failure.</li>
            <li>If width or height is 0 or negative, return <code>NULL</code>.</li>
        </ul>
        <h3><a href="4-free_grid.c">4. It's not bragging if you can back it up</a></h3>
        <ul>
            <li>Write a function that frees a 2-dimensional grid previously created by your <code>alloc_grid</code> function.</li>
            <li>Prototype: <code>void free_grid(int **grid, int height);</code></li>
            <li>Note that we will compile with your <code>alloc-grid.c</code> file. Make sure it compiles.</li>
        </ul>
        <h3><a href="100-argstostr.c">5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe</a></h3>
        <ul>
            <li>Write a function that concatenates all the arguments of your program.</li>
            <li>Prototype: <code>char *argstostr(int ac, char **av);</code></li>
            <li>Returns <code>NULL</code> if <code>ac == 0</code> or <code>av == NULL</code>.</li>
            <li>Returns a pointer to a new string or <code>NULL</code> if it fails.</li>
            <li>Each argument should be followed by a <code>\n</code> in the new string.</li>
        </ul>
        <h3><a href="101-strtow.c">6. I will show you how great I am</a></h3>
        <ul>
            <li>Write a function that splits a string into words.</li>
            <li>Prototype: <code>char **strtow(char *str);</code></li>
            <li>The function returns a pointer to an array of strings (words).</li>
            <li>Each element of this array should contain a single word, null-terminated.</li>
            <li>The last element of the returned array should be <code>NULL</code>.</li>
            <li>Words are separated by spaces.</li>
            <li>Returns <code>NULL</code> if <code>str == NULL</code> or <code>str == ""</code>.</li>
            <li>If your function fails, it should return <code>NULL</code>.</li>
        </ul>

 <h1>C - Static libraries</h1>
 <h2>Description</h2>
 <p>This repository contains a collection of C functions that will be compiled into a static library called <code>liball.a</code>.</p>
    <h2>Functions</h2>
    <ol>
        <li><code>int _putchar(char c);</code></li>
        <li><code>int _islower(int c);</code></li>
        <li><code>int _isalpha(int c);</code></li>
        <li><code>int _abs(int n);</code></li>
        <li><code>int _isupper(int c);</code></li>
        <li><code>int _isdigit(int c);</code></li>
        <li><code>int _strlen(char *s);</code></li>
        <li><code>void _puts(char *s);</code></li>
        <li><code>char *_strcpy(char *dest, char *src);</code></li>
        <li><code>int _atoi(char *s);</code></li>
        <li><code>char *_strcat(char *dest, char *src);</code></li>
        <li><code>char *_strncat(char *dest, char *src, int n);</code></li>
        <li><code>char *_strncpy(char *dest, char *src, int n);</code></li>
        <li><code>int _strcmp(char *s1, char *s2);</code></li>
        <li><code>char *_memset(char *s, char b, unsigned int n);</code></li>
        <li><code>char *_memcpy(char *dest, char *src, unsigned int n);</code></li>
        <li><code>char *_strchr(char *s, char c);</code></li>
        <li><code>unsigned int _strspn(char *s, char *accept);</code></li>
        <li><code>char *_strpbrk(char *s, char *accept);</code></li>
        <li><code>char *_strstr(char *haystack, char *needle);</code></li>
    </ol>
    <h2>Header File</h2>
    <p><code>holberton.h:</code> Header file containing the prototypes of all functions included in <code>libholberton.a</code>.</p>
    <blockquote>
        <p>1. Without libraries what have we? We have no past and no future.</p>
    </blockquote>
    <h2>Bash Script</h2>
    <p><code>create_static_lib.sh:</code> Bash script that creates a static library called <code>liball.a</code> from all the .c files in the current directory.</p>

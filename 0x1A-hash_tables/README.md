<h1>C - Hash tables Project</h1>
    <p>In this project, I learned about hashing by implementing hash functions and hash tables in C.</p>
    <h2>Header File 📁</h2>
    <p>hash_tables.h: Header file containing definitions and prototypes for all types and functions written for the project.</p>
    <h2>Data Structures:</h2>
    <pre>
        <code>
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

typedef struct shash_node_s
{
    char *key;
    char *value;
    struct shash_node_s *next;
    struct shash_node_s *sprev;
    struct shash_node_s *snext;
} shash_node_t;

typedef struct shash_table_s
{
    unsigned long int size;
    shash_node_t **array;
    shash_node_t *shead;
    shash_node_t *stail;
} shash_table_t;
        </code>
    </pre>
    <h2>Function Prototypes:</h2>
    <table>
        <thead>
            <tr>
                <th>File</th>
                <th>Prototype</th>
            </tr>
        </thead>
        <tbody>
            <tr>
                <td>0-hash_table_create.c</td>
                <td>hash_table_t *hash_table_create(unsigned long int size);</td>
            </tr>
            <tr>
                <td>1-djb2.c</td>
                <td>unsigned long int hash_djb2(const unsigned char *str);</td>
            </tr>
            <tr>
                <td>2-key_index.c</td>
                <td>unsigned long int key_index(const unsigned char *key, unsigned long int size);</td>
            </tr>
            <tr>
                <td>3-hash_table_set.c</td>
                <td>int hash_table_set(hash_table_t *ht, const char *key, const char *value);</td>
            </tr>
            <tr>
                <td>4-hash_table_get.c</td>
                <td>char *hash_table_get(const hash_table_t *ht, const char *key);</td>
            </tr>
            <tr>
                <td>5-hash_table_print.c</td>
                <td>void hash_table_print(const hash_table_t *ht);</td>
            </tr>
            <tr>
                <td>6-hash_table_delete.c</td>
                <td>void hash_table_delete(hash_table_t *ht);</td>
            </tr>
            <tr>
                <td>100-sorted_hash_table.c</td>
                <td>shash_table_t *shash_table_create(unsigned long int size);
                    int shash_table_set(shash_table_t *ht, const char *key, const char *value);
                    char *shash_table_get(const shash_table_t *ht, const char *key);
                    void shash_table_print(const shash_table_t *ht);
                    void shash_table_print_rev(const shash_table_t *ht);
                    void shash_table_delete(shash_table_t *ht);
                </td>
            </tr>
        </tbody>
    </table>
    <h2>Tasks 📃</h2>
    <ol>
        <li><strong>0. >>> ht = {}</strong></li>
        <p>0-hash_table_create.c: C function that creates a hash_table_t hash table.
            If the function fails - returns NULL.
            Otherwise - returns a pointer to the new hash table.</p>
        <li><strong>1. 1-djb2</strong></li>
        <p>1-djb2.c: C function that implements the djb2 hashing algorithm.</p>
        <li><strong>2. 2-key_index</strong></li>
        <p>2-key_index.c: C function that returns the index at which a key/value pair should be stored in the array of a hash_table_t hash table.</p>
        <li><strong>3. >>> ht['betty'] = 'holberton'</strong></li>
        <p>3-hash_table_set.c: C function that adds an element to a hash_table_t table.
            The parameter key cannot be an empty string.
            Returns 1 on success, 0 otherwise.</p>
        <li><strong>4. >>> ht['betty']</strong></li>
        <p>4-hash_table_get.c: C function that retrieves a value associated with a key in a hash_table_t hash table.
            If key cannot be matched - returns NULL.
            Otherwise - returns the value associated with key.</p>
        <li><strong>5. >>> print(ht)</strong></li>
        <p>5-hash_table_print.c: C function that prints a hash_table_t hash table.
            Prints each key/value pair in the order they appear in the array of the hash table.
            Does not print anything if the hash table is NULL.</p>
        <li><strong>6. >>> del ht</strong></li>
        <p>6-hash_table_delete.c: C function that deletes a hash_table_t hash table.</p>
        <li><strong>7. $ht['Betty'] = 'Holberton'</strong></li>
        <p>100-sorted_hash_table.c: C functions that define a sorted hash table shash_table_t.
            Identical in function to a hash_table_t hash table except key/value pairs are inserted in alphabetical order according to the ASCII value of the key.
            Key/value pairs are printed in the order they are sorted.
            Includes a function shash_table_print_rev() that prints the hash table in reverse order.</p>
    </ol>

</body>

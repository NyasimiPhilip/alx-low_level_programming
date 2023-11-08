  <h2>Header File 📁</h2>
  <p>dog.h: Header file containing definitions and prototypes for all types and functions written in the project.</p>

  <table border="1">
        <tr>
            <th>Type/File</th>
            <th>Definition/Prototype</th>
        </tr>
        <tr>
            <td>struct dog</td>
            <td>
                <pre>
struct dog
{
    char *name;
    float age;
    char *owner;
};
                </pre>
            </td>
        </tr>
        <tr>
            <td>typedef dog_t</td>
            <td>
                <pre>typedef struct dog dog_t;</pre>
            </td>
        </tr>
        <tr>
            <td>1-init_dog.c</td>
            <td>
                <pre>void init_dog(struct dog *d, char *name, float age, char *owner);</pre>
            </td>
        </tr>
        <tr>
            <td>2-print_dog.c</td>
            <td>
                <pre>void print_dog(struct dog *d);</pre>
            </td>
        </tr>
        <tr>
            <td>4-new_dog.c</td>
            <td>
                <pre>dog_t *new_dog(char *name, float age, char *owner);</pre>
            </td>
        </tr>
        <tr>
            <td>5-free_dog.c</td>
            <td>
                <pre>void free_dog(dog_t *d);</pre>
            </td>
        </tr>
    </table>

  <h2>Tasks 📃</h2>
    <ul>
        <li>
            <h3>1. A dog is the only thing on earth that loves you more than you love yourself</h3>
            <p><code>1-init_dog.c:</code> C function that initializes a variable of type <strong>struct dog</strong>.</p>
        </li>
        <li>
            <h3>2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad</h3>
            <p><code>2-print_dog.c:</code> C function that prints a <strong>struct dog</strong>.</p>
            <p>If an element of <code>d</code> is <strong>NULL</strong>, the function prints <strong>(nil)</strong> instead of the element.</p>
            <p>If <code>d</code> is <strong>NULL</strong>, the function prints nothing.</p>
        </li>
        <li>
            <h3>3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read</h3>
            <p><code>dog.h:</code> Header file that defines a new type <strong>dog_t</strong> as a new name for the type <strong>struct dog</strong>.</p>
        </li>
        <li>
            <h3>4. A door is what a dog is perpetually on the wrong side of</h3>
            <p><code>4-new_dog.c:</code> C function that creates a <strong>dog</strong>.</p>
            <p>Returns <strong>NULL</strong> if the function fails.</p>
        </li>
        <li>
            <h3>5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg</h3>
            <p><code>5-free_dog.c:</code> C function that frees <strong>dogs</strong>.</p>
        </li>
    </ul>

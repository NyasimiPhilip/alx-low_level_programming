  <h2>Header File 📁</h2>
  <p>dog.h: Header file containing definitions and prototypes for all types and functions written in the project.</p>

  <table>
    <tr>
      <th>Type/File</th>
      <th>Defintion/Prototype</th>
    </tr>
    <tr>
      <td>struct dog</td>
      <td>char *name</td>
      <td>float age</td>
      <td>char *owner</td>
    </tr>
    <tr>
      <td>typedef dog_t</td>
      <td>struct dog</td>
    </tr>
  </table>

  <h3>1-init_dog.c</h3>
  <p>void init_dog(struct dog *d, char *name, float age, char *owner);</p>

  <h3>2-print_dog.c</h3>
  <p>void print_dog(struct dog *d);</p>
  <p>If an element of d is NULL, the function prints (nil) instead of the element.</p>
  <p>If d is NULL, the function prints nothing.</p>

  <h3>4-new_dog.c</h3>
  <p>dog_t *new_dog(char *name, float age, char *owner);</p>

  <h3>5-free_dog.c</h3>
  <p>void free_dog(dog_t *d);</p>

  <h2>Tasks 📃</h2>
  <h3>0. Django</h3>
  <p>dog.h: Header file that defines a new type struct dog with the following elements:</p>
  <ul>
    <li>char *name</li>
    <li>float age</li>
    <li>char *owner</li>
  </ul>

  <h3>1. A dog is the only thing on earth that loves you more than you love yourself</h3>
  <p>1-init_dog.c: C function that initializes a variable of type struct dog.</p>

  <h3>2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad</h3>
  <p>2-print_dog.c: C function that prints a struct dog.</p>
  <p>If an element of d is NULL, the function prints (nil) instead of the element.</p>
  <p>If d is NULL, the function prints nothing.</p>

  <h3>3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read</h3>
  <p>dog.h: Header file that defines a new type dog_t as a new name for the type struct dog.</p>

  <h3>4. A door is what a dog is perpetually on the wrong side of</h3>
  <p>4-new_dog.c: C function that creates a dog.</p>
  <p>Returns NULL if the function fails.</p>

  <h3>5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg</h3>
  <p>5-free_dog.c: C function that frees dogs.</p>

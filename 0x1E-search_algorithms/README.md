<h2>Function Prototypes</h2>
    <table>
        <thead>
            <tr>
                <th>File</th>
                <th>Prototype</th>
            </tr>
        </thead>
        <tbody>
            <tr>
                <td>0-linear.c</td>
                <td>int linear_search(int *array, size_t size, int value);</td>
            </tr>
            <tr>
                <td>1-binary.c</td>
                <td>int binary_search(int *array, size_t size, int value);</td>
            </tr>
            <tr>
                <td>100-jump.c</td>
                <td>int jump_search(int *array, size_t size, int value);</td>
            </tr>
            <tr>
                <td>102-interpolation.c</td>
                <td>int interpolation_search(int *array, size_t size, int value);</td>
            </tr>
            <tr>
                <td>103-exponential.c</td>
                <td>int exponential_search(int *array, size_t size, int value);</td>
            </tr>
            <tr>
                <td>104-advanced_binary.c</td>
                <td>int advanced_binary(int *array, size_t size, int value);</td>
            </tr>
            <tr>
                <td>105-jump_list.c</td>
                <td>listint_t *jump_list(listint_t *list, size_t size, int value);</td>
            </tr>
            <tr>
                <td>106-linear_skip.c</td>
                <td>skiplist_t *linear_skip(skiplist_t *list, int value);</td>
            </tr>
        </tbody>
    </table>
    <h2>Tasks 📃</h2>
    <ol>
        <li>
            <h3>0. Linear search</h3>
            <p>0-linear.c: C function that searches for a value in an array of integers using linear search. If the value is not present or the array is NULL, returns -1. Otherwise, returns the first index where value is located.</p>
        </li>
        <li>
            <h3>1. Binary search</h3>
            <p>1-binary.c: C function that searches for a value in a sorted array of integers using binary search. Assumes the array is sorted in ascending order and that the value to search for is not repeated in the array. If the value is not present or the array is NULL, returns -1. Otherwise, returns the index where value is located.</p>
        </li>
        <li>
            <h3>2. Big O #0</h3>
            <p>2-O: Text file containing the worst case time complexity of linear search.</p>
        </li>
        <li>
            <h3>3. Big O #1</h3>
            <p>3-O: Text file containing the worst case space complexity of iterative linear search.</p>
        </li>
        <li>
            <h3>4. Big O #2</h3>
            <p>4-O: Text file containing worst case case time complexity of binary search.</p>
        </li>
        <li>
            <h3>5. Big O #3</h3>
            <p>5-O: Text file containing the worst case space complexity of binary search.</p>
        </li>
        <li>
            <h3>6. Big O #4</h3>
            <p>6-O: Text file containing the space complexity of the following algorithm:</p>
            <pre>
                <code>
                    int **allocate_map(int n, int m)
                    {
                        int **map;
                        map = malloc(sizeof(int *) * n);
                        for (size_t i = 0; i < n; i++)
                        {
                            map[i] = malloc(sizeof(int) * m);
                        }
                        return (map);
                    }
                </code>
            </pre>
        </li>
        <li>
            <h3>7. Jump search</h3>
            <p>100-jump.c: C function that searches for a value in a sorted array of integers using jump search. Uses the square root of the size of the array as the jump step. Assumes the array is sorted in ascending order and that the value to search for is not repeated in the array. If the value is not present or the array is NULL, returns -1. Otherwise, returns the index where value is located.</p>
        </li>
        <li>
            <h3>8. Big O #5</h3>
            <p>101-O: Text file containing the average case time complexity of jump search in an array of size n using step = sqrt(n).</p>
        </li>
        <li>
            <h3>9. Interpolation search</h3>
            <p>102-interpolation.c: C function that searches for a value in a sorted array of integers using interpolation search. Assumes the array is sorted in ascending order. If the value is not present or the array is NULL, returns -1. Otherwise, returns the first index where value is located.</p>
        </li>
        <li>
            <h3>10. Exponential search</h3>
            <p>103-exponential.c: C function that searches for a value in a sorted array of integers using exponential search. Uses powers of 2 as exponential ranges to search the array. Assumes the array is sorted in ascending order. If the value is not present or the array is NULL, returns -1. Otherwise, returns the first index where value is located.</p>
        </li>
        <li>
            <h3>11. Advanced binary search</h3>
            <p>104-advanced_binary.c: C function that searches for a value in a sorted array of integers using advanced binary search. Assumes the array is sorted in ascending order. If the value is not present or the array is NULL, returns -1. Otherwise, returns the first index where value is located.</p>
        </li>
        <li>
            <h3>12. Jump search in a singly linked list</h3>
            <p>105-jump_list.c: C function that searches for a value in a listint_t sorted singly linked list of integers using jump search. Uses the square root of the list size as the jump step. Assumes that the singly linked list is sorted in ascending order. If the value is not present or the head of the list is NULL, returns NULL. Otherwise, returns a pointer to the first node where value is located.</p>
        </li>
        <li>
            <h3>13. Linear search in a skip list</h3>
            <p>106-linear_skip.c: C function that searches for a value in a skiplist_t sorted skipped linked list of integers using jump search. Assumes that the singly linked list is sorted in ascending order. If the value is not present or the head of the list is NULL, returns NULL. Otherwise, returns a pointer to the first node where value is located.</p>
        </li>
        <li>
            <h3>14. Big O #6</h3>
            <p>107-O: Text file containing the average time complexity of jump search in a singly linked list of size n, using step = sqrt(n).</p>
        </li>
        <li>
            <h3>15. Big O #7</h3>
            <p>108-O: Text file containing the average time complexity of jump search in a sorted skipped linked list of of size n, using step = sqrt(n).</p>
        </li>
    </ol>
</body>
</html>

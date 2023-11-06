<h1>C - argc, argv</h1>
    <h3>In this project, I learned about utilizing arguments passed to C functions with <code>argc</code> and <code>argv</code> as well as how to use <code>__attribute__((unused))</code> or <code>void</code> to compile functions with unused variables or parameters.</h3>   
    <ol>
        <li>
            <p><strong>It ain't what they call you, it's what you answer to</strong></p>
            <p><code>0-whatsmyname.c</code>: C program that prints its name, followed by a new line. If the program is renamed, the program will print the new name without having to be compiled again. The path should not be removed before the name of the program.</p>
        </li>
        <li>
            <p><strong>Silence is argument carried out by other means</strong></p>
            <p><code>1-args.c</code>: C program that prints the number of arguments passed to it, followed by a new line.</p>
        </li>
        <li>
            <p><strong>The best argument against democracy is a five-minute conversation with the average voter</strong></p>
            <p><code>2-args.c</code>: C program that prints all arguments it receives, including the first one. Arguments are printed one per line, ending with a new line.</p>
        </li>
        <li>
            <p><strong>Neither irony nor sarcasm is argument</strong></p>
            <p><code>3-mul.c</code>: C program that multiplies two numbers and prints the result, followed by a new line. The program assumes the two numbers and result of the multiplication can be stored in an int. If the program does not receive two arguments, it prints Error followed by a new line and returns 1.</p>
        </li>
        <li>
            <p><strong>To infinity and beyond</strong></p>
            <p><code>4-add.c</code>: C program that adds two positive numbers and prints the result, followed by a new line. The program assumes that the numbers and result of the addition can be stored in an int. If no number is passed to the program, it prints 0 followed by a new line. If one of the numbers contains symbols that are not digits, the program prints Error followed by a new line and returns 1.</p>
        </li>
        <li>
            <p><strong>Minimal Number of Coins for Change</strong></p>
            <p><code>100-change.c</code>: C program that prints the minimum number of coins to make change for an amount of money. Usage: <code>./change cents</code> where <code>cents</code> is the amount of cents needed to give back. Change can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent. If the number passed as the argument is negative, the program prints 0 followed by a new line. If the number of arguments passed to the program is not exactly one, it prints Error followed by a new line and returns 1.</p>
        </li>
    </ol>

/*  Anthony Cieri 2023
 *  
 *  New comment style?
 *  
 *  Print out all fib nums smaller than n using only for loops
 * 
 *  Compile with -Wall -Werror -Wpedantic flags
 */

# include <stdio.h> /* For printf */
# include <stdlib.h> /* For strtoull */

# define DEFAULT 10ull
# define LLUI long long unsigned int


int main(int argc, char const *argv[])
{
    LLUI n = DEFAULT;

    /* Get a limit from arg list */
    if (argc >= 2)
    {
        if (!(n = strtoull(argv[1], NULL, 10)))
        {
            fprintf(stderr, "ERROR: Reading bound. '%s' is not a llu. Run with %s <llu>.\n", argv[1], argv[0]);

            return -1;
        }
    }

    /* Loop forever */
    for (int i = 0; i < 1000000000; i++)
    {
        // printf("Writing fib nums up to %llu\n\n", n);

        /* Most readable code ever */
        for (LLUI fib_cur = 1, fib_last = 0, temp = 0; fib_cur < n; temp = fib_last, fib_last = fib_cur, fib_cur += temp)
        {
            // printf("%llu\n", fib_cur);
        }

        // printf("\n\n\n");
    }
    
    return 0;
}

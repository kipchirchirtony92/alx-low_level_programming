# C - malloc, free
## difference between automatic and dynamic memory allocation


0. 0-create_array.c -  C function that returns a pointer to a newly-allocated space in memory containing an array of characters.
The array of characters is initialized to the parameter c.
If the function fails or receives size equal to 0 - returns NULL
1. 1-strdup.c - a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter  .Learn more

--------------------------------------------------------------------------------
2. Write a function that concatenates two strings.

   	 * Prototype: char *str_concat(char *s1, char *s2);
	 *  The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the content			s of s2, and null terminated
	 * if NULL is passed, treat it as an empty string
	 * The function should return NULL on failure

---------------------------------------------------------------------------------
3. Write a function that returns a pointer to a 2 dimensional array of integers.

   	 * Prototype: int **alloc_grid(int width, int height);
	 * Each element of the grid should be initialized to 0
	 * The function should return NULL on failure
	 * If width or height is 0 or negative, return NULL

--------------------------------------------------------------------------------
4. Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

   	 * Prototype: void free_grid(int **grid, int height);
	 * Note that we will compile with your alloc_grid.c file. Make sure it compiles.

--------------------------------------------------------------------------------
5. Write a function that concatenates all the arguments of your program.

   	 * Prototype: char *argstostr(int ac, char **av);
	 * Returns NULL if ac == 0 or av == NULL
	 * Returns a pointer to a new string, or NULL if it fails
	 * Each argument should be followed by a \n in the new string
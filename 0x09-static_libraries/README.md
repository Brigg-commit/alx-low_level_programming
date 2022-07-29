# C Static Libraries
In this project, I learned what static libraries are and practiced creating and using them with ar, ranlib, and nm.
# Tests
<ul>
<li>
<a href ="tests"> tests </a>: Folder of test files. Provided by Holberton School.</li>
</ul>

# Tasks
<ul>
<li><strong> 0. A library is not a luxury but one of the necesitics of life </strong>
</ul>

<ul>
<li><a href ="libmy.a"> libmy.a </a>: C Static library containing all the functions listed below:</li>
</ul>

<ul>
<li> int _putchar(char c); </li>
<li> int _isalpha(int c); </li>
<li> int _abs(int n); </li>
<li> int _isupper(int c); </li>
<li> int _isdigit(int c); </li>
<li> int _strlen(char *s); </li>
<li> void _puts(char *s); </li>
<li> char *_strcpy(char *dest, char *src);</li>
<li> int _atoi(char *s); </li>
<li> char *_strcat(char *dest, char *src); </li>
<li>char *_strncat(char *dest, char *src, int n); </li>
<li> char *_strncpy(char *dest, char *src, int n); </li>
<li> int _strcmp(char *s1, char *s2); </li>
<li> char *_memset(char *s, char b, unsigned int n); </li>
<li> char *_memcpy(char *dest, char *src, unsigned int n); </li>
<li> char *_strchr(char *s, char c); </li>
<li>unsigned int _strspn(char *s, char *accept); </li>
<li> char *_strpbrk(char *s, char *accept); </li>
<li> char *_strstr(char *haystack, char *needle); </li>
</ul>

<ul>
<li><a href ="main.h"> main.h </a>: Header file containing the prototypes of all functions included in libholberton.a.</li>
</ul>

<ul>
<li><strong> 1. Without libraries what have we? We have no past and no future. </strong></li>
</ul>

<ul>
<li><a href = "create_static_lib.sh"> create_static_lib.sh </a>: A script that creates a static library called liball.a from all the .c files in the current directory.</li>
</ul>
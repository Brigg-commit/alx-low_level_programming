# C - Static libraries
In this project, I learned what static libraries are and practiced creating and using them with ar, ranlib, and nm.
# Tests <br/>
<ul>
<li><a href = ""> tests </a>: Folder of test files. Provided by Holberton School.</li>
</li>
<br/>
# Tasks <hr>
<ul>
<li><strong> 0. A library is not a luxury but one of the necessities of life</strong></li>
</ul></br>
<a href = ""> libmy.a </a>: C Static library containing all the functions listed below:</br>
<ul>
<li> int _putchar(char c); </li>
<li> int _islower(int c); </li>
<li> int _isalpha(int c); </li>
<li> int _abs(int n); </li>
<li> int _isupper(int c); </li>
<li> int _isdigit(int c); </li>
<li> int _strlen(char *s); </li>
<li> void _puts(char *s); </li>
<li>char *_strcpy(char *dest, char *src); </li>
<li> int _atoi(char *s); </li>
<li> char *_strcat(char *dest, char *src); </li>
<li> char *_strncat(char *dest, char *src, int n); </li>
<li> char *_strncpy(char *dest, char *src, int n); </li>
<li> int _strcmp(char *s1, char *s2);</li>
<li> char *_memset(char *s, char b, unsigned int n); </li>
<li> char *_memcpy(char *dest, char *src, unsigned int n); </li>
<li> char *_strchr(char *s, char c); </li>
<li> unsigned int _strspn(char *s, char *accept); </li>
<li> char *_strpbrk(char *s, char *accept); </li>
<li> char *_strstr(char *haystack, char *needle); </li>
</ul>
</br>
<a href = ""> main.h</a>: Header file containing the prototypes of all functions included in libholberton.a.</br>
<ol>
<li><strong>Without libraries what have we? We have no past and no future</strong></li>
</ol>
<br/>
<a href = ""> create_static_lib.sh </a>: Bash script that creates a static library called liball.a from all the .c files in the current directory.
# C Singly Linked Lists Project
# Header File 📁
<ul>
<li>
<a href ="lists.h">lists.h</a>: Header file containing definitions and prototypes for all types and functions written for the project.</li>

<table>
<tr>
 <th>Type/File</th>
<th>Definition/Prototype</th>
</tr>

<tr>
<td>struct list_s</td>
<td>char *str<br/>
unsigned int len<br/>
struct list_s *next
</td>
</tr>

<tr>
<td>typedef list_t</td>
<td>struct list_s</td>
</tr>

<tr>
<td>0-print_list.7c</td>
<td>size_t printl_list(const list_t *h);</td>
</tr>

<tr>
<td>1-list_len.c</td>
<td>size_t list_len(const list_t *h);</td>
</tr>

<tr>
<td>2-add_node.c</td>
<td>list_t *add_node(list_t **head, const char *str);</td>
</tr>

<tr>
<td>3-add_node_end.c</td>
<td>list_t *add_node_end(list_t **head, const char *str);</td>
</tr>

<tr>
<td>4-free_list.c</td>
<td>void free_list(list_t *head)</td>
</tr>

</table>

# Tasks 📃

<strong>
<li>0. Print list</li>
</strong>


<a href ="0-print_list.c">0-print_list.c</a>: C function that prints all the elements of a list_t list.

<li>If str is NULL, the function prints [0] (nil).</li>

<strong>
<li>1. List length</li>
</strong>

<a href ="1-list_len.c">1-list_len.c"</a>: C function that returns the number of elements in a linked list_t list.

<strong>
<li>2. Add node</li>
</strong>

<a href ="2-add_node.c">2-add_node.c"</a>: C function that returns the number of elements in a linked list_t list
<li>If the function fails - returns NULL.</li>
<li>Otherwise - returns the address of the new element.</li>

<strong>
<li>3. Add node at the end</li>
</strong>

<a href ="3-add_node_end.c">3-add_node_end.c</a>: C function that adds a new node at the end of a linked list_t list.
<li>If the function fails - returns NULL.</li>
<li>Otherwise - returns the address of the new element.</li>

<strong><li>4. Free list</li></strong>

<a href ="4-free_list.c">4-free_list.c</a>: C function that frees a list_t list.             

<strong>
<li>5. The Hare and the Tortoise</li>
</strong>

<a href ="100-first.c>100-first.c"</a>: C function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

<strong><li>6. Real programmers can write assembly code in any language
</li></strong>

<a href ="101-hello_holberton.asm">101-hello_holberton.asm</a>: 64-but assembly program that prints Hello, Holberton followed by a new line using only the printf function witout interrupts.

</ul>
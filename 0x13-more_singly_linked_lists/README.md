<h1 class="gap">0x13. C - More singly linked lists</h1>
<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/VxmJXbHtjDMJAKj7dU-6sg" title="Google" target="_blank">Google</a> </li>
<li><a href="/rltoken/PqebvZ1ey95sB8eDiYl8_A" title="Youtube" target="_blank">Youtube</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/165o2edbvcnHqGsL_nB29w" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>How to use linked lists</li>
<li>Start to look for the right source of information without too much help</li>
</ul>

<p>Please use this data structure for this project:</p>

<pre><code>/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
</code></pre>

 <h4 class="task">
    0. Print list
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that prints all the elements of a <code>listint_t</code> list.</p>

<h4 class="task">
    1. List length
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that returns the number of elements in a linked <code>listint_t</code> list.</p>

 <h4 class="task">
    2. Add node
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that adds a new node at the beginning of a <code>listint_t</code> list.</p>

<h4 class="task">
    3. Add node at the end
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that adds a new node at the end of a <code>listint_t</code> list.</p>
 <h4 class="task">
    4. Free list
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that frees a <code>listint_t</code> list.</p>

 <h4 class="task">
    5. Free
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that frees a <code>listint_t</code> list.</p>

 <h4 class="task">
    6. Pop
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that deletes the head node of a <code>listint_t</code> linked list, and returns the head node&rsquo;s data (n).</p>

 <h4 class="task">
    7. Get node at index
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that returns the nth node of a <code>listint_t</code> linked list.</p>

<h4 class="task">
    8. Sum list
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that returns the sum of all the data (n) of a <code>listint_t</code> linked list.</p>

  <h4 class="task">
    9. Insert
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that inserts a new node at a given position.</p>

<h4 class="task">
    10. Delete at index
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that deletes the node at index <code>index</code> of a <code>listint_t</code> linked list.</p>

 <h4 class="task">
    11. Reverse list
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
  </h4>
  <p>Write a function that reverses a <code>listint_t</code> linked list.</p>

 <h4 class="task">
    12. Print (safe version)
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
  </h4>
  <p>Write a function that prints a <code>listint_t</code> linked list.</p>

<h4 class="task">
    13. Free (safe version)
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
  </h4>
  <p>Write a function that frees a <code>listint_t</code> list.</p>

 <h4 class="task">
    14. Find the loop
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
  </h4>
  <p>Write a function that finds the loop in a linked list.</p>

 <a href="https://github.com/steffanynaranjov">Steffany Naranjo Vargas</a>. Student of <a href="https://www.holbertonschool.com/"> Holberton School</a>

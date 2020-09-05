<h1 class="gap">0x17. C - Doubly linked lists</h1>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://youtu.be/k0pjD12bzP0" title="What is a Doubly Linked List" target="_blank">What is a Doubly Linked List</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/rjx7OpPwtchp_wumniAXDg" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is a doubly linked list</li>
<li>How to use doubly linked lists</li>
<li>Start to look for the right source of information without too much help</li>
</ul>

<p>Please use this data structure for this project:</p>

<pre><code>/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
</code></pre>

<h4 class="task">
    0. Print list
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that prints all the elements of a <code>dlistint_t</code> list.</p>

<h4 class="task">
    1. List length
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that returns the number of elements in a linked <code>dlistint_t</code> list.</p>

<h4 class="task">
    2. Add node
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that adds a new node at the beginning of a <code>dlistint_t</code> list.</p>

<h4 class="task">
    3. Add node at the end
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that adds a new node at the end of a <code>dlistint_t</code> list.</p>

<h4 class="task">
    4. Free list
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that free a <code>dlistint_t</code> list.</p>

<h4 class="task">
    5. Get node at index
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that returns the nth node of a <code>dlistint_t</code> linked list.</p>

<h4 class="task">
    6. Sum list
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that returns the sum of all the data (n) of a <code>dlistint_t</code> linked list.</p>
<h4 class="task">
    7. Insert at index
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that inserts a new node at a given position.</p>

<h4 class="task">
    8. Delete at index
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that deletes the node at index <code>index</code> of a <code>dlistint_t</code> linked list.</p>

  <h4 class="task">
    10. Palindromes
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
  </h4>
 <p>A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is <code>9009</code> = <code>91</code> × <code>99</code>.</p>
<h4 class="task">
    11. crackme5
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
  </h4>
  <p>Write a keygen for <a href="https://github.com/holbertonschool/0x17.c" title="crackme5" target="_blank">crackme5</a>.</p>

<h1 class="gap">0x12. C - Singly linked lists</h1>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/2WOe5XO84Puxd4Y1FUJwVQ" title="Linked Lists" target="_blank">Linked Lists</a> </li>
<li><a href="/rltoken/jiyCC9L1Axkl_nEmuh4j3w" title="Google" target="_blank">Google</a> </li>
<li><a href="/rltoken/DcEVPdONWy2p1x8XPH53Uw" title="Youtube" target="_blank">Youtube</a> </li>
<li><a href="/rltoken/gb2LD9B9peFEyJ6JKuP6UA" title="Data Structures" target="_blank">Data Structures</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/8bKyzTFahgtvQf7aftTjPw" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>When and why using linked lists vs arrays</li>
<li>How to build and use linked lists</li>
</ul>
<p>Please use this data structure for this project:</p>

<pre><code>/**
 * struct list_s - singly linked list
 * @str: string - (malloc&#39;ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
</code></pre>

  <h4 class="task">
    0. Print list
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that prints all the elements of a <code>list_t</code> list.</p>


  <h4 class="task">
    1. List length
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that returns the number of elements in a linked <code>list_t</code> list.</p>


  <h4 class="task">
    2. Add node
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that adds a new node at the beginning of a <code>list_t</code> list.</p>


  <h4 class="task">
    3. Add node at the end
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that adds a new node at the end of a <code>list_t</code> list.</p>

  <h4 class="task">
    4. Free list
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
  <p>Write a function that frees a <code>list_t</code> list.</p>


  <h4 class="task">
    5. The Hare and the Tortoise
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
  </h4>
<p>Write a function that prints <code>You&#39;re beat! and yet, you must allow,\nI bore my house upon my back!\n</code> before the <code>main</code> function is executed.</p>

  <h4 class="task">
    6. Real programmers can write assembly code in any language
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
  </h4>
  <p>Write a 64-bit program in assembly that prints <code>Hello, Holberton</code>, followed by a new line.</p>

 <a href="https://github.com/steffanynaranjov">Steffany Naranjo Vargas</a>. Student of <a href="https://www.holbertonschool.com/"> Holberton School</a>
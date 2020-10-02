<h1 class="gap">0x1A. C - Hash tables</h1>
<h2>More Info</h2>

<h3>Data Structures</h3>

<p>Please use these data structures for this project:</p>

<pre><code>/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
</code></pre>

<h3>Tests</h3>

<p>We strongly encourage you to work all together on a set of tests</p>

 <h4 class="task">
    0. &gt;&gt;&gt; ht = {}
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>

  <p>Write a function that creates a hash table.</p>

 <h4 class="task">
    1. djb2
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>

  <p>Write a hash function implementing the djb2 algorithm.</p>

<h4 class="task">
    2. key -&gt; index
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>

  <p>Write a function that gives you the index of a key.</p>

  <h4 class="task">
    3. &gt;&gt;&gt; ht[&#39;betty&#39;] = &#39;holberton&#39;
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>

  <p>Write a function that adds an element to the hash table.</p>

<h4 class="task">
    4. &gt;&gt;&gt; ht[&#39;betty&#39;]
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>

  <p>Write a function that retrieves a value associated with a key.</p>

<h4 class="task">
    5. &gt;&gt;&gt; print(ht)
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>

  <p>Write a function that prints a hash table.</p>

 <h4 class="task">
    6. &gt;&gt;&gt; del ht
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>

  <p>Write a function that deletes a hash table.</p>

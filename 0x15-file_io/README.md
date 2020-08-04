<h1 class="gap">0x15. C - File I/O</h1>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/zwnc2vqfmCs_ZThsyxkjJw" title="File descriptors" target="_blank">File descriptors</a> </li>
<li><a href="/rltoken/Ig_LMzPlXTT-EwoSAgYK-Q" title="C Programming in Linux Tutorial #024 - open() read() write() Functions" target="_blank">C Programming in Linux Tutorial #024 - open() read() write() Functions</a> </li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>open</code></li>
<li><code>close</code></li>
<li><code>read</code></li>
<li><code>write</code></li>
<li><code>dprintf</code></li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/drib3sk-dT2D2XsdjK6m4Q" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>Look for the right source of information online</li>
<li>How to create, open, close, read and write files</li>
<li>What are file descriptors</li>
<li>What are the 3 standard file descriptors, what are their purpose and what are their <code>POSIX</code> names</li>
<li>How to use the I/O system calls <code>open</code>, <code>close</code>, <code>read</code> and <code>write</code></li>
<li>What are and how to use the flags <code>O_RDONLY</code>, <code>O_WRONLY</code>, <code>O_RDWR</code></li>
<li>What are file permissions, and how to set them when creating a file with the <code>open</code> system call</li>
<li>What is a system call</li>
<li>What is the difference between a function and a system call</li>
</ul>

<h4 class="task">
    0. Tread lightly, she is near
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
<p>Write a function that reads a text file and prints it to the <code>POSIX</code> standard output.</p>

<h4 class="task">
    1. Under the snow
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
<p>Create a function that creates a file.</p>

<h4 class="task">
    2. Speak gently, she can hear
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
<p>Write a function that appends text at the end of a file.</p>

 <h4 class="task">
    3. cp
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
<p>Write a program that copies the content of a file to another file.</p>


<h4 class="task">
    4. elf
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
  </h4>
<p>Write a program that displays the information contained in the <code>ELF</code> header at the start of an <code>ELF</code> file.</p>

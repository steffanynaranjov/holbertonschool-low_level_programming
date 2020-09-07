<h1 class="gap">0x18. C - Dynamic libraries</h1>
<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://www.youtube.com/watch?v=eW5he5uFBNM" title="What is difference between Dynamic and Static library (Static and Dynamic linking)" target="_blank">What is difference between Dynamic and Static library (Static and Dynamic linking)</a> </li>
<li><a href="https://www.google.com/search?q=linux+create+dynamic+library&cad=h" title="create dynamic libraries on Linux" target="_blank">create dynamic libraries on Linux</a> </li>
<li><a href="https://students-support.hbtn.io/hc/en-us/articles/360023750254" title="Technical Writing" target="_blank">Technical Writing</a></li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="https://fs.blog/2012/04/feynman-technique/" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>

<ul>
<li>What is a dynamic library, how does it work, how to create one, and how to use it</li>
<li>What is the environment variable <code>$LD_LIBRARY_PATH</code> and how to use it</li>
<li>What are the differences between static and shared libraries</li>
<li>Basic usage <code>nm</code>, <code>ldd</code>, <code>ldconfig</code></li>
</ul>
 <h4 class="task">
    0. A library is not a luxury but one of the necessities of life
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>

  <p>Create the dynamic library libholberton.so containing all the functions listed below:</p>

 <h4 class="task">
    1. Without libraries what have we? We have no past and no future
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>

  <p>Create a script that creates a dynamic library called <code>liball.so</code> from all the <code>.c</code> files that are in the current directory.</p>
<h4 class="task">
    2. Either write something worth reading or do something worth writing
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>

  <p>Write a blog post describing the differences between static and dynamic libraries. It should cover:</p>

<h4 class="task">
    3. Let&#39;s call C functions from Python
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
  </h4>
  <p>I know, you&rsquo;re missing C when coding in Python. So let&rsquo;s fix that!</p>
<p>Create a dynamic library that contains C functions that can be called from Python. See example for more detail.</p>

<h4 class="task">
    4. Code injection: Win the Giga Millions!
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
  </h4>

  <p><img src="http://4.bp.blogspot.com/-9rqm8Pg1apY/UZHoC79xXtI/AAAAAAAACOs/0Fp4A4ipUqM/s320/tumblr_mlzp3qgHss1s5xo13o3_r1_1280.jpg" /></p>
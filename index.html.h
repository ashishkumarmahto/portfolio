<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Ashish Kumar Mahto | Portfolio</title>

  <!-- Tailwind -->
  <script src="https://cdn.tailwindcss.com"></script>

  <!-- CSS -->
  <link rel="stylesheet" href="style.css">

  <!-- Particles -->
  <script src="https://cdn.jsdelivr.net/npm/particles.js"></script>
</head>

<body class="bg-black text-white">

<!-- Background -->
<div id="particles-js"></div>

<!-- Navbar -->
<nav class="glass fixed w-full flex justify-between p-4 z-10">
  <h1 class="text-xl text-blue-400 font-bold">Ashish</h1>
  <ul class="flex gap-6">
    <li><a href="#home">Home</a></li>
    <li><a href="#skills">Skills</a></li>
    <li><a href="#projects">Projects</a></li>
    <li><a href="#contact">Contact</a></li>
  </ul>
</nav>

<!-- Hero -->
<section id="home" class="h-screen flex flex-col justify-center items-center text-center">
  <h1 class="text-5xl font-bold">Ashish Kumar Mahto</h1>
  <p class="text-xl mt-4"><span id="typing"></span></p>

  <div class="mt-6 flex gap-4">
    <a href="#contact" class="btn">Hire Me</a>
    <a href="#" class="btn-outline">Resume</a>
  </div>
</section>

<!-- Skills -->
<section id="skills" class="section fade-in">
  <h2 class="heading">Skills</h2>

  <div class="space-y-4">
    <div>
      <p>C Programming</p>
      <div class="bar"><div style="width:90%"></div></div>
    </div>

    <div>
      <p>Python</p>
      <div class="bar"><div style="width:85%"></div></div>
    </div>

    <div>
      <p>Java</p>
      <div class="bar"><div style="width:80%"></div></div>
    </div>

    <div>
      <p>Power BI / Tableau</p>
      <div class="bar"><div style="width:88%"></div></div>
    </div>
  </div>
</section>

<!-- Projects -->
<section id="projects" class="section fade-in">
  <h2 class="heading">Projects</h2>

  <div class="grid md:grid-cols-2 gap-6">
    <div class="project-card">
      <h3>IoT Weather Station</h3>
      <p>Cloud-based system using Raspberry Pi Pico.</p>
    </div>

    <div class="project-card">
      <h3>Smart Home System</h3>
      <p>Automation using sensors and microcontrollers.</p>
    </div>
  </div>
</section>

<!-- Contact -->
<section id="contact" class="section text-center fade-in">
  <h2 class="heading">Contact</h2>
  <p class="mb-4">ashishkumar707058@gmail.com</p>
  <a href="mailto:ashishkumar707058@gmail.com" class="btn">Email</a>
</section>

<footer class="text-center p-4 text-gray-500">
  © 2026 Ashish Kumar Mahto
</footer>

<!-- Chatbot -->
<div id="chatbot-btn">💬</div>

<div id="chatbot" class="hidden">
  <div class="chat-header">Ashish AI 🤖</div>
  <div id="chat-body"></div>

  <div class="chat-input">
    <input type="text" id="user-input" placeholder="Ask me...">
    <button onclick="sendMessage()">Send</button>
  </div>
</div>

<!-- JS -->
<script src="script.js"></script>

</body>
</html>
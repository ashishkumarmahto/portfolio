// Typing
const words = ["Developer", "Tech Leader", "Problem Solver"];
let i = 0, j = 0, current = "", deleting = false;

function type() {
  const el = document.getElementById("typing");

  if (!deleting) current = words[i].substring(0, j++);
  else current = words[i].substring(0, j--);

  el.textContent = current;

  let speed = deleting ? 50 : 100;

  if (!deleting && j === words[i].length) {
    deleting = true;
    speed = 1200;
  } else if (deleting && j === 0) {
    deleting = false;
    i = (i + 1) % words.length;
  }

  setTimeout(type, speed);
}
type();

// Fade
const observer = new IntersectionObserver(entries => {
  entries.forEach(e => {
    if (e.isIntersecting) e.target.classList.add("show");
  });
});
document.querySelectorAll(".fade-in").forEach(el => observer.observe(el));

// Particles
particlesJS("particles-js", {
  particles: {
    number: { value: 80 },
    size: { value: 3 },
    move: { speed: 2 },
    line_linked: { enable: true }
  }
});

// Chatbot toggle
document.getElementById("chatbot-btn").onclick = () => {
  document.getElementById("chatbot").classList.toggle("hidden");
};

// Chatbot logic
function sendMessage() {
  const input = document.getElementById("user-input");
  const msg = input.value.toLowerCase();
  const chat = document.getElementById("chat-body");

  if (!msg) return;

  chat.innerHTML += `<div style="text-align:right">${msg}</div>`;

  let reply = "I didn't understand that.";

  if (msg.includes("name")) reply = "I am Ashish Kumar Mahto.";
  else if (msg.includes("skills")) reply = "C, Python, Java, Tableau, Power BI.";
  else if (msg.includes("project")) reply = "IoT Weather Station & Smart Home System.";
  else if (msg.includes("contact")) reply = "Email: ashishkumar707058@gmail.com";

  setTimeout(() => {
    chat.innerHTML += `<div>${reply}</div>`;
    chat.scrollTop = chat.scrollHeight;
  }, 500);

  input.value = "";
}
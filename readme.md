# 2-Week ESP32 + C + CS Learning Plan

## 🎯 Goal

Transition from Python to:
- low-level thinking
- embedded systems
- core computer science concepts

You are not learning *how to code* — you are learning **how code actually runs on hardware**.

---

# 🧭 Overall Philosophy

Shift your mindset:

| Python World | C / Embedded World |
|-------------|------------------|
| dynamic, safe | manual, explicit |
| interpreter | compiled binary |
| abstract memory | real memory |
| hidden runtime | visible system |

---

# 📅 Week 1 — C + Embedded Foundations

## 🎯 Goal:
Be comfortable writing C and running it on ESP32.

---

## ✅ Day 1 — Setup & First Run
- Build / flash / monitor
- Understand `app_main()`
- Logging with `ESP_LOGI`

---

## 🧩 Day 2 — C Basics (Python → C)
Focus on differences:
- static typing (`int`, `float`, `char`)
- functions
- `.c` vs `.h`

### Task:
- split code into:
  - `main.c`
  - `helper.c`
  - `helper.h`

---

## 🔑 Day 3 — Pointers
Core concept of C.

Learn:
- `int *p`
- `&x` (address)
- `*p` (dereference)

### Task:
- modify variable via pointer
- print addresses (`%p`)

---

## 🧠 Day 4 — Memory Model
Understand:
- stack vs heap
- variable lifetime

### Task:
- return pointer from function (break it intentionally)
- understand why it fails

---

## 📦 Day 5 — Structs
Learn:
- `struct`
- pass by value vs pointer

### Task:
- create a `struct` (e.g., calculator state)
- pass it between functions

---

## 💡 Day 6 — GPIO (First Hardware)
### Task:
- blink LED

Learn:
- GPIO config
- output control

---

## ⚙️ Day 7 — FreeRTOS Basics
Understand:
- tasks
- scheduling
- `vTaskDelay`

### Task:
- create 2 tasks printing different messages

---

# 📅 Week 2 — CS + System Understanding

## 🎯 Goal:
Understand how things work under the hood.

---

## 🏗 Day 8 — Build System
Learn:
- compile vs link
- `.c → .o → .elf → .bin`

### Explore:
- `prj_01.elf`
- `prj_01.map`

---

## 🧠 Day 9 — Memory Layout
Learn:
- `.text`, `.data`, `.bss`
- stack & heap

### Task:
- inspect `.map` file
- locate variables

---

## ⚡ Day 10 — Interrupts (Conceptual)
Understand:
- what interrupts are
- why they exist

(No coding required yet)

---

## 🔌 Day 11 — Peripherals
Pick one:
- UART
- ADC

### Task:
- read data (even noisy/floating)

---

## 🐞 Day 12 — Debugging & Errors
Learn:
- logs
- crashes (Guru Meditation)
- `.elf` debugging basics

---

## 🧱 Day 13 — Project Structure
Organize code:

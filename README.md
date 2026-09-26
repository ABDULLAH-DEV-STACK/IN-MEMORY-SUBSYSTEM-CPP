<div align="center">
  
# ⚙️ In-Memory Subsystem CPP
  
**A robust, zero-dependency console application demonstrating low-level memory management, strict state control, and modular system design in C/C++.**

[![Language](https://img.shields.io/badge/Language-C%2FC%2B%2B-blue.svg)](https://en.wikipedia.org/wiki/C%2B%2B)
[![Architecture](https://img.shields.io/badge/Architecture-Monolithic_CLI-orange.svg)]()
[![Memory](https://img.shields.io/badge/Memory-Contiguous_Array-success.svg)]()
[![Environment](https://img.shields.io/badge/Environment-Linux%20%7C%20Windows-lightgrey.svg)]()

</div>

---

## 📌 Executive Summary

This project is a high-performance, console-based inventory management subsystem built entirely in C/C++. It was engineered from the ground up without relying on external database engines, Object-Relational Mappers (ORMs), or high-level standard library containers. 

The primary objective of this project is to demonstrate core computer science competencies highly valued in **telecommunications, automotive software, and embedded systems engineering**. By manually handling data structures, memory allocation, and algorithmic routing, this application showcases a deep understanding of hardware-adjacent programming, deterministic execution, and system reliability.

## 🚀 Enterprise Engineering Principles Applied

Recruiters and engineering managers evaluating this repository will find strict adherence to professional software development standards:

*   **Zero-Dependency Architecture:** Ensures complete portability and cross-platform compilation (GCC/Clang) across POSIX and Windows environments.
*   **Deterministic Memory Management:** Utilizes fixed-size, contiguous memory blocks (arrays) to prevent memory fragmentation and ensure predictable execution times—critical for high-availability systems.
*   **Fault-Tolerant Input Handling:** Built-in safeguards against buffer overflows, invalid data types, and duplicate primary keys to guarantee continuous uptime.
*   **Separation of Concerns (SoC):** A highly modularized codebase where each CRUD operation is decoupled into isolated functions, establishing a foundation for unit testing and continuous integration.

---

## 🏗️ System Architecture & Data Flow

The application operates on an infinite `while`-loop driven state machine, routing user execution through a `switch-case` command dispatcher. 

### Core Data Structure
The state is maintained via a custom `struct`, acting as the primary Data Transfer Object (DTO). 

```cpp
// Simulated Data Model
struct Book {
    int bookID;          // Unique Primary Key
    char title[100];     // Constrained String Buffer
    char author[100];    // Constrained String Buffer
    ## 🛠️ System Operations

| Operation | Complexity | Description |
| :--- | :--- | :--- |
| **Insert** | `O(1)`* | Appends new records to the memory block. *Requires an `O(N)` pre-validation scan for Book ID uniqueness. |
| **Search** | `O(N)` | Linear search engine for filtering data by exact Book ID or localized Title string matching. |
| **Update** | `O(1)` | In-memory mutation of mutable fields (Price, Quantity) without full record reconstruction. |
| **Delete** | `O(N)` | Contiguous deletion by shifting adjacent elements leftward to prevent memory gaps and null pointers. |
| **Analytics** | `O(1)` | Real-time calculation of active indices to output system capacity and active volume. |
## ⚙️ Technical Specifications

| Component | Implementation Detail |
| :--- | :--- |
| **Language Profile** | ISO C / C++11 |
| **Storage Mechanism** | In-Memory Array (Max Capacity: 50 immutable slots) |
| **Control Flow** | State Machine (`while` loop + command router) |
| **Input Sanitization** | Standard input clearing to prevent cascading terminal failures |
| **Display Engine** | Formatted tabular standard output (`printf`/`cout`) with strict alignment |
## 💻 Installation & Compilation

Designed for seamless compilation in any POSIX-compliant or Windows environment.

### 🐧 For Linux / Bash Environments
This project can be compiled directly from the terminal using standard GCC or Clang compilers. 

```bash
# 1. Clone the repository
git clone [https://github.com/yourusername/your-repo-name.git](https://github.com/yourusername/your-repo-name.git)
cd your-repo-name

# 2. Compile the source code (using C++11 standard)
g++ -std=c++11 main.cpp -o bookstore

# 3. Run the application
./bookstore
## Interface Preview
===========================================
      IN-MEMORY SUBSYSTEM v1.0
===========================================
[1] Add New Record
[2] Display Global Inventory
[3] Query Database (Search)
[4] Patch Record (Update)
[5] Purge Record (Delete)
[6] View System Analytics (Count)
[7] Terminate Session
===========================================
SYS_PROMPT> Awaiting command...
## 🚀 Future Roadmap & CI/CD Readiness

While this version focuses on raw memory and array manipulation, the modular nature of the code makes it primed for enterprise scaling:

* **Automated Testing Integration:** The isolated function architecture is ready to be hooked into a C++ testing framework (like GoogleTest) for automated regression testing.
* **CI/CD Pipeline Construction:** Future iterations will include GitHub Actions pipelines to automate the build and test process across multiple Linux distributions.
* **File System Serialization:** Upgrading from volatile in-memory storage to persistent flat-file storage (CSV/Binary) for data recovery across session restarts.

---

<div align="center">

**Developed by Abdullah Khan **<br>
<br>
<i>Built with a focus on writing clean, resource-efficient, and maintainable systems-level code.</i>

</div>
    float price;         // Floating-point precision for currency
    int quantity;        // Integer tracking for inventory
};

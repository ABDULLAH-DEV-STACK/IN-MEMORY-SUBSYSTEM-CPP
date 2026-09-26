<div align="center">
  
# 🏛️ Enterprise Library Management System (C/C++)
  
**A robust, zero-dependency console application demonstrating low-level memory management, strict state control, and modular system design.**

[![Language](https://img.shields.io/badge/Language-C%2FC%2B%2B-blue.svg)](https://en.wikipedia.org/wiki/C%2B%2B)
[![Architecture](https://img.shields.io/badge/Architecture-Monolithic_CLI-orange.svg)]()
[![Memory](https://img.shields.io/badge/Memory-Contiguous_Array-success.svg)]()
[![Environment](https://img.shields.io/badge/Environment-Linux%20%7C%20Windows-lightgrey.svg)]()

</div>

---

## 📌 Executive Summary

This project is a high-performance, console-based Library Management System built entirely in C/C++. It was engineered from the ground up without relying on external database engines, Object-Relational Mappers (ORMs), or high-level standard library containers. 

The primary objective of this project is to demonstrate core computer science competencies highly valued in **telecommunications, automotive software, and embedded systems engineering**. By manually handling data structures, memory allocation, and algorithmic routing, this application showcases a deep understanding of hardware-adjacent programming, deterministic execution, and system reliability.

## 🚀 Enterprise Engineering Principles Applied

Recruiters and engineering managers evaluating this repository will find strict adherence to professional software development standards:

*   **Zero-Dependency Architecture:** Ensures complete portability and cross-platform compilation (GCC/Clang) across Linux and Windows environments.
*   **Deterministic Memory Management:** Utilizes fixed-size, contiguous memory blocks (arrays) to prevent memory fragmentation and ensure predictable execution times—critical for high-availability systems.
*   **Fault-Tolerant Input Handling:** Built-in safeguards against buffer overflows, invalid data types, and duplicate primary keys (Book IDs) to guarantee continuous uptime.
*   **Separation of Concerns (SoC):** A highly modularized codebase where each CRUD operation is decoupled into isolated functions, paving the way for unit testing and CI/CD integration.

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
    float price;         // Floating-point precision for currency
    int quantity;        // Integer tracking for inventory
};
Supported Operations (CRUD + Analytics)
​O(1) Insertion (Add Book): Appends new records to the memory block. Includes an O(N) pre-validation scan to strictly enforce Book ID uniqueness.
​O(N) Search Engine: Implements a linear search algorithm capable of filtering data by exact Book ID or localized Title string matching.
​In-Memory Mutation (Update): Allows dynamic patching of mutable fields (Price, Quantity) without requiring full record reconstruction.
​Contiguous Deletion: Safely removes records by shifting adjacent memory elements leftward (array[i] = array[i+1]), ensuring no memory gaps or null-pointer exceptions occur during runtime.
​State Analytics: Real-time calculation of active indices to output current inventory volume.
​⚙️ Technical Specifications
ComponentImplementation Detail
Language ProfileISO C / C++11
Storage MechanismIn-Memory Array (Max Capacity: 50 immutable slots)
Control FlowState Machine (while loop + command router)
Input SanitizationStandard input clearing to prevent cascading terminal failures
Display EngineFormatted tabular standard output (printf/cout) with strict alignment
💻 Installation & Compilation
​Designed for seamless compilation in any POSIX-compliant or Windows environment.
​For Linux / Bash Environments
# Clone the repository
git clone [https://github.com/yourusername/library-management-system.git](https://github.com/yourusername/library-management-system.git)

# Navigate to project directory
cd library-management-system

# Compile using GCC with strict warning flags for code quality
gcc main.c -o libsys -Wall -Wextra -O2

# Execute the binary
./libsys
Interface Preview
===========================================
      LIBRARY INVENTORY SYSTEM v1.0
===========================================
[1] Add New Book Record
[2] Display Global Inventory
[3] Query Database (Search)
[4] Patch Book Record (Update)
[5] Purge Book Record (Delete)
[6] View System Analytics (Count)
[7] Terminate Session
===========================================
SYS_PROMPT> Awaiting command...
🧪 Future Roadmap & CI/CD Readiness
​While this version focuses on raw memory and array manipulation, the modular nature of the code makes it primed for enterprise scaling:
​Automated Testing Integration: The isolated function architecture (addBook(), deleteBook()) is ready to be hooked into a C++ testing framework (like GoogleTest) for automated regression testing.
​CI/CD Pipeline Construction: Future iterations will include GitHub Actions/Jenkins pipelines to automate the build and test process across multiple Linux distributions.
​File System Serialization: Upgrading from volatile in-memory storage to persistent flat-file storage (CSV/Binary) for data recovery across session restarts.
​Dynamic Allocation: Transitioning from fixed arrays to self-balancing trees or linked lists using malloc/new for unrestricted scalability.
​<div align="center">
​Developed by Abdullah Khan
Computer Science & Software Engineering
​Built with a focus on writing clean, resource-efficient, and maintainable systems-level code.
​</div>
# Deadlock-Detection-and-Avoidance

## Aim

To implement deadlock detection and deadlock avoidance techniques using C programming, including the Banker's Algorithm.

## Real-World Use Case

In an online gaming environment, multiple gaming sessions may compete for limited resources such as CPU time, memory, and processing units. If sessions hold resources while waiting for others, a deadlock may occur. This project demonstrates how deadlocks can be detected and avoided using resource-allocation techniques.

## Experiments Included

### Part A: Deadlock Detection

- Uses a wait-for matrix to represent dependencies between processes.
- Identifies circular waiting conditions that may indicate a deadlock.
- Models resource conflicts between gaming sessions.

### Part B: Deadlock Avoidance

- Uses Allocation, Need, and Available resource information.
- Checks whether resources can be allocated without entering an unsafe state.

### Part C: Banker's Algorithm

- Calculates the Need matrix using:

  `Need = Maximum - Allocation`
- Checks whether the system is in a safe state.
- Determines a safe sequence if one exists.

## Technologies Used

- **Programming Language:** C
- **Concepts:** Operating Systems, Deadlocks, Resource Allocation, Deadlock Detection, Deadlock Avoidance, Banker's Algorithm

## Files in This Repository

- `deadlock_detection.c` — Implements Part A: Deadlock Detection.
- `deadlock_avoidance.c` — Implements Part B: Deadlock Avoidance.
- `bankers_algorithm.c` — Implements Part C: Banker's Algorithm.
- `output_part_a.png` — Output screenshot for Part A.
- `output_part_b.png` — Output screenshot for Part B.
- `output_part_c.png` — Output screenshot for Part C.

## How to Compile and Run

Make sure GCC is installed on your system.

### Part A

```
gcc deadlock_detection.c -o deadlock_detection
./deadlock_detection
```

### Part B

```
gcc deadlock_avoidance.c -o deadlock_avoidance
./deadlock_avoidance
```

### Part C

```
gcc bankers_algorithm.c -o bankers_algorithm
./bankers_algorithm
```

On Windows, run the generated executable using its `.exe` filename, for example:

```
deadlock_detection.exe
```

## Expected Outcome

The programs demonstrate deadlock detection, resource-allocation safety checks, and the Banker's Algorithm for determining whether a safe execution sequence exists.

## Conclusion

This experiment demonstrates how operating systems detect deadlocks and prevent unsafe resource allocation. These techniques help improve resource management and system reliability in environments where multiple processes compete for limited resources.

GitHub repository name: `Gaming-Session-Deadlock-Avoidance`

Short description: `Implementation of deadlock detection, deadlock avoidance, and Banker's Algorithm in C using a gaming-session resource allocation use case.`

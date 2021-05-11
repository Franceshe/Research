# Inspiration

## Hardware for Machine Learning:
* [EE290-2, Spring 2021: Hardware for Machine Learning](https://inst.eecs.berkeley.edu/~ee290-2/sp21/)

## New Golden age for computer architecture:
* [A New Golden Age for Computer Architecture with Dave Patterson](https://learning.acm.org/techtalks/computerarchitecture)

### Part1: History of architecture- Mainframes, Minicomputers, Microprocessors, RISC vs CISC, VLIW
* Mini computer and main frames
* Microprocessors
* From CISC to RISC
... Even though the benefits of RISC is obvious than CISC, CISC(x86) also gained success.
* PC era 
* PostPC era: Client/CLoud
* "Epic failiure" for VLIW

### Part2: Current Architecture Challenges - Ending of Dennard Scaling and Moore's Law, Security
* Challenges:
... End of dennard scaling and Moore's law.
... less emphasizes in security of hardware thesedays comparing to 60s and 70s.
... Lessons learned: hardware community has to work with software.

### Part3: Future architecture Opponunties - Domain Specific  Langauges and architecture, Open architecture, Agile Hardware developement.
#### What oppotunities?
* software - centric:
... Modern scripting languages are interpreted, dynamically typed and encrouaged reuse
... Efficient for programmers but not for execution
* Hardware -centric:
... Only path left is Domain Specific Architecture(DSA)
... Intead of doing general purpose processors, do processors at spefic task really well, and then combine them as hetergenous architecture
* Combinations.
... Domain specific languages and Architectures.

### Summary:
* New approaches to computer architecture needed
* Comparing to old horizontally decomposed architecture, the Renaissance computer architecture team is vertically integrated. 
* Need to build a team which understands:
...1. Applications
...2. DSLs and related compiler technology
...3.Principles of architecture
...4.Impelementation technology
* Everything old is new again, vertical -> horizontal -> vertical integration.

#### NVDLA: An open DSA for deep learning by Nvidia

### Open architecture goal: Linux for processors.

### Agile hardware developement
* Tape-out chip for $14000
* Berkley built 10 chips in 5 years.

### Part 3 continue: Open architectures:
1. Why open source compilers and operating systems but not ISAs?
2. What if where were free and open ISAs we could use for everything.

### Use machine learning to design computer architecture
* Cliff Young: how to design machines better for use machine learning.

### Reference:
* [John Hennessy and David Patterson 2017 ACM A.M. Turing Award Lecture](https://www.youtube.com/watch?v=3LVeEjsn8Ts&t=387s&ab_channel=AssociationforComputingMachinery%28ACM%29)

#### RISC-V
* Lessons learn from the battle of CISC vs RISC war:
... Don't seperate the hardware and software, think it as integrated fashion.

## Resource
* [Coursera: Advanced Computer Architecture](https://www.coursera.org/learn/comparch)

## Aspiration
* While trying to deploy machine learning models at scale, I found more knowledge about exploit advantanges of vector processors and understanding of different types of parallelism, like instructional parallelism, data parallelism and thread parallelism are pretty useful. Process level and vector level parallelism may be out of scope for now.

### Textbook
* [Computer Architecture, A Quantitative Approach, Patterson and Hennessy, 5th edition].
* [Modern Processor Design Fundamentals of Super-Scalar Processors]

## Prereq
* A computer organization class like UIUC CS233


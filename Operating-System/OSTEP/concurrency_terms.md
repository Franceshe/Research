# Concurrency: An Introduction

## Concurrency Terms:
* These four terms are so central to concurrent code that we thought it worth while to call them out explicitly.

* Critical Section:  a piece of code that accesses a shared resource, usually a variable or data structure.

* Race Condition: arises if multiple threads of execution enter the critical section at roughly the same time; both attempt to update the shared data structure, leading to a surprising (and perhaps un- desirable) outcome.

* Indeterminate:
   An indeterminate program consists of one or more raceconditions; the output of the program varies from run to run, depending on which threads ran when. The outcome is thus not deterministic, something we usually expect from computer systems. 
   
* Exclusion:
To avoid these problems, threads should use some kind of "mutual exclusion" primitives; doing so guarantees that only a single thread ever enters a critical section, thus avoiding races, and resulting in deterministic program outputs.

# 8:Scheduling: The Multi-Level Feedback Queue

* flashback: as chapter 7 mention, the multi-level feedback queue scheduling algrithm addresses the issue -> "how to use past to predict the future without priori knowledge(assumptino that scheduler knows the length of each job)"

## How MLFQ is structured?
* Rule 1: If Priority(A) > Priority(B), A runs (B doesn’t).
* Rule 2: If Priority(A) = Priority(B), A & B run in RR.
* Rule 3: When a job enters the system, it is placed at the highest
priority (the topmost queue).
* Rule 4: Once a job uses up its time allotment at a given level (re-gardless of how many times it has given up the CPU), its priority is reduced (i.e., it moves down one queue).
* Rule 5: After some time period S, move all the jobs in the system
to the topmost queue.

## Reveletion on software 2.0:
* Personally, in the era of software 2.0 with the aid of deep learning algorithm, we could resign the MLFQ rules with neural network helps with the tuning of parameters for determining how the priority of a process is altered throughout its lifetime, how long each time slice is, and how often to boost the priority of a job. As freeBSD already used some mathematical formulae to optimize its scheduler. 
* In a highter level, all the resource of CPU, RAM could be seeing as virtualization of resource of computing and Von neunman architecture could be distrupted. ML + system is the way to go.
* It is pretty doable in today's pattern recognition algorithm which aligns the goal of  MLFQ -> "MLFQ is interesting because instead of demanding a priori knowledge of the nature of a job, it instead observes the execution of a job and pri- oritizes it accordingly."


## Application
* Similar approach could be applied to general productivity software and operational/industry/Human Resource/Resource mange software to boost productivity.

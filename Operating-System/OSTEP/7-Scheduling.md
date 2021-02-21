# Scheduling Introduction:


## Basic framework and metric about scheduling

### Key assumptions
* workload
* A huge assumption for following scheduling algorihtm: 
  - perform one task at a time
* assumption3: Jobs do no I/O
* assumption4: run-time of each job is known.
* By relaxing the above assumptions, we proposed algorithm/solution to address
the problems.

### Measuring metric
* Performance metric:
  - turnaround time:
	T(turnaround) = T(completion) - T(arrival)
  - response time -> because the advent of "time-shared" machine:
	T(response) = T(firstrun) - T(arrival)
* Fairness metric(as measured (for example) by Jain’s Fairness Index)
* There's tension or tradeoff bw performance and fairness, eg: optimize performance at the cost of preventing few jobs from running.

## Scheduling alogorithms:
* 1. FIFO(first in first out) or FCFS(first come first serve): 
- characterized for sequatial program?
- fine for jobs that run equal amount of time.
- Jobs of different length in non optimal order can lead trouple -> FIFO scheduling. -> "convoy effect" : bottleneck since the short potential consumers of resource get queued behind a heavyweight resource consumer.
- Need improvement of algorithm to resolve the issue of "jobs that run for different amounts of time"

* 2.Shortest Job First(SJF):
  - it runs the shortest job first, then the next shortest, and so on.
  - SJF could be a general scheduling principle that can be applied to any system where the perceived turnaround time per customer (or, in our case, a job) matters.
  - if alow jobs could arrive at any time instead of all at once, would also leads to problem of "convoy effect".
  
* 3. Shorted Time-to-Completion First(STCF)
* good policy if we knew job length, and jobs only used CPU, and only metric
is turnaround time.
* not good for metric of "response time"

* 4. Round Robin(RR) Scheduling(Good for response time)
 - basic idea: 
   instead of running jobs to completion, RR runs a job for a time slice (sometimes called a scheduling quantum) and then switches to the next job in the run queue.It repeatedly does so un- til the jobs are finished.
   * RR is also called time-sclicing.
   * The length of a time slice must be a multiple of the timer-interrupt period.
 - Compare to other programs which runs each job to completion beforr running another.In contrast, RR with a time-slice of 1 second would cycle through the jobs quickly.
 - 启示: Round robin 这样的设计思想可能在visual data engine 也可参考,andrej karpathy 在新的ML scale talk 有提到过类似的设计
 - Trade off design choice on "the length of time slice": short is good for response metric, too shord would lead to high context switch cost.
 - Tips: The general technique of "amorization(the action or process of gradually writing off)" can reduce fixed cost.By incurring that cost less often (i.e., by performing the operation fewer times), the total cost to the system is reduced.
 
 ### Cost of Context Switch(A very interersting but oftern neglected point)
 * Note that the cost of context switching does not arise solely from the OS actions of saving and restoring a few registers. When programs run,they build up a great deal of state in CPU caches, TLBs, branch predictors, and other on-chip hardware. Switching to another job causes this state to be flushed and new state relevant to the currently-running job to be brought in, which may exact a noticeable performance cost [MB91].


## Incorporating I/O
* A scheduler clearly has a decision to make when a job initiates an I/O request
* NOTICE the currently-running job won’t be using the CPU during the I/O; it is blocked waiting for I/O completion
* How should the OS treat each job?
  - TIP: OVERLAP ENABLES HIGHER UTILIZATION
  - "overlap" allowss the CPU while being used by one process, while waiting for the I/O of another process to complete.
  
  
## Jargon
* batch computing
* preemptiive scheduler -> which indicate context swtich is pretty used for schedulers.

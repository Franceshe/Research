# Scheduling Introduction:


## Basic framework and metric about scheduling

### Key assumptions
* workload
* A huge assumption for following scheduling algorihtm: 
  - perform one task at a time
  
### Measuring metric
* Performance metric:
  - turnaround time
  
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

## Jargon
* batch computing
* preemptiive scheduler -> which indicate context swtich is pretty used for schedulers.

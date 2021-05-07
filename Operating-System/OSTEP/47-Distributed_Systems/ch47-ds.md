# CH47: Distributed System
* Although ds its self is a major topic to cover, we focus on several topics.

## Focus: Failure


## Communications
* Context: Namely, how should machines  within a distributed system communicate 
with one another?
* tips1 : COMMUNICATION IS INHERENTLY UNRELIABLE

### Performance optimization:
*  trying to reduce the number of messages sent and further make
communication as efficient (low latency, high bandwidth) as possible.

### failure hanle and sercuriy
* how should communication layers handle failures?

### Communication basics
* Possible case of failures:
.. packet loss most fundamentally due to lack of buffering.

### UDP service model
* +++++++++++++++++            +++++++++++++++++
   application data -> UDP ->     UDP datagram   -> network layer
  +++++++++++++++++            +++++++++++++++++
* THe UDP datagram format
* Property and behavior of UDP



## Reference:
* [UDP service model](https://www.youtube.com/watch?v=umqdobwwbFc&list=PLvFG2xYBrYAQCyz4Wx3NPoYJOFjvU7g2Z&index=17&t=287s)
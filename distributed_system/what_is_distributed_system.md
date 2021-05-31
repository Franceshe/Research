# What is distributed system:
* notes on a very interesting talk about [Distributed Systems in One Lesson by Tim Berglund](https://www.youtube.com/watch?v=Y6Ev8GIlbxc&t=335s)

## Distributed Systems in One Lesson by Tim Berglund
* What is a distributed system?
  - A collection of independent computers that appear to its users as one computer.

			 — Andrew Tannenbaum


### Three characteristics:
1. The computers operate concurrently
2. The computers fail independently
  3. The computers do not share a global clock
aka, the clock is not synchronized.

### Three Topics:
1. Storage
2. Computation
3. Message

## Distributed-Storage
### Single-Master Storage: eg database on one server

Typically in much web systems, more reads than writes.

How to scale reads, to READ Replication
	What we had broken? Consistency! for example when read database 1, and then read database2, although db2 should be just replicate of db1 , But data could be not propagated yet.

Sharding: for relational db
a-f db   f-n db   n-z db
Now kind of break consistency and data model
we got completely different database for different parts.

read slow -> adding index
read slow -> take ‘join ’ away -> denormalize -> awful


### Consistent Hashing
eg: Casshadra db is good at it

How to build a database from ground above to be distributed?
each with an unique token/id in a circle

Tim : Americano
9f72

### Replication on consistent hashing
Which acts as fault tolerance

### Consistency
* you have consistency problem when you have n copies/ replicates.
* R + W > N  of replicas if using strong consistency

# CAP theorem
a simple way of understanding it
You CAN”T have all 3 things. 2 of 3 you can get.

C: consistent , when you read sth you want it to be the most recent thing written
A: available (write i try to write, it works, when i  try to read, it works)
P: Partition tolerant(some times parts of system fail and its ok)

* eg: shared writing project
* 

#########################################
#Distributed Computation
* Computation is easy when you have only one processor, one process, one thread
* Mapreduce !
    * MAP : wordcout -> words -> key: values  pairs
        * eg: suddenly: 1
        * just count each one one time
    * Shuffle:
        * move words around network, to make sure similar words in order or near each other
    * Reduce:
        * basically add up al the numbers
* This is really a great idea, if data already stored in distributed files. 
    * Mapreduce is a computer pattern in Hadoop

## Hadoop
	* MapReduce API
	* Mapreduce job management
	* Distributed Filesystem(HDFS) -> gonna be with us very long as infrastructure
	* Enormous ecosystem

Hive 

## Spark :)
	* Scatter/gather paradigm(similar to mapReduce)
	* maReduce -> transformAction
	* Similar paradigm to MapReduce 
	* Insight: Create an abstraction of data(More general data model, RDD, Dataset) that becomes out API
	* In contract to Hadoop, spark give you an object to program
*  More general programming model(transform/action)
* Storage agnostics, have no storage opinion, it don’t care
* more pleasant to program

## Kafka:
* everything is stream
* Focuses on real-time analysis, not batch jobs.
* Streams and streams only
* Stream is first class citizen
* Except streams are also tables(sometimes)
* No cluster required.
* 
* a message framework and computation framework 



# Messaging
* Means of loosely coupling subsystems
    * allow us to build systems to release, versioning them independently
    * sound micro service, get them to talk
* Messages consumed by subscribers
* Created by one or more producers
* Organized into topics(namespaces for similar  message)
* Processed by brokers(computer in message framework)
* Usually persistent over the short term

Usual case/basic idea:
a producer sends messages to topic, and consumers get/red message at their own rate.

The problem is : when that producer gets big.

## Messaging Problems:
* what if a topic gets too big for one computer?
* message are big?
* transactions to quick
* What if one computer reliable enough?
* How strongly can you guarantee delivery?

### Apache Kafka:
	* A message queue, make sure message in order.

	* Definitions:
		* Message:  an immutable array of bytes
		* Topic: a feed of messages
		* Producer: a client process outside Kafka cluster that put stuff in(a process that publishes messages to a topic)
		 * Consumer: a client process outside Kafka cluster that take stuff out.(a single-threaded process that subscribed to a topic)
		* Broker: one of the servers/computers that comprises a cluster， a broker will have many topics

Kafka(Trivial Version)
Producer- > Topic -> Consumer

More than just being a message queue for Kafka
Kafka is more than this.

# When kafka topic is big, we do Topic partitioning
 








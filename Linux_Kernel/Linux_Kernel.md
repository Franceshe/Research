## Ref:
* 
[CS241 Honor Topic: The Linux Kernel](http://cs241.cs.illinois.edu/coursebook/Honors#the-linux-kernel)
* [Linux Kernel Development: 3rd edition, Robert Love]

## The following are notes and thoughts after reading CS241 Honor Topic: The Linux Kernel
## The Linux Kernel:
* THe complexity of linux kernel is hidden in the abstraction of "system call", which is 
the userspace interface to interacting with the kernel. 

### Learning Goal:
* How does this kernel actually work? What is a kernel? 

#### What kinds of kernels are there?
* Linux Kernel
* Window Kernel
* "Darwin": Unix-like Kernel for macOS(derivative of BSD)
* others: "GNU HURD" or "zircon".

#### The classification of kernels:
* Monolithic kernel vs  Micro-kernel.
* The Linux Kernel is an Monolithic kernels.

* A monolithic kernel is essentially a kernel and all of it’s associated services as a single program.
A micro-kernel on the other hand is designed to have a main component which provides the bare-minimum 
functionality that a kernel needs.

* For Micro-kernel, This involves setting up important device drivers, the root filesystem, paging or 
other functionality that is imperative for other higher-level features to be implemented. The higher-level
features (such as a networking stack, other filesystems, and non-critical device drivers) are then 
implemented as separate programs that can interact with the kernel by some form of IPC, typically RPC.

* Sidenote: CISC vs RISC
... Same design tradeoff could be seen in ISA(Instruction set Architecture). CISC vs RISC. Where
as CISC architecture like X86 designs toward a more complicated and complite set of instructions. RISC designs
toward to hide more complexity in software, made hardware design simple.

* SideNode: Questions:
... How do you assign priority for different functionalies? Such as other higher level feartures such
as network stack is less critical than paging in the perspective of system programming?

* Sidenote: Disadvanges comparing Micro-kernel vs Monolithic kernel:
... As a result of this design, micro-kernels have traditionally been slower than monolithic kernels due to 
the IPC overhead.
... Would same result applied to RISC at such disadvantage?


## System Call Demystified
* 




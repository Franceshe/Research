# 01

## Secure communication
* HTTPS, SSL(TLS) protocols are used to prevent avesdropping or no tampering
from single pc(Bob) to network(server: Alice)

### Building block: Symmetric Encryption
      ++++++++                                     +++++++
m ->  +  E 	 + ---> (E(k,m)=c) = Cyphertext(C) -> + D    + ---->D(k,c) = m
	  ++++++++                                     +++++++
	     ^
		 |
		 k
     
	  Alice
	 
* The encryption algorithm(E) takes m(message) and shared key k 
as input, produce a corresponding ciphertext(c)
* The decryption algorithm(D) takes c(cyphertext) and shared key k
as input, product the original message(m)

* E,D: cipher
* k: secret key(eg:128 bits)
* m,c: plaintext(message), ciphertext

* Encryption algorithm is "publicly known": -> never use a proprietary cipher!
* E, D are known, K is "secret"
* Lesson learned: only use public reviewd known algorithms.


## Use Cases
### Single use key: (one time key)
### Many use key: (many times key)

## What crypography is and not

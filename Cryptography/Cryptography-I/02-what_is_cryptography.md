## 02-What is Cryptography?

## Crypto Core
* how to set up "secure key establishment"
* how to set up "secure comminication" once we have the shared key

## More crypto can do:
* Digital signature:
  * not viable as reall world signature: get one copy and paste the rest
  * make it via function of the content being signed
* Anonymous communication(mixnet):
  * further application involes Anonymous digital cash(eg.bitcoin):
	* Can I spend a "digital coin" without anyone knowing who I am as the
	way we spend in real world cash.
	* How to prevent double spending?(since digital cash is easy to copy)

### Protols 
* Election system
  * winner = majority of votes
  * without exposed the identity of individual voter
  
* Private Auction:
 * winner = highes winner/bidder pays the second highest bidder
 * the actually amount of highest bidder should be anonymouns
 
* In general: "Secure Multi Party Computation"
 * THms: The third party trusted authority can be eliminated
 * Goal:(compute f(x1, x2, x3, x4))
 * Thm: anything can be done with trusted authority, can also be
 done without!
 
 ### New crypto magic:
 * Running google search on cryptic data
 * zero knowledge(proof of knowledge)
  * Alice can prove she knows the N = P * Q while Bob don't know
  the factors of N.
  
  ### A rigorious science:
  * 1. specific precisely threat model: eg: unforggable signature
  * 2. Proposed a construction
  * 3. Proves that breaking construction under threat model will solve an
  underlying hard problem -> proof of work by solving hard problem lol
  

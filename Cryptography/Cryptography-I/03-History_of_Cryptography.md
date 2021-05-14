## History of Book
* David Kahn, "The coder breakers", 1996

## Symmetric Cipher
* Both Alice and Both use same key k

## Few Hitoric Examples(all badly broken)
1. Substitution cipher
   * K: {a->c, b->w,c ->n ..., z->a}
   * eg: c:= E(k, "bcza") = "wnac", D(k,c) = "bcza"
   
2. Caesar Cipher(no key)
   * fixed subsitution
   * eg: shift by c: {a->d, b->e, c->f, ... y->b, z->c}
   
   
3. Question: What is the sisze of key space in the substitution cipher
assuming 26 letters? 
	* Ans: 26! = 2^88 bits 
	
4. How to break Caesar(Substiution) Cipher? -> By analyze letter frequencies.

### How to break a substitution cipher?
1. Use frequency of English Letters
  * We can exploit the fact that in average English text, the occurance of some letters are
  roughtly fixed, such as "e": 12.7%, "t": 9.1%, "a": 8.1%, therefore by counting the most frequently appreared letter in the ciphertext, it is very likely to be "e", and then we look for second most frequent and third. However, after "e", "t", "a". Other frequence for letters are roughtly the same
2. Use frequency of pairs of letters(diagram)
   * "he", "an", "in", "th". Found and match by trial and error.
3. Triagram ...
4. Conclusion: for subs cipher, given ciphertext, it is pretty easy to break :)

## Vigener Cipher(16th)
* Check wiki

## Rotor Machine(1879-1973):
* Early example: The hebern machine(single motor)
* could also break by frequency of letters analysis
* Most famous: The Enigma(3-5 motors)
  * secret key: the initial setting
  * # of motor positions = 26 ^ 4 = 2^18
  * total # of keys = 2^36
  
## Digital age: Federal Data Encryption Standard(1974)
* IBM: DES: # key = 2^56 (key space); block size = 64 bits
  * unlike rotor machines encrypt one character at a time, the data encryption standard
  encrypts 64 bits at a time, namely 8 characters at a time.
  * These days DES can be used by brute force search.
* Today: AES(2001) - 128 bits, Salsa20(2008), and others

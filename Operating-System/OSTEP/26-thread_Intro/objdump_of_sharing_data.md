
sharing_data_ohoh:	file format Mach-O 64-bit x86-64


Disassembly of section __TEXT,__text:

0000000100003810 _Malloc:
100003810: 55                          	pushq	%rbp
100003811: 48 89 e5                    	movq	%rsp, %rbp
100003814: 48 83 ec 10                 	subq	$16, %rsp
100003818: 48 89 7d f8                 	movq	%rdi, -8(%rbp)
10000381c: 48 8b 7d f8                 	movq	-8(%rbp), %rdi
100003820: e8 85 05 00 00              	callq	1413 <dyld_stub_binder+0x100003daa>
100003825: 48 89 45 f0                 	movq	%rax, -16(%rbp)
100003829: 48 83 7d f0 00              	cmpq	$0, -16(%rbp)
10000382e: 0f 95 c1                    	setne	%cl
100003831: 80 f1 ff                    	xorb	$-1, %cl
100003834: 80 e1 01                    	andb	$1, %cl
100003837: 0f b6 d1                    	movzbl	%cl, %edx
10000383a: 48 63 c2                    	movslq	%edx, %rax
10000383d: 48 83 f8 00                 	cmpq	$0, %rax
100003841: 0f 84 1f 00 00 00           	je	31 <_Malloc+0x56>
100003847: 48 8d 3d 32 06 00 00        	leaq	1586(%rip), %rdi
10000384e: 48 8d 35 32 06 00 00        	leaq	1586(%rip), %rsi
100003855: 48 8d 0d 39 06 00 00        	leaq	1593(%rip), %rcx
10000385c: ba 0b 00 00 00              	movl	$11, %edx
100003861: e8 38 05 00 00              	callq	1336 <dyld_stub_binder+0x100003d9e>
100003866: e9 00 00 00 00              	jmp	0 <_Malloc+0x5b>
10000386b: 48 8b 45 f0                 	movq	-16(%rbp), %rax
10000386f: 48 83 c4 10                 	addq	$16, %rsp
100003873: 5d                          	popq	%rbp
100003874: c3                          	retq
100003875: 66 2e 0f 1f 84 00 00 00 00 00       	nopw	%cs:(%rax,%rax)
10000387f: 90                          	nop

0000000100003880 _Time_GetSeconds:
100003880: 55                          	pushq	%rbp
100003881: 48 89 e5                    	movq	%rsp, %rbp
100003884: 48 83 ec 20                 	subq	$32, %rsp
100003888: 31 c0                       	xorl	%eax, %eax
10000388a: 89 c6                       	movl	%eax, %esi
10000388c: 48 8d 7d f0                 	leaq	-16(%rbp), %rdi
100003890: e8 0f 05 00 00              	callq	1295 <dyld_stub_binder+0x100003da4>
100003895: 89 45 ec                    	movl	%eax, -20(%rbp)
100003898: 83 7d ec 00                 	cmpl	$0, -20(%rbp)
10000389c: 0f 94 c1                    	sete	%cl
10000389f: 80 f1 ff                    	xorb	$-1, %cl
1000038a2: 80 e1 01                    	andb	$1, %cl
1000038a5: 0f b6 c1                    	movzbl	%cl, %eax
1000038a8: 48 63 d0                    	movslq	%eax, %rdx
1000038ab: 48 83 fa 00                 	cmpq	$0, %rdx
1000038af: 0f 84 1f 00 00 00           	je	31 <_Time_GetSeconds+0x54>
1000038b5: 48 8d 3d e3 05 00 00        	leaq	1507(%rip), %rdi
1000038bc: 48 8d 35 c4 05 00 00        	leaq	1476(%rip), %rsi
1000038c3: 48 8d 0d e5 05 00 00        	leaq	1509(%rip), %rcx
1000038ca: ba 12 00 00 00              	movl	$18, %edx
1000038cf: e8 ca 04 00 00              	callq	1226 <dyld_stub_binder+0x100003d9e>
1000038d4: e9 00 00 00 00              	jmp	0 <_Time_GetSeconds+0x59>
1000038d9: f2 0f 10 05 8f 05 00 00     	movsd	1423(%rip), %xmm0
1000038e1: f2 48 0f 2a 4d f0           	cvtsi2sdq	-16(%rbp), %xmm1
1000038e7: f2 0f 2a 55 f8              	cvtsi2sdl	-8(%rbp), %xmm2
1000038ec: f2 0f 5e d0                 	divsd	%xmm0, %xmm2
1000038f0: f2 0f 58 ca                 	addsd	%xmm2, %xmm1
1000038f4: 0f 28 c1                    	movaps	%xmm1, %xmm0
1000038f7: 48 83 c4 20                 	addq	$32, %rsp
1000038fb: 5d                          	popq	%rbp
1000038fc: c3                          	retq
1000038fd: 0f 1f 00                    	nopl	(%rax)

0000000100003900 _work:
100003900: 55                          	pushq	%rbp
100003901: 48 89 e5                    	movq	%rsp, %rbp
100003904: 48 83 ec 10                 	subq	$16, %rsp
100003908: 89 7d fc                    	movl	%edi, -4(%rbp)
10000390b: e8 70 ff ff ff              	callq	-144 <_Time_GetSeconds>
100003910: f2 0f 11 45 f0              	movsd	%xmm0, -16(%rbp)
100003915: e8 66 ff ff ff              	callq	-154 <_Time_GetSeconds>
10000391a: f2 0f 5c 45 f0              	subsd	-16(%rbp), %xmm0
10000391f: f2 0f 2a 4d fc              	cvtsi2sdl	-4(%rbp), %xmm1
100003924: 66 0f 2e c8                 	ucomisd	%xmm0, %xmm1
100003928: 0f 86 05 00 00 00           	jbe	5 <_work+0x33>
10000392e: e9 e2 ff ff ff              	jmp	-30 <_work+0x15>
100003933: 48 83 c4 10                 	addq	$16, %rsp
100003937: 5d                          	popq	%rbp
100003938: c3                          	retq
100003939: 0f 1f 80 00 00 00 00        	nopl	(%rax)

0000000100003940 _Mutex_init:
100003940: 55                          	pushq	%rbp
100003941: 48 89 e5                    	movq	%rsp, %rbp
100003944: 48 83 ec 10                 	subq	$16, %rsp
100003948: 31 c0                       	xorl	%eax, %eax
10000394a: 89 c6                       	movl	%eax, %esi
10000394c: 48 89 7d f8                 	movq	%rdi, -8(%rbp)
100003950: 48 8b 7d f8                 	movq	-8(%rbp), %rdi
100003954: e8 7b 04 00 00              	callq	1147 <dyld_stub_binder+0x100003dd4>
100003959: 83 f8 00                    	cmpl	$0, %eax
10000395c: 0f 94 c1                    	sete	%cl
10000395f: 80 f1 ff                    	xorb	$-1, %cl
100003962: 80 e1 01                    	andb	$1, %cl
100003965: 0f b6 c1                    	movzbl	%cl, %eax
100003968: 48 63 d0                    	movslq	%eax, %rdx
10000396b: 48 83 fa 00                 	cmpq	$0, %rdx
10000396f: 0f 84 1f 00 00 00           	je	31 <_Mutex_init+0x54>
100003975: 48 8d 3d 3b 05 00 00        	leaq	1339(%rip), %rdi
10000397c: 48 8d 35 04 05 00 00        	leaq	1284(%rip), %rsi
100003983: 48 8d 0d 38 05 00 00        	leaq	1336(%rip), %rcx
10000398a: ba 1d 00 00 00              	movl	$29, %edx
10000398f: e8 0a 04 00 00              	callq	1034 <dyld_stub_binder+0x100003d9e>
100003994: e9 00 00 00 00              	jmp	0 <_Mutex_init+0x59>
100003999: 48 83 c4 10                 	addq	$16, %rsp
10000399d: 5d                          	popq	%rbp
10000399e: c3                          	retq
10000399f: 90                          	nop

00000001000039a0 _Mutex_lock:
1000039a0: 55                          	pushq	%rbp
1000039a1: 48 89 e5                    	movq	%rsp, %rbp
1000039a4: 48 83 ec 10                 	subq	$16, %rsp
1000039a8: 48 89 7d f8                 	movq	%rdi, -8(%rbp)
1000039ac: 48 8b 7d f8                 	movq	-8(%rbp), %rdi
1000039b0: e8 25 04 00 00              	callq	1061 <dyld_stub_binder+0x100003dda>
1000039b5: 89 45 f4                    	movl	%eax, -12(%rbp)
1000039b8: 83 7d f4 00                 	cmpl	$0, -12(%rbp)
1000039bc: 0f 94 c1                    	sete	%cl
1000039bf: 80 f1 ff                    	xorb	$-1, %cl
1000039c2: 80 e1 01                    	andb	$1, %cl
1000039c5: 0f b6 c1                    	movzbl	%cl, %eax
1000039c8: 48 63 d0                    	movslq	%eax, %rdx
1000039cb: 48 83 fa 00                 	cmpq	$0, %rdx
1000039cf: 0f 84 1f 00 00 00           	je	31 <_Mutex_lock+0x54>
1000039d5: 48 8d 3d 07 05 00 00        	leaq	1287(%rip), %rdi
1000039dc: 48 8d 35 a4 04 00 00        	leaq	1188(%rip), %rsi
1000039e3: 48 8d 0d c5 04 00 00        	leaq	1221(%rip), %rcx
1000039ea: ba 22 00 00 00              	movl	$34, %edx
1000039ef: e8 aa 03 00 00              	callq	938 <dyld_stub_binder+0x100003d9e>
1000039f4: e9 00 00 00 00              	jmp	0 <_Mutex_lock+0x59>
1000039f9: 48 83 c4 10                 	addq	$16, %rsp
1000039fd: 5d                          	popq	%rbp
1000039fe: c3                          	retq
1000039ff: 90                          	nop

0000000100003a00 _Mutex_unlock:
100003a00: 55                          	pushq	%rbp
100003a01: 48 89 e5                    	movq	%rsp, %rbp
100003a04: 48 83 ec 10                 	subq	$16, %rsp
100003a08: 48 89 7d f8                 	movq	%rdi, -8(%rbp)
100003a0c: 48 8b 7d f8                 	movq	-8(%rbp), %rdi
100003a10: e8 cb 03 00 00              	callq	971 <dyld_stub_binder+0x100003de0>
100003a15: 89 45 f4                    	movl	%eax, -12(%rbp)
100003a18: 83 7d f4 00                 	cmpl	$0, -12(%rbp)
100003a1c: 0f 94 c1                    	sete	%cl
100003a1f: 80 f1 ff                    	xorb	$-1, %cl
100003a22: 80 e1 01                    	andb	$1, %cl
100003a25: 0f b6 c1                    	movzbl	%cl, %eax
100003a28: 48 63 d0                    	movslq	%eax, %rdx
100003a2b: 48 83 fa 00                 	cmpq	$0, %rdx
100003a2f: 0f 84 1f 00 00 00           	je	31 <_Mutex_unlock+0x54>
100003a35: 48 8d 3d b2 04 00 00        	leaq	1202(%rip), %rdi
100003a3c: 48 8d 35 44 04 00 00        	leaq	1092(%rip), %rsi
100003a43: 48 8d 0d 65 04 00 00        	leaq	1125(%rip), %rcx
100003a4a: ba 27 00 00 00              	movl	$39, %edx
100003a4f: e8 4a 03 00 00              	callq	842 <dyld_stub_binder+0x100003d9e>
100003a54: e9 00 00 00 00              	jmp	0 <_Mutex_unlock+0x59>
100003a59: 48 83 c4 10                 	addq	$16, %rsp
100003a5d: 5d                          	popq	%rbp
100003a5e: c3                          	retq
100003a5f: 90                          	nop

0000000100003a60 _Cond_init:
100003a60: 55                          	pushq	%rbp
100003a61: 48 89 e5                    	movq	%rsp, %rbp
100003a64: 48 83 ec 10                 	subq	$16, %rsp
100003a68: 31 c0                       	xorl	%eax, %eax
100003a6a: 89 c6                       	movl	%eax, %esi
100003a6c: 48 89 7d f8                 	movq	%rdi, -8(%rbp)
100003a70: 48 8b 7d f8                 	movq	-8(%rbp), %rdi
100003a74: e8 3d 03 00 00              	callq	829 <dyld_stub_binder+0x100003db6>
100003a79: 83 f8 00                    	cmpl	$0, %eax
100003a7c: 0f 94 c1                    	sete	%cl
100003a7f: 80 f1 ff                    	xorb	$-1, %cl
100003a82: 80 e1 01                    	andb	$1, %cl
100003a85: 0f b6 c1                    	movzbl	%cl, %eax
100003a88: 48 63 d0                    	movslq	%eax, %rdx
100003a8b: 48 83 fa 00                 	cmpq	$0, %rdx
100003a8f: 0f 84 1f 00 00 00           	je	31 <_Cond_init+0x54>
100003a95: 48 8d 3d 5f 04 00 00        	leaq	1119(%rip), %rdi
100003a9c: 48 8d 35 e4 03 00 00        	leaq	996(%rip), %rsi
100003aa3: 48 8d 0d 5b 04 00 00        	leaq	1115(%rip), %rcx
100003aaa: ba 2b 00 00 00              	movl	$43, %edx
100003aaf: e8 ea 02 00 00              	callq	746 <dyld_stub_binder+0x100003d9e>
100003ab4: e9 00 00 00 00              	jmp	0 <_Cond_init+0x59>
100003ab9: 48 83 c4 10                 	addq	$16, %rsp
100003abd: 5d                          	popq	%rbp
100003abe: c3                          	retq
100003abf: 90                          	nop

0000000100003ac0 _Cond_wait:
100003ac0: 55                          	pushq	%rbp
100003ac1: 48 89 e5                    	movq	%rsp, %rbp
100003ac4: 48 83 ec 20                 	subq	$32, %rsp
100003ac8: 48 89 7d f8                 	movq	%rdi, -8(%rbp)
100003acc: 48 89 75 f0                 	movq	%rsi, -16(%rbp)
100003ad0: 48 8b 7d f8                 	movq	-8(%rbp), %rdi
100003ad4: 48 8b 75 f0                 	movq	-16(%rbp), %rsi
100003ad8: e8 e5 02 00 00              	callq	741 <dyld_stub_binder+0x100003dc2>
100003add: 89 45 ec                    	movl	%eax, -20(%rbp)
100003ae0: 83 7d ec 00                 	cmpl	$0, -20(%rbp)
100003ae4: 0f 94 c1                    	sete	%cl
100003ae7: 80 f1 ff                    	xorb	$-1, %cl
100003aea: 80 e1 01                    	andb	$1, %cl
100003aed: 0f b6 c1                    	movzbl	%cl, %eax
100003af0: 48 63 d0                    	movslq	%eax, %rdx
100003af3: 48 83 fa 00                 	cmpq	$0, %rdx
100003af7: 0f 84 1f 00 00 00           	je	31 <_Cond_wait+0x5c>
100003afd: 48 8d 3d 21 04 00 00        	leaq	1057(%rip), %rdi
100003b04: 48 8d 35 7c 03 00 00        	leaq	892(%rip), %rsi
100003b0b: 48 8d 0d 9d 03 00 00        	leaq	925(%rip), %rcx
100003b12: ba 30 00 00 00              	movl	$48, %edx
100003b17: e8 82 02 00 00              	callq	642 <dyld_stub_binder+0x100003d9e>
100003b1c: e9 00 00 00 00              	jmp	0 <_Cond_wait+0x61>
100003b21: 48 83 c4 20                 	addq	$32, %rsp
100003b25: 5d                          	popq	%rbp
100003b26: c3                          	retq
100003b27: 66 0f 1f 84 00 00 00 00 00  	nopw	(%rax,%rax)

0000000100003b30 _Cond_signal:
100003b30: 55                          	pushq	%rbp
100003b31: 48 89 e5                    	movq	%rsp, %rbp
100003b34: 48 83 ec 10                 	subq	$16, %rsp
100003b38: 48 89 7d f8                 	movq	%rdi, -8(%rbp)
100003b3c: 48 8b 7d f8                 	movq	-8(%rbp), %rdi
100003b40: e8 77 02 00 00              	callq	631 <dyld_stub_binder+0x100003dbc>
100003b45: 89 45 f4                    	movl	%eax, -12(%rbp)
100003b48: 83 7d f4 00                 	cmpl	$0, -12(%rbp)
100003b4c: 0f 94 c1                    	sete	%cl
100003b4f: 80 f1 ff                    	xorb	$-1, %cl
100003b52: 80 e1 01                    	andb	$1, %cl
100003b55: 0f b6 c1                    	movzbl	%cl, %eax
100003b58: 48 63 d0                    	movslq	%eax, %rdx
100003b5b: 48 83 fa 00                 	cmpq	$0, %rdx
100003b5f: 0f 84 1f 00 00 00           	je	31 <_Cond_signal+0x54>
100003b65: 48 8d 3d c3 03 00 00        	leaq	963(%rip), %rdi
100003b6c: 48 8d 35 14 03 00 00        	leaq	788(%rip), %rsi
100003b73: 48 8d 0d 35 03 00 00        	leaq	821(%rip), %rcx
100003b7a: ba 35 00 00 00              	movl	$53, %edx
100003b7f: e8 1a 02 00 00              	callq	538 <dyld_stub_binder+0x100003d9e>
100003b84: e9 00 00 00 00              	jmp	0 <_Cond_signal+0x59>
100003b89: 48 83 c4 10                 	addq	$16, %rsp
100003b8d: 5d                          	popq	%rbp
100003b8e: c3                          	retq
100003b8f: 90                          	nop

0000000100003b90 _Pthread_create:
100003b90: 55                          	pushq	%rbp
100003b91: 48 89 e5                    	movq	%rsp, %rbp
100003b94: 48 83 ec 30                 	subq	$48, %rsp
100003b98: 48 89 7d f8                 	movq	%rdi, -8(%rbp)
100003b9c: 48 89 75 f0                 	movq	%rsi, -16(%rbp)
100003ba0: 48 89 55 e8                 	movq	%rdx, -24(%rbp)
100003ba4: 48 89 4d e0                 	movq	%rcx, -32(%rbp)
100003ba8: 48 8b 7d f8                 	movq	-8(%rbp), %rdi
100003bac: 48 8b 75 f0                 	movq	-16(%rbp), %rsi
100003bb0: 48 8b 55 e8                 	movq	-24(%rbp), %rdx
100003bb4: 48 8b 4d e0                 	movq	-32(%rbp), %rcx
100003bb8: e8 0b 02 00 00              	callq	523 <dyld_stub_binder+0x100003dc8>
100003bbd: 89 45 dc                    	movl	%eax, -36(%rbp)
100003bc0: 83 7d dc 00                 	cmpl	$0, -36(%rbp)
100003bc4: 41 0f 94 c0                 	sete	%r8b
100003bc8: 41 80 f0 ff                 	xorb	$-1, %r8b
100003bcc: 41 80 e0 01                 	andb	$1, %r8b
100003bd0: 41 0f b6 c0                 	movzbl	%r8b, %eax
100003bd4: 48 63 c8                    	movslq	%eax, %rcx
100003bd7: 48 83 f9 00                 	cmpq	$0, %rcx
100003bdb: 0f 84 1f 00 00 00           	je	31 <_Pthread_create+0x70>
100003be1: 48 8d 3d 53 03 00 00        	leaq	851(%rip), %rdi
100003be8: 48 8d 35 98 02 00 00        	leaq	664(%rip), %rsi
100003bef: 48 8d 0d b9 02 00 00        	leaq	697(%rip), %rcx
100003bf6: ba 3c 00 00 00              	movl	$60, %edx
100003bfb: e8 9e 01 00 00              	callq	414 <dyld_stub_binder+0x100003d9e>
100003c00: e9 00 00 00 00              	jmp	0 <_Pthread_create+0x75>
100003c05: 48 83 c4 30                 	addq	$48, %rsp
100003c09: 5d                          	popq	%rbp
100003c0a: c3                          	retq
100003c0b: 0f 1f 44 00 00              	nopl	(%rax,%rax)

0000000100003c10 _Pthread_join:
100003c10: 55                          	pushq	%rbp
100003c11: 48 89 e5                    	movq	%rsp, %rbp
100003c14: 48 83 ec 20                 	subq	$32, %rsp
100003c18: 48 89 7d f8                 	movq	%rdi, -8(%rbp)
100003c1c: 48 89 75 f0                 	movq	%rsi, -16(%rbp)
100003c20: 48 8b 7d f8                 	movq	-8(%rbp), %rdi
100003c24: 48 8b 75 f0                 	movq	-16(%rbp), %rsi
100003c28: e8 a1 01 00 00              	callq	417 <dyld_stub_binder+0x100003dce>
100003c2d: 89 45 ec                    	movl	%eax, -20(%rbp)
100003c30: 83 7d ec 00                 	cmpl	$0, -20(%rbp)
100003c34: 0f 94 c1                    	sete	%cl
100003c37: 80 f1 ff                    	xorb	$-1, %cl
100003c3a: 80 e1 01                    	andb	$1, %cl
100003c3d: 0f b6 c1                    	movzbl	%cl, %eax
100003c40: 48 63 d0                    	movslq	%eax, %rdx
100003c43: 48 83 fa 00                 	cmpq	$0, %rdx
100003c47: 0f 84 1f 00 00 00           	je	31 <_Pthread_join+0x5c>
100003c4d: 48 8d 3d f6 02 00 00        	leaq	758(%rip), %rdi
100003c54: 48 8d 35 2c 02 00 00        	leaq	556(%rip), %rsi
100003c5b: 48 8d 0d 4d 02 00 00        	leaq	589(%rip), %rcx
100003c62: ba 41 00 00 00              	movl	$65, %edx
100003c67: e8 32 01 00 00              	callq	306 <dyld_stub_binder+0x100003d9e>
100003c6c: e9 00 00 00 00              	jmp	0 <_Pthread_join+0x61>
100003c71: 48 83 c4 20                 	addq	$32, %rsp
100003c75: 5d                          	popq	%rbp
100003c76: c3                          	retq
100003c77: 66 0f 1f 84 00 00 00 00 00  	nopw	(%rax,%rax)

0000000100003c80 _mythread:
100003c80: 55                          	pushq	%rbp
100003c81: 48 89 e5                    	movq	%rsp, %rbp
100003c84: 48 83 ec 10                 	subq	$16, %rsp
100003c88: 48 89 7d f8                 	movq	%rdi, -8(%rbp)
100003c8c: 48 8b 75 f8                 	movq	-8(%rbp), %rsi
100003c90: 48 8d 3d c0 02 00 00        	leaq	704(%rip), %rdi
100003c97: b0 00                       	movb	$0, %al
100003c99: e8 12 01 00 00              	callq	274 <dyld_stub_binder+0x100003db0>
100003c9e: c7 45 f4 00 00 00 00        	movl	$0, -12(%rbp)
100003ca5: f2 0f 10 05 cb 01 00 00     	movsd	459(%rip), %xmm0
100003cad: f2 0f 2a 4d f4              	cvtsi2sdl	-12(%rbp), %xmm1
100003cb2: 66 0f 2e c1                 	ucomisd	%xmm1, %xmm0
100003cb6: 0f 86 1d 00 00 00           	jbe	29 <_mythread+0x59>
100003cbc: 8b 05 a6 43 00 00           	movl	17318(%rip), %eax
100003cc2: 83 c0 01                    	addl	$1, %eax
100003cc5: 89 05 9d 43 00 00           	movl	%eax, 17309(%rip)
100003ccb: 8b 45 f4                    	movl	-12(%rbp), %eax
100003cce: 83 c0 01                    	addl	$1, %eax
100003cd1: 89 45 f4                    	movl	%eax, -12(%rbp)
100003cd4: e9 cc ff ff ff              	jmp	-52 <_mythread+0x25>
100003cd9: 48 8b 75 f8                 	movq	-8(%rbp), %rsi
100003cdd: 48 8d 3d 7e 02 00 00        	leaq	638(%rip), %rdi
100003ce4: b0 00                       	movb	$0, %al
100003ce6: e8 c5 00 00 00              	callq	197 <dyld_stub_binder+0x100003db0>
100003ceb: 31 c9                       	xorl	%ecx, %ecx
100003ced: 89 ca                       	movl	%ecx, %edx
100003cef: 89 45 f0                    	movl	%eax, -16(%rbp)
100003cf2: 48 89 d0                    	movq	%rdx, %rax
100003cf5: 48 83 c4 10                 	addq	$16, %rsp
100003cf9: 5d                          	popq	%rbp
100003cfa: c3                          	retq
100003cfb: 0f 1f 44 00 00              	nopl	(%rax,%rax)

0000000100003d00 _main:
100003d00: 55                          	pushq	%rbp
100003d01: 48 89 e5                    	movq	%rsp, %rbp
100003d04: 48 83 ec 30                 	subq	$48, %rsp
100003d08: c7 45 fc 00 00 00 00        	movl	$0, -4(%rbp)
100003d0f: 89 7d f8                    	movl	%edi, -8(%rbp)
100003d12: 48 89 75 f0                 	movq	%rsi, -16(%rbp)
100003d16: 8b 35 4c 43 00 00           	movl	17228(%rip), %esi
100003d1c: 48 8d 3d 49 02 00 00        	leaq	585(%rip), %rdi
100003d23: b0 00                       	movb	$0, %al
100003d25: e8 86 00 00 00              	callq	134 <dyld_stub_binder+0x100003db0>
100003d2a: 31 c9                       	xorl	%ecx, %ecx
100003d2c: 89 ce                       	movl	%ecx, %esi
100003d2e: 48 8d 7d e8                 	leaq	-24(%rbp), %rdi
100003d32: 48 8d 15 47 ff ff ff        	leaq	-185(%rip), %rdx
100003d39: 48 8d 0d 47 02 00 00        	leaq	583(%rip), %rcx
100003d40: 89 45 dc                    	movl	%eax, -36(%rbp)
100003d43: e8 48 fe ff ff              	callq	-440 <_Pthread_create>
100003d48: 31 c0                       	xorl	%eax, %eax
100003d4a: 89 c6                       	movl	%eax, %esi
100003d4c: 48 8d 7d e0                 	leaq	-32(%rbp), %rdi
100003d50: 48 8d 15 29 ff ff ff        	leaq	-215(%rip), %rdx
100003d57: 48 8d 0d 2b 02 00 00        	leaq	555(%rip), %rcx
100003d5e: e8 2d fe ff ff              	callq	-467 <_Pthread_create>
100003d63: 31 c0                       	xorl	%eax, %eax
100003d65: 89 c6                       	movl	%eax, %esi
100003d67: 48 8b 7d e8                 	movq	-24(%rbp), %rdi
100003d6b: e8 a0 fe ff ff              	callq	-352 <_Pthread_join>
100003d70: 31 c0                       	xorl	%eax, %eax
100003d72: 89 c6                       	movl	%eax, %esi
100003d74: 48 8b 7d e0                 	movq	-32(%rbp), %rdi
100003d78: e8 93 fe ff ff              	callq	-365 <_Pthread_join>
100003d7d: 8b 35 e5 42 00 00           	movl	17125(%rip), %esi
100003d83: 48 8d 3d 01 02 00 00        	leaq	513(%rip), %rdi
100003d8a: b0 00                       	movb	$0, %al
100003d8c: e8 1f 00 00 00              	callq	31 <dyld_stub_binder+0x100003db0>
100003d91: 31 f6                       	xorl	%esi, %esi
100003d93: 89 45 d8                    	movl	%eax, -40(%rbp)
100003d96: 89 f0                       	movl	%esi, %eax
100003d98: 48 83 c4 30                 	addq	$48, %rsp
100003d9c: 5d                          	popq	%rbp
100003d9d: c3                          	retq

Disassembly of section __TEXT,__stubs:

0000000100003d9e __stubs:
100003d9e: ff 25 5c 42 00 00           	jmpq	*16988(%rip)
100003da4: ff 25 5e 42 00 00           	jmpq	*16990(%rip)
100003daa: ff 25 60 42 00 00           	jmpq	*16992(%rip)
100003db0: ff 25 62 42 00 00           	jmpq	*16994(%rip)
100003db6: ff 25 64 42 00 00           	jmpq	*16996(%rip)
100003dbc: ff 25 66 42 00 00           	jmpq	*16998(%rip)
100003dc2: ff 25 68 42 00 00           	jmpq	*17000(%rip)
100003dc8: ff 25 6a 42 00 00           	jmpq	*17002(%rip)
100003dce: ff 25 6c 42 00 00           	jmpq	*17004(%rip)
100003dd4: ff 25 6e 42 00 00           	jmpq	*17006(%rip)
100003dda: ff 25 70 42 00 00           	jmpq	*17008(%rip)
100003de0: ff 25 72 42 00 00           	jmpq	*17010(%rip)

Disassembly of section __TEXT,__stub_helper:

0000000100003de8 __stub_helper:
100003de8: 4c 8d 1d 71 42 00 00        	leaq	17009(%rip), %r11
100003def: 41 53                       	pushq	%r11
100003df1: ff 25 09 02 00 00           	jmpq	*521(%rip)
100003df7: 90                          	nop
100003df8: 68 00 00 00 00              	pushq	$0
100003dfd: e9 e6 ff ff ff              	jmp	-26 <__stub_helper>
100003e02: 68 14 00 00 00              	pushq	$20
100003e07: e9 dc ff ff ff              	jmp	-36 <__stub_helper>
100003e0c: 68 28 00 00 00              	pushq	$40
100003e11: e9 d2 ff ff ff              	jmp	-46 <__stub_helper>
100003e16: 68 36 00 00 00              	pushq	$54
100003e1b: e9 c8 ff ff ff              	jmp	-56 <__stub_helper>
100003e20: 68 44 00 00 00              	pushq	$68
100003e25: e9 be ff ff ff              	jmp	-66 <__stub_helper>
100003e2a: 68 5d 00 00 00              	pushq	$93
100003e2f: e9 b4 ff ff ff              	jmp	-76 <__stub_helper>
100003e34: 68 78 00 00 00              	pushq	$120
100003e39: e9 aa ff ff ff              	jmp	-86 <__stub_helper>
100003e3e: 68 91 00 00 00              	pushq	$145
100003e43: e9 a0 ff ff ff              	jmp	-96 <__stub_helper>
100003e48: 68 a7 00 00 00              	pushq	$167
100003e4d: e9 96 ff ff ff              	jmp	-106 <__stub_helper>
100003e52: 68 bb 00 00 00              	pushq	$187
100003e57: e9 8c ff ff ff              	jmp	-116 <__stub_helper>
100003e5c: 68 d5 00 00 00              	pushq	$213
100003e61: e9 82 ff ff ff              	jmp	-126 <__stub_helper>
100003e66: 68 ef 00 00 00              	pushq	$239
100003e6b: e9 78 ff ff ff              	jmp	-136 <__stub_helper>

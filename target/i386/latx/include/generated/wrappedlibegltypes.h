#ifndef __wrappedlibeglTYPES_H_
#define __wrappedlibeglTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS()
#endif

typedef void* (*pFp_t)(void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(eglGetProcAddress, pFp_t)

#endif // __wrappedlibeglTYPES_H_

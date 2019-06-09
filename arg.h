#ifndef ARG_H__
#define ARG_H__

#define NEXT_ARG()	argv++, argc--

#define EARGF(x)	((argv[0][i+1] != '\0' || argv[1] == NULL) ? \
				((x), (char *)0) : (brk = 1, NEXT_ARG(), argv[0]))

#endif

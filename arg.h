/*
 * Copy me if you can.
 * by 20h
 */

#ifndef ARG_H__
#define ARG_H__

#define EARGF(x)	((argv[0][i_+1] == '\0' && argv[1] == NULL)?\
				((x), abort(), (char *)0) :\
				(brk_ = 1, (argv[0][i_+1] != '\0')?\
					(&argv[0][i_+1]) :\
					(argc--, argv++, argv[0])))

#endif

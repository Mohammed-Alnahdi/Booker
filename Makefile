# Booker - Quick Access Software
# See LICENSE file for copyright and license details.

PROG = booker
CC = gcc
CFLAGS = `pkg-config --libs --cflags gtk+-3.0`

compaile: 
	${CC} -o ${PROG} ${PROG}.c  ${CFLAGS}  

install: compaile
	@cp ${PROG} /bin/

uninstall: 
	rm /bin/${PROG}

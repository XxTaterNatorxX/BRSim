brsim: card.o util.o battle.o
	gcc card.o util.o battle.o -o brsim
card.o: card.c card.h util.h
	gcc -c card.c
util.o: util.c util.h
	gcc -c util.c
battle.o: battle/battle.c battle/battle.h util.h card.h
	gcc -c battle/battle.c
clean:
	rm -f brsim *.o
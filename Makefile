Tp_Note.out: main.o Gares.o Constructible.o Chance.o Depart.o Prison.o Plateau.o Partie.o Joueur.o Case.o Achetable.o
	g++ -o Tp_Note.out main.o Gares.o Constructible.o Chance.o Depart.o Prison.o Plateau.o Partie.o Joueur.o Case.o Achetable.o

main.o: main.cpp Gares.h Constructible.h Chance.h Depart.h Prison.h Plateau.h Partie.h Joueur.h
	g++ -c main.cpp

Gares.o: Gares.cpp Case.h Achetable.h Gares.h 
	g++ -c Gares.cpp

Constructible.o: Constructible.cpp Case.h Achetable.h Constructible.h 
	g++ -c Constructible.cpp

Chance.o: Chance.cpp Case.h Chance.h
	g++ -c Chance.cpp

Depart.o: Depart.cpp Case.h Depart.h
	g++ -c Depart.cpp
	
Achetable.o: Achetable.cpp Case.h Achetable.h
	g++ -c Achetable.cpp

Case.o: Case.cpp Case.h 
	g++ -c Case.cpp

Prison.o: Prison.cpp Case.h Prison.h
	g++ -c Prison.cpp

Plateau.o: Plateau.cpp Case.h Achetable.h Plateau.h Constructible.h Chance.h Depart.h Prison.h
	g++ -c Plateau.cpp

Partie.o : Partie.cpp Partie.h Plateau.h Joueur.h
	g++ -c Partie.cpp

Joueur.o : Joueur.cpp Joueur.h
	g++ -c Joueur.cpp

clean:
	rm *.o
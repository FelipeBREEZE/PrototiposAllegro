// 19-1-2012 by A4i...

#include <stdio.h>
#include <windows.h>

#define C3  130
#define Db3 138
#define D3  146
#define Eb3 155
#define E3  164
#define F3  174
#define Gb3 185
#define G3  196
#define Ab3 207
#define A3  220
#define Bb3 233
#define B3  246

#define C4  261
#define Db4 277
#define D4  293
#define Eb4 311
#define E4  329
#define F4  349
#define Gb4 369
#define G4  392
#define Ab4 415
#define A4  440
#define Bb4 466
#define B4  493

#define C5  523
#define Db5 544
#define D5  587
#define Eb5 622
#define E5  659
#define F5  698
#define Gb5 739
#define G5  783
#define Ab5 830
#define A5  880
#define Bb5 932
#define B5  987

#define C6  1046
#define Db6 1108
#define D6  1174
#define Eb6 1244
#define E6  1318
#define F6  1396
#define Gb6 1479
#define G6  1567
#define Ab6 1661
#define A6  1760
#define Bb6 1864
#define B6  1975

#define C7  2093
#define Db7 2217
#define D7  2349
#define Eb7 2489
#define E7  2637
#define F7  2794
#define Gb7 2960
#define G7  3136
#define Ab7 3322
#define A7  3520
#define Bb7 3729
#define B7  3951

#define full 600
#define half full / 2

// ---------------------------------------------------------------------- Melody

void refrenSolo()
{
	Beep(E5, half);
	Beep(E5, half);
	Beep(E5, half);

	Sleep(half);

	Beep(E5, half);
	Beep(E5, half);
	Beep(E5, half);

	Sleep(half);

	Beep(E5, half);
	Beep(G5, half);
	Beep(C5, half);
	Beep(D5, half);
	Beep(E5, half);

	Beep(C4, half);
	Beep(D4, half);
	Beep(E4, half);

	Beep(F5, half);
	Beep(F5, half);
	Beep(F5, half);

	Sleep(half);

	Beep(F5, half);
	Beep(E5, half);
	Beep(E5, half);

	Sleep(half);

	Beep(E5, half);
	Beep(D5, half);
	Beep(D5, half);
	Beep(E5, half);
	Beep(D5, half);

	Sleep(half);

	Beep(G5, half);

	Sleep(half);

	// -----------

	Beep(E5, half);
	Beep(E5, half);
	Beep(E5, half);

	Sleep(half);

	Beep(E5, half);
	Beep(E5, half);
	Beep(E5, half);

	Sleep(half);

	Beep(E5, half);
	Beep(G5, half);
	Beep(C5, half);
	Beep(D5, half);
	Beep(E5, half);

	Beep(C4, half);
	Beep(D4, half);
	Beep(E4, half);

	Beep(F5, half);
	Beep(F5, half);
	Beep(F5, half);

	Sleep(half);

	Beep(F5, half);
	Beep(E5, half);
	Beep(E5, half);

	Sleep(half);

	Beep(G5, half);
	Beep(G5, half);
	Beep(F5, half);
	Beep(D5, half);
	Beep(C5, full);

	Sleep(full);
}

void coupleSolo()
{
	Beep(G4, half);
	Beep(E5, half);
	Beep(D5, half);
	Beep(C5, half);
	Beep(G4, full);

	Sleep(half * 2);

	Beep(G4, half);
	Beep(E5, half);
	Beep(D5, half);
	Beep(C5, half);
	Beep(A4, full);

	Sleep(full);

	Beep(A4, half);
	Beep(F5, half);
	Beep(E5, half);
	Beep(D5, half);
	Beep(G5, full);

	Sleep(full);

	Beep(A5, half);
	Beep(A5, half);
	Beep(G5, half);
	Beep(Eb5, half);
	Beep(E5, full);

	Sleep(full);

	// -----------

	Beep(G4, half);
	Beep(E5, half);
	Beep(D5, half);
	Beep(C5, half);
	Beep(G4, full);

	Sleep(full);

	Beep(G4, half);
	Beep(E5, half);
	Beep(D5, half);
	Beep(C5, half);
	Beep(A4, full);

	Sleep(full);

	Beep(A4, half);
	Beep(F5, half);
	Beep(E5, half);
	Beep(D5, half);
	Beep(G5, full);

	Sleep(full);

	Beep(A5, half);
	Beep(G5, half);
	Beep(F5, half);
	Beep(D5, half);
	Beep(C5, full);

	Sleep(full);
}

// ------------------------------------------------------------------- Bass Line

void refrenBass()
{
	Beep(C4, full);
	Beep(G3, full);
	Beep(C4, full);
	Beep(G3, full);
	Beep(C4, full);
	Beep(G3, full);
	Beep(C4, half);

	Beep(C3, half);
	Beep(D3, half);
	Beep(E3, half);

	Beep(F4, full);
	Beep(C4, full);
	Beep(C4, full);
	Beep(G3, full);
	Beep(G3, full);
	Beep(D3, full);
	Beep(G3, full);
	Beep(G4, full);

	// -----------

	Beep(C4, full);
	Beep(G3, full);
	Beep(C4, full);
	Beep(G3, full);
	Beep(C4, full);
	Beep(G3, full);
	Beep(C4, half);

	Beep(C3, half);
	Beep(D3, half);
	Beep(E3, half);

	Beep(F4, full);
	Beep(C4, full);
	Beep(C4, full);
	Beep(G4, full);
	Beep(G4, half);
	Beep(G4, half);
	Beep(F4, half);
	Beep(D4, half);
	Beep(C4, full);

	Sleep(full);
}

void coupleBass()
{
	Beep(C4, full);
	Beep(G3, full);
	Beep(C4, full);
	Beep(G3, full);
	Beep(C4, full);
	Beep(G3, full);

	Beep(F3, full);
	Beep(C4, full);
	Beep(F3, full);
	Beep(C4, full);

	Beep(G3, full);
	Beep(D4, full);
	Beep(G3, full);
	Beep(D4, full);

	Beep(C4, full);
	Beep(G3, full);

	// -----------

	Beep(C4, full);
	Beep(G3, full);
	Beep(C4, full);
	Beep(G3, full);
	Beep(C4, full);
	Beep(G3, full);

	Beep(F3, full);
	Beep(C4, full);
	Beep(F3, full);
	Beep(C4, full);

	Beep(G3, full);
	Beep(D4, full);
	Beep(G3, full);
	Beep(D4, full);

	Beep(C4, full);
	Beep(G3, full);
}

int main()
{
	int action, inCheck;

Begin:

	puts("Happy New Year!!!\n");

	puts("Select one option: ");
	puts("1. Melody");
	puts("2. Bass Line");
	puts("3. Application.Exit\n");

	do
	{
		printf("Your action: ");
		inCheck = scanf("%d", &action);
		fflush(stdin);
	} while (!inCheck || (action < 1) || (action > 3));

	if (action == 1)
	{
		refrenSolo();
		coupleSolo();
		refrenSolo();

		system("cls");
		goto Begin;
	}
	else if (action == 2)
	{
		refrenBass();
		coupleBass();
		refrenBass();

		system("cls");
		goto Begin;
	}

	return 0;
}
#include "stdafx.h"
#include "notes.h"

// http://gtwiki.2102.su/index.php?title=%D0%9D%D0%BE%D1%82%D1%8B_%D0%B8_%D1%87%D0%B0%D1%81%D1%82%D0%BE%D1%82%D0%B0

using namespace std;

int main()
{
	vector<Note> notes = createNotes(48, "A3");

	for (int i = 0; i < notes.size(); i++)
	{
		cout << notes[i].name << endl;
		Beep(notes[i].freq, 100);
	}

    return 0;
}
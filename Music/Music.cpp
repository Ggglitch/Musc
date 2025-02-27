#include "stdafx.h"
#include "piano.h"
#include "utility.h"

int main()
{
	setlocale(LC_ALL, "rus");

	showConsoleCursor(false);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	system("MODE CON: COLS=134 LINES=15");

	Piano piano;

	piano.showKeyboard();
	piano.updateKeyboardDisplay();

	while (true)
	{
		piano.checkInput();
	}

    return 0;
}
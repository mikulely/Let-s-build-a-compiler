#ifndef _CRADLE_H
#define _CRADLE_H

#define UPCASE(C) ((1<<6)| (C))
#define MAX_BUF 100

static char tmp[MAX_BUF];

// Lookahead Character
char Look;

// Read New Character From Input Stream
void GetChar();

// Report an Error
void Error(char *s);
// Report Error and Halt
void Abort(char *s);
// Report What Was Expected
void Expected(char *s);
// Match a Specific Input Character
// If matched, continue GetChar
// If not matched, exits.
void Match(char x);

// Recognize an Alpha Character
int IsAlpha(char c);
// Recognize a Decimal Digit
int IsDigit(char c);

// Get an Identifier
char GetName();
// Get an Number
char GetNum();

// Output a String with Tab
void Emit(char *s);
// Output a String with Tab and CRLF
void EmitLn(char *s);

// Initialize
void Init();

#endif

// Header file declaring functions from './tokenfuns.c' relevant to Regal lexing.

# include "tokens.h"

#ifndef TOKENFUNS_H
#define TOKENFUNS_H

// Free an Integ object (defined in './tokens.h').
void free_integ(Integ*);

// Free a Vari object (defined in './tokens.h').
void free_var(Vari*);

/*
Takes a Token value (defined in ./tokens.h) and a pointer to an object and returns the string 
representation of that token. The object is used for tokens that contain data (e.g. Int(12)). 
Returned strings that contain this data must be freed by the caller. Assume that a given token 
is paired with a pointer to the correct object.
*/
char* disp_token(Token, void* obj);

#endif
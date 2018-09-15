# LexLuthor
Lexer in C language using DFA state machine (unlike the one used in gcc)

The current `lexer.c` is a hardcoded one. Another one called `lex.c` will be made shortly.

The objective here is to implement a lexer using state machines (believeably, discrete finite automata). The lexical analysis must yield a listing of keywords and identifiers. We are allowed to have a hard array of keywords. For this, I am unable to find any `tokens.h` or `keywords.h` library containing such an in-built list. So, I'll have to list the keywords of each language to analyse by hand. This is tedious and obviously not the preferred way of doing this sort of thing.
The tokenizer has to made with the logic that keyword and identifiers are character followed by a digit or character and so on.

Lots left to do. Gah!


## How to compile and run C programs
```bash
$ gcc lexer.c
$ ./a.out
```

## Cannibalizing the program
```bash
$ cp lexer.c sample.txt
$ ./a.out
```

## Running Lex programs
Lex programs have extension `.l`
```bash
lex prgm.l
gcc lex.y.y.c
./a.out
```
I don't know. This is what Hareesh sir wrote on the board. I haven't gotten to the lex language part yet.

I'm still struggling to construct the required FSM to identify tokens. So, the first step is to think about just operators. Let's say relational operators like `==, !=, <, >, <=, =>`. Maybe using switch case and again if-statements, I could identify those but I'm not sure how all the pieces are going to fit together. So better to draw the diagram...I'm sleepy...ZZzzzz...

## Things I ought to refer but haven't yet because I am me and hello, nice to meet you. Do you like ring-a-ring-a-roses pockets full of spiders?
- https://stackoverflow.com/questions/23329441/implementing-a-lexer-identifying-tokens-after-creating-dfa
- https://www.tutorialspoint.com/automata_theory/non_deterministic_finite_automaton.htm
- https://softwareengineering.stackexchange.com/questions/127889/writing-a-lexer-in-c

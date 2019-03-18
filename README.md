# LexLuthor
Lexer in C language using DFA state machine (unlike the one used in gcc)

The current `lexer.c` is a hardcoded one. Another one called `lex.c` ~~will be made shortly~~ has been made : it cleanly shows a lexer using DFA in C. Hope this helps you.

The objective here is to implement a lexer using state machines (believeably, discrete finite automata). The lexical analysis must yield a listing of keywords and identifiers. We are allowed to have a hard array of keywords. For this, I am unable to find any `tokens.h` or `keywords.h` library containing such an in-built list. So, I'll have to list the keywords of each language to analyse by hand. This is tedious and obviously not the preferred way of doing this sort of thing.
The tokenizer has to made with the logic that keyword and identifiers are character followed by a digit or character and so on.

<center><marquee> \>> Lots left to do. Gah! << </marquee></center>

(25/09) One idea I have is to provide some visualizations of the number of tokens identified. 
Contrast the word classifcations of the contents of each `sample.txt` input.
We obviously need to work on actual file handling first.

[*tba wiki*] Yesterday, my friend Reshma Roy gave a talk on Lexical Analysis of English and Vietnamese French. This has opened my eyes to the possibility that beyond programming languages, a lexer has application in everyday linguistic analysis. Perhaps, using word embeddings (with `word2vec`) and such, we would be able to expand the [LexLuthor](nickkartha.github.io/LexLuthor) to be a very general lexer and word classifier. As of now, it only accepts `C` programs, mostly `C99`, and **displays which words are keywords, numbers, identifiers, and relational/logical operators**.

This has been a good one.

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
gcc lex.yy.c
./a.out
```
I don't know. This is what Hareesh sir wrote on the board. I haven't gotten to the lex language part yet.

I'm still struggling to construct the required FSM to identify tokens. So, the first step is to think about just operators. Let's say relational operators like `==, !=, <, >, <=, =>`. Maybe using switch case and again if-statements, I could identify those but I'm not sure how all the pieces are going to fit together. So better to draw the diagram...I'm sleepy...ZZzzzz...

## Things I ought to refer but haven't yet because I am me and hello, nice to meet you. Do you like ring-a-ring-a-roses pockets full of spiders?
- [StackOverflow: Implementing a Lexer identifying Tokens using DFA](https://stackoverflow.com/questions/23329441/implementing-a-lexer-identifying-tokens-after-creating-dfa)
- TutorialsPoint [section on Theory of Computation]
    - [Automata Theory: Non-Deterministic Finite Automata (NFA)](https://www.tutorialspoint.com/automata_theory/non_deterministic_finite_automaton.htm)
    - [Compiler Design: DFA for Tokens](https://www.tutorialspoint.com/compiler_design/dfa_for_tokens.asp)
- Software Engineering StackExchange [//se.SE]
    - [Writing a Lexer in C](https://softwareengineering.stackexchange.com/questions/127889/writing-a-lexer-in-c)
    - [Why Implement a Lexer as a 2D array and a giant switch?](https://softwareengineering.stackexchange.com/questions/257757/why-implement-a-lexer-as-a-2d-array-and-a-giant-switch) (super relateable answer, symathize greatly with it, but I've not been asked to 2d transition table, that's a super neat idea though)
- Google Search: https://www.google.com/search?q=lexical+analyzer+using+dfa

## Related Projects on Github
- [michiakig/lexluthor](https://github.com/michiakig/lexluthor) : library to build lexical analyzers
- [fhur/lexluthor](https://github.com/fhur/lexluthor): good looking lexical analysis engine
- [onore-e-42/LeXLuthorAndtheYaccZoo](https://github.com/onore-e-42/LeXLuthorAndtheYaccZoo): literally the death of me.
- [jamesotron/lex_luthor](https://github.com/jamesotron/lex_luthor): A Lexer in Elixer, reuseable macros for lexical analysis.
- [marques-work/lex-luthor](https://github.com/marques-work/lex-luthor): Javascript Lexer witten in pure JS.
- [lkrieg/lex_luthor](https://github.com/lkrieg/lex_luthor): possibly what I need but it's written in such modular fashion that I'd rather build my own racecar and track rather than read the mini-library files he's written. Atleast I finally found a `lexer.h`, that's quite something. I'll be studying this repo in much depth in the days to come.
- [lkrieg/lex_luthor](https://github.com/lkrieg/lex_luthor): Found someone who wrote `tokens.h`. Nice!
- [Chaitanya-K/Luthor-Lexical-Analyzer](https://github.com/Chaitanya-K/Luthor-Lexical-Analyzer): Smart, really interesting beyond my level sort of thing.
- [evanhackett/Lexical-Analyzer](https://github.com/evanhackett/Lexical-Analyzer): super analyzer, just what I needed...or so I thought.

Do tell me if you find anything... a simple lexeme categorizer doesn't need ML, does it?

## Credits
Myself, Rithu Augustine, Rinu Sibi Kurian, Noora Fathima, Rohit Venugopal, Bob Kane. 

---

**Watch, Star, Fork, Pull. Contribute to Free and Open Source. <br/>
Support FOSS, Linus Torvalds and Richard Stallman! <br/>
Fork this repo today!**

---

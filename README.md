# Queen Attack

Please note: I wrote the queen_attack.cpp and queen_attack.h files. I did not write queen_attack_test.cpp file. Thanks, Walt

Welcome to Queen Attack on Exercism's C++ Track.
If you need help running the tests or submitting your code, check out `HELP.md`.

## Instructions

Given the position of two queens on a chess board, indicate whether or not they
are positioned so that they can attack each other.

In the game of chess, a queen can attack pieces which are on the same
row, column, or diagonal.

A chessboard can be represented by an 8 by 8 array.

So if you're told the white queen is at (2, 3) and the black queen at
(5, 6), then you'd know you've got a set-up like so:

```text
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ W _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ B _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
```

You'd also be able to answer whether the queens can attack each other.
In this case, that answer would be yes, they can, because both pieces
share a diagonal.

## Source

### Created by

- @LegalizeAdulthood

### Contributed to by

- @cyborgsphinx
- @elyashiv
- @jackhughesweb
- @KevinWMatthews
- @kytrinyx
- @liquidcore7
- @patricksjackson
- @siebenschlaefer

### Based on

J Dalbey's Programming Practice problems - http://users.csc.calpoly.edu/~jdalbey/103/Projects/ProgrammingPractice.html

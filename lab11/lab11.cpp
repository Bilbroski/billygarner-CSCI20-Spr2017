creat variable 1
creat variable 2

create randomizer character r;
//r is the computers randomization variable
send character 'r' through randomizer function;

create user guess character g ;
//g is the guess 

create score character score s;
//s is the score

request user imput 1 or 2;
set user input as 'g';
//the guess is put it

if r == g ;
cout "You guessed right its " + r + " well Done! keep it up";

if r != g;
cout "nope! it was " + r + " too bad";
    if g =< r;
    cout "try a higher number";
    if g => r;
    cout "try a lower number";
s - 1;
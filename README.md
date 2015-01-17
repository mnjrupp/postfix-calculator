# postfix-calculator
Simple integer Calculator in Reverse Polish Notation. It does support double when using the power of ^ 

by converting the passed integer to double to use the "pow" math function

  To compile just run 
  ----------
         $ make
  
Will compile both the strtok and rpncalc binary files

To compile just one of the two binaries:
  -------
         $ make strtok
         $ make rpncalc

The strtok.c contains the tokenizer that changes infix statement to the postfix:

You pass the infix arguments to the strtok as:
  ------
         $ ./strtok "((3+5)*7)/2"
         
The output:
  ------
         $ 3 5 + 7 * 2 /
         
You then pass the results to the rpncalc as:
  ------
         $ ./rpncalc "3 5 + 7 * 2 /"
         $ 28

You can pipe it to rpncalc like this:
  ------
         $ ./strtok "((3+5)*7)/2" | ./rpncalc

 

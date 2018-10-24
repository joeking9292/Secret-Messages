# Secret Messages

Professor Potter, a punning pedantic, practices puzzling her students. She has left a secret message, of unknown length, encoded in file p3.dat for you to unravel. The setup is simple: each line of the file contains one char and one nonnegative integer. The key to reading the message is organizing the characters in the proper order. The integer indicates the position of the character within the message.

For example:

e 2
b 1
a 3       
h 5
c 4

spells 'beach' when unraveled.

In C++, using a linked list, write a program that will:

Ask the user for the name of a file, opening and reading this file exactly once
Unravel and display the message
Offer to do it again on another file
You should check to see that the file exists and contains some data. While debugging your program you may wish to use a shorter file (i.e. the example above). Also note that some of the characters in the message will be blank spaces or punctuation. They will appear in the same format as above.


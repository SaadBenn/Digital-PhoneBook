# digital-phonebook
Here is a scenario that motivated me to write the program for indexing phonebook numbers.

```
A developer is hired by a small city of one hundred thousand. The task is to convert the 
city’s paperback phone book to a digital phone book. The mayor of the town has one requirement 
for the project: the digital 📖 phone book must be able to 🔍 find phone numbers at ⚡ lightning speeds.
```
****
One logical approach for finding phone numbers would be to start at the beginning of the phone book. Then check 
if the page contains the desired phone number. If the page does not contain the desired phone number, flip the page over and try again. Continue flipping pages until the phone number is found.

This approach works, but also requires visiting all pages from the front of the book up to the desired phone number. In computer science, this would be comparable to placing the phone numbers in a linked list, and searching from the head of the list. That means to find the desired number there would be fifty thousand page flips, and no one actually does that with a real or digital phone book.

****

Okay, so what one normally does is open the phone book somewhere near the middle and ask, “is the desired number smaller or larger than the phone number on this page?” If the desired number is smaller flip a handful of pages to the left. If the desired number is larger flip a handful of pages to right, and then check again. On each iteration the search becomes significantly narrower. In Computer Science this would be binary tree, and searching from the root of the tree. When using a binary tree any desired number of the one hundred thousand phone numbers can be found in ~16 page flips.

****
The program is written in C++. 
Compile the program like this:
`g++ digital-phonebook.c`

This will produce an executable in the same directory called `a.out` which you can run by typing this in your terminal:
`./a.out`

To specify the name of the compiled output file, so that it is not named `a.out`, use`-o` with your g++ command.
`g++ -o output digital-phonebook.c`

File Handling in C++
File: It is the bnch of bytes store under a specific name on a storage device.
Sream: It refers to a sequence of byte, every file is linked to a stream and each stream is associated with particular class.

There are two type of file:
1. Text File - It is a file that stored information in ascii characters.In text file each line of text terminated by a special character known as EOl(End of line) or delimiters characters.When end of line character is read or written, certain internal translations take place.

2. Binary File- It is the file that contains information in same format as it is held in memory.In binary files no delimiters used for a line and no translations occur.The binary files are faster and easier for program to read and write.
**By default the file considered in C++ is text file.

OFstream class -- This stream class use to write on file.It provides the output operations.It inherit the function "put() , write()" along with the function supporting the random access i.e. "seekp() and tellp()" from Ostream class which is define inside the header file 'iostream.h'.

IFstream class -- This stream class use to read from file.Being an input file stream class it provides input operations for file,it inherits the function"get() , getline(),read()" and function supporting random access "seekg() and tellg()" from istream class define inside the header file 'iostream.h'.

Fstream class -- Performs both read/write.It is an I/O file stream class.It provides both input and output operations.It inherits all the functions from Istream and Ostream class define inside the header file 'iostream.h'.In C++, you open a file you must first obtain a stream , so there are 3 streams.

Create an input stream: To create input stream,you must declare the stream to be of class IFstream.
Syntax: ifstream fin;
For OFstream : ofstream fout;
For Fstream : fstream fio;

Opening File using Constructor: As the constructor of class , initialize an object of it's class when it is being created in the same way the constructor of stream classes are used to initialize file stream object with the file name pass to them.
ifstream fin("myfile", ios::in); -- This statement create an object of type of input file stream , after creating the ifstream object the filename myfile is opened and attached to the input stream, now the data being read from myfile has been channelised through input stream objects.To read from this file this stream object will be using ">>"(getfrom operator).
char ch;
fin>>ch; // Read character from file

Similarly when you want a program to write a file i.e. open an output file.This will be accomplished by: 
i. Creating ofstream object to manage the output stream.
ii. Associating that object with particular file.
ifstream("myfile",ios::io)
ofstream("myfile",ios::out)
example: 
int code = 2193
fout<<code<<"myfile";   ("<<" is put to operator)
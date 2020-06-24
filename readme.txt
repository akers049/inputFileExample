Here is a working example of basic file io in c++

It is an example of reading in an input file which contains an assorment of 
variable types and stores them in memory.

The program outputs these stored values in the terminal to verify that it 
actually worked.


Calling format:

>> printf "inputFileExample.in" | ./run

Or simply
>> ./run
and type the input file name.

Included files:
  read_file.h         :  class declaration of the "read_file" class and the 
                         "some_data" class. read_file contains the function to 
	                     read the data, while some_data just holds stuff.

  read_file.cc        :  member function definitions of the "read_file" class. 
                         The "readInputFile" fuinction takes in a char array
	                     of the file name we want read, as well as the object 
	                     that will hold the data. It then goes line-by-line
	                     reading the file for the pre-determined format.

  run.cc              :  The guy with the main() function.

  inputFileExample.in :  Example input file. If you open it you will see the 
                         format of the data.

  CMakeLists.txt      :  The cmake guy

  readme.txt          :  This file.
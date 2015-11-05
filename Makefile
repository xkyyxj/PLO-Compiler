OBJECT = Compiler.o FileReader.o

plo : ${OBJECT}
	g++ -o plo ${OBJECT}

Compiler.o : ./source-file/Compiler.cpp
	g++ -c ./source-file/Compiler.cpp

FileReader.o : ./header-file/FileReader.h ./source-file/FileReader.cpp
	g++ -c ./source-file/FileReader.cpp

clean:
	rm plo Compiler.o FileReader.o

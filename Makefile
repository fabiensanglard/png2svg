all: img2svg

img2svg: main.o Image.o ImagePNG.o ImageTGA.o ByteStream.o
	clang++ main.o Image.o ImagePNG.o ImageTGA.o ByteStream.o -lpng -o img2svg

Image.o: ImageTGA.o ImagePNG.o Image.cpp
	clang++ ImagePNG.o ImageTGA.o -c Image.cpp

main.o: main.cpp Image.o
	clang++ Image.o -c main.cpp

ImagePNG.o: ImagePNG.cpp
	clang++ -lpng -c ImagePNG.cpp 

ImageTGA.o: ImageTGA.cpp
	clang++ -c ImageTGA.cpp

ByteStream.o: ByteStream.cpp
	clang++ -c ByteStream.cpp



clean:
	rm -rf *o img2svg
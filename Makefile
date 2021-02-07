linux:
	g++ main.cpp board.cpp player.cpp humanPlayer.cpp aiPLayer.cpp -o ConnectN
win64:
	x86_64-w64-mingw32-g++ --static main.cpp board.cpp player.cpp humanPlayer.cpp aiPLayer.cpp -o ConnectN
clean:
	rm -rf *o *exe ConnectN
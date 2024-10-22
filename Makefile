CFLAGS=-MD -Gy -Z7 -W4
LFLAGS=-incremental:no

all: down_and_right.exe

.SUFFIXES:
.SUFFIXES: .cpp .exe

.cpp.exe:
	cl $(CFLAGS) $< -link $(LFLAGS)

clean:
	-del *.exe *.obj *.pdb *.ilk a.out *.o

# the compiler used to build
CXX = g++

# flags:
# -Wall: basic warnings 
# -Wextra: additional warnings
# -Wpedantic: code compliance with ISO C++ standard
# -Werror: all warnings=errors
CXXFLAGS = -Wall -Wextra -Wpedantic -Werror

APPLICATION_NAME = KBNinja
APPLICATION_LIB = libKBNinja

SRC = src
BIN = bin
OBJ = obj

APPLICATION_PATH = $(BIN)/$(APPLICATION_NAME)
LIBRARY_PATH = $(OBJ)/$(SRC)/$(APPLICATION_LIB)/$(APPLICATION_LIB).a

APPLICATION_SRC = $(shell find $(SRC)/$(APPLICATION_NAME) -name '*.c')
APPLICATION_OBJ = $(APPLICATION_SRC:$(SRC)/%.c=$(OBJ)/$(SRC)/%.o)

LIBRARY_SRC = $(shell find $(SRC)/$(APPLIACATION_LIB) -name '*.c')
LIBRARY_OBJ = $(LIBRARY_SRC:$(SRC)/%.c=$(OBJ)/$(SRC)/%.o)

DEPENDENCIES = $(APPLICATION_OBJ:.o=.d)

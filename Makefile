CC = g++
CFLAGS = -Wall -Wextra -Wpedantic -Werror
CPPFLAGS = -MMD -I src

APPLICATION_NAME = KBNinja
APPLICATION_LIB = libKBNinja

SRC = src
BIN = bin
OBJ = obj

APPLICATION_PATH = $(BIN)/$(APPLICATION_NAME)
LIBRARY_PATH = $(OBJ)/$(SRC)/$(APPLICATION_LIB)/$(APPLICATION_LIB).a

APPLICATION_SRC = $(shell find $(SRC)/$(APPLICATION_NAME) -name '*.cpp')
APPLICATION_OBJ = $(APPLICATION_SRC:$(SRC)/%.cpp=$(OBJ)/$(SRC)/%.o)

LIBRARY_SRC = $(shell find $(SRC)/$(APPLIACATION_LIB) -name '*.cpp')
LIBRARY_OBJ = $(LIBRARY_SRC:$(SRC)/%.cpp=$(OBJ)/$(SRC)/%.o)

DEPENDENCIES = $(APPLICATION_OBJ:.o=.d)

.PHONY: all
all: $(APPLICATION_PATH)
-include $(DEPENDENCIES)


$(APPLICATION_PATH): $(APPLICATION_OBJ) $(LIBRARY_PATH)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ $^
	
$(OBJ)/%.o: %.cpp
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<
	
$(LIBRARY_PATH): $(LIBRARY_OBJ)
	ar rcs $@ $^

.PHONY: clean
clean:
	$(RM) $(APPLICATION_PATH)
	find $(OBJ) -name '*.o' -exec $(RM) '{}' \;
	find $(OBJ) -name '*.d' -exec $(RM) '{}' \;
	find $(OBJ) -name '*.a' -exec $(RM) '{}' \;

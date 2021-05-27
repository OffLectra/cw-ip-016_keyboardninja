CC = g++
CFLAGS = -Wall -Wextra -Wpedantic -Werror
CPPFLAGS = -MMD -I src
CPPFLAGS_TEST = -MP -MMD -I src -I thirdparty

APPLICATION_NAME = KBNinja
APPLICATION_LIB = libKBNinja
TEST_NAME = test-app

SRC = src
BIN = bin
OBJ = obj
TEST = test

APPLICATION_PATH = $(BIN)/$(APPLICATION_NAME)
LIBRARY_PATH = $(OBJ)/$(SRC)/$(APPLICATION_LIB)/$(APPLICATION_LIB).a
TEST_PATH = $(BIN)/$(TEST_NAME)

APPLICATION_SRC = $(shell find $(SRC)/$(APPLICATION_NAME) -name '*.cpp')
APPLICATION_OBJ = $(APPLICATION_SRC:$(SRC)/%.cpp=$(OBJ)/$(SRC)/%.o)

LIBRARY_SRC = $(shell find $(SRC)/$(APPLIACATION_LIB) -name '*.cpp')
LIBRARY_OBJ = $(LIBRARY_SRC:$(SRC)/%.cpp=$(OBJ)/$(SRC)/%.o)

TEST_SRC = $(shell find $(TEST) -name '*.cpp')
TEST_OBJ = $(TEST_SRC:$(TEST)/%.cpp=$(OBJ)/$(TEST)/%.o)

DEPENDENCIES = $(APPLICATION_OBJ:.o=.d)
TEST_DEPENDENCIES = $(TEST_OBJ:.o=.d)

.PHONY: all
all: $(APPLICATION_PATH)
-include $(DEPENDENCIES)

$(APPLICATION_PATH): $(APPLICATION_OBJ) $(LIBRARY_PATH)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ $^
	
$(OBJ)/%.o: %.cpp
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<
	
$(LIBRARY_PATH): $(LIBRARY_OBJ)
	ar rcs $@ $^
	
.PHONY: test
test: $(TEST_PATH)
-include $(TEST_DEPENDENCIES)

$(TEST_PATH): $(TEST_OBJ) $(LIBRARY_PATH)
	$(CC) $(CFLAGS) $(CPPFLAGS_TEST) -o $@ $^

$(OBJ)/$(TEST)%.o: $(TEST)/%.cpp
	$(CC) -c $(CFLAGS) $(CPPFLAGS_TEST) -o $@ $<

.PHONY: clean
clean:
	$(RM) $(APPLICATION_PATH) $(TEST_PATH)
	find $(OBJ) -name '*.o' -exec $(RM) '{}' \;
	find $(OBJ) -name '*.d' -exec $(RM) '{}' \;
	find $(OBJ) -name '*.a' -exec $(RM) '{}' \;

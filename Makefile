CXX       := clang++
CXXFLAGS  := -std=c++17 -Wall -Wextra

# ignore useless warnings
IGNORE 	  := -Wno-unused-variable
CXXFLAGS  += $(IGNORE)

TARGET    := solution

# Configurable by user
# If SRC name different, then do "make SRC=source.cpp"
SRC       ?= solution.cpp
INPUT     ?=
OUTPUT    ?=

DEBUG     ?= 0

ifeq ($(DEBUG), 1)
	CXXFLAGS += -DDEBUG -g -fsanitize=address
else
	CXXFLAGS += -O2
endif

all: build run

build: $(SRC)
	$(CXX) $(CXXFLAGS) $< -o $(TARGET)

ifeq ($(INPUT)$(OUTPUT),)
run: build
	./$(TARGET)
else ifeq ($(INPUT),)
run: build
	./$(TARGET) > $(OUTPUT)
else ifeq ($(OUTPUT),)
run: build
	./$(TARGET) < $(INPUT)
else
run: build
	./$(TARGET) < $(INPUT) > $(OUTPUT)
endif

clean:
	@rm -f $(TARGET)

.PHONY: all build run clean




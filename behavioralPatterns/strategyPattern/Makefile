#!/usr/bin/make -f
 
include ../../MakeVars

$(info ################################### MakeFile ###################################)

TARGET = $(BUILD_ROOT)/SimUDuck.t

.PHONY: all

all: $(TARGET)
 
$(TARGET): $(BUILD_DIRS) $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

$(OBJECTS): $(BUILD_ROOT)/%.o: $(SOURCE_ROOT)/%.cpp $(INCLUDE_ROOT)/%.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean: ; rm -f $(OBJECTS) $(TARGET)

$(BUILD_DIRS):
	mkdir -p $@

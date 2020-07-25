#!/usr/bin/make -f
 
include ../../MakeVars
 
OBJECTS = $(BUILD_DIR)/SimUDuck.t.o  $(BUILD_DIR)/Duck.o $(BUILD_DIR)/DecoyDuck.o $(BUILD_DIR)/MallarDuck.o $(BUILD_DIR)/FlyBehavior.o $(BUILD_DIR)/FlyNoWay.o $(BUILD_DIR)/FlyWithWings.o
 
$(BUILD_DIR)/SimUDuck.t: $(OBJECTS) | $(BUILD_DIR)
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_DIR)/%.t.o: $(SOURCE_DIR)/%.t.cpp | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.cpp $(INCLUDE_DIR)/%.h | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
$(BUILD_DIR)/%.o: $(SOURCE_DIR)/Behaviors/%.cpp $(INCLUDE_DIR)/Behaviors/%.h | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean: ; rm -f $(BUILD_DIR)/*.o $(BUILD_DIR)/linkedlist.t

$(BUILD_DIR):
	mkdir $@


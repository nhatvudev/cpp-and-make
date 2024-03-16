include gnucommand.mk

SOURCE_DIR:=./cpp
OBJ_DIR:=./objs
OUT_DIR:=./output

$(OUT_DIR)/main: $(SOURCE_DIR)/main.cpp $(OBJ_DIR)/myclasses.o $(SOURCE_DIR)/myclasses.h | $(OUT_DIR)
	$(COMPILER) -c $(SOURCE_DIR)/main.cpp -o $(OBJ_DIR)/main.o -g
	$(COMPILER) $(OBJ_DIR)/main.o $(OBJ_DIR)/myclasses.o \
		-o $(OUT_DIR)/main

$(OBJ_DIR)/myclasses.o: $(SOURCE_DIR)/myclasses.cpp $(SOURCE_DIR)/myclasses.h | $(OBJ_DIR)
	$(COMPILER) -c $(SOURCE_DIR)/myclasses.cpp -o $(OBJ_DIR)/myclasses.o -g

$(OBJ_DIR):
	$(MAKE_DIR) $(OBJ_DIR)

$(OUT_DIR):
	$(MAKE_DIR) $(OUT_DIR)	

clean:
	$(REMOVE) -r $(OBJ_DIR)
	$(REMOVE) -r $(OUT_DIR)
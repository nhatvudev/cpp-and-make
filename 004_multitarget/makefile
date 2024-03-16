include gnucommand.mk

OBJ_DIR=./objs
OUT_DIR=./output

main: main.cpp myclasses.o myclasses.h | $(OUT_DIR)
	$(COMPILER) -c main.cpp -o $(OBJ_DIR)/main.o -g
	$(COMPILER) $(OBJ_DIR)/main.o $(OBJ_DIR)/myclasses.o \
		-o $(OUT_DIR)/main

myclasses.o: myclasses.cpp myclasses.h | $(OBJ_DIR)
	$(COMPILER) -c myclasses.cpp -o $(OBJ_DIR)/myclasses.o -g

$(OBJ_DIR):
	$(MAKE_DIR) $(OBJ_DIR)

$(OUT_DIR):
	$(MAKE_DIR) $(OUT_DIR)	

clean:
	$(REMOVE) -r $(OBJ_DIR)
	$(REMOVE) -r $(OUT_DIR)
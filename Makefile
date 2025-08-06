C=gcc
CFLAGS=-c -g
OBJDIR=build
SRCDIR=src

OBJS=$(OBJDIR)/main.o $(OBJDIR)/array.o
OUTPUT=output

$(OUTPUT): $(OBJS)
	$(C) $(OBJS) -o $(OUTPUT)

$(OBJDIR)/main.o: $(SRCDIR)/main.c | $(OBJDIR)
	$(C) $(CFLAGS) $(SRCDIR)/main.c -o $(OBJDIR)/main.o

# $(OBJDIR)/utils.o: $(SRCDIR)/utils.cpp | $(OBJDIR)
# 	$(CXX) $(CXXFLAGS) $(SRCDIR)/utils.cpp -o $(OBJDIR)/utils.o

# $(OBJDIR)/task.o: $(SRCDIR)/task.cpp | $(OBJDIR)
# 	$(CXX) $(CXXFLAGS) $(SRCDIR)/task.cpp -o $(OBJDIR)/task.o

$(OBJDIR)/array.o: $(SRCDIR)/array.c | $(OBJDIR)
	$(C) $(CFLAGS) $(SRCDIR)/array.c -o $(OBJDIR)/array.o

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -f $(OBJDIR)/*.o $(OUTPUT)

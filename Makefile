C=gcc
CFLAGS=-c -g
OBJDIR=build
SRCDIR=src

OBJS=$(OBJDIR)/main.o $(OBJDIR)/array.o $(OBJDIR)/node.o $(OBJDIR)/stack.o $(OBJDIR)/queue.o $(OBJDIR)/linkedList.o
OUTPUT=output

$(OUTPUT): $(OBJS)
	$(C) $(OBJS) -o $(OUTPUT)

$(OBJDIR)/main.o: $(SRCDIR)/main.c | $(OBJDIR)
	$(C) $(CFLAGS) $(SRCDIR)/main.c -o $(OBJDIR)/main.o

$(OBJDIR)/array.o: $(SRCDIR)/array.c | $(OBJDIR)
	$(C) $(CFLAGS) $(SRCDIR)/array.c -o $(OBJDIR)/array.o

$(OBJDIR)/node.o: $(SRCDIR)/node.c | $(OBJDIR)
	$(C) $(CFLAGS) $(SRCDIR)/node.c -o $(OBJDIR)/node.o

$(OBJDIR)/stack.o: $(SRCDIR)/stack.c | $(OBJDIR)
	$(C) $(CFLAGS) $(SRCDIR)/stack.c -o $(OBJDIR)/stack.o

$(OBJDIR)/queue.o: $(SRCDIR)/queue.c | $(OBJDIR)
	$(C) $(CFLAGS) $(SRCDIR)/queue.c -o $(OBJDIR)/queue.o	

$(OBJDIR)/linkedList.o: $(SRCDIR)/linkedList.c | $(OBJDIR)
	$(C) $(CFLAGS) $(SRCDIR)/linkedList.c -o $(OBJDIR)/linkedList.o	

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -f $(OBJDIR)/*.o $(OUTPUT)

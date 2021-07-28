
SUBDIRS = lib

bin_PROGRAMS = example

example_SOURCES = \
	main.c

example_CFLAGS = \
	-I$(srcdir)/lib/libsome \
	-I$(srcdir)/lib/libsomeother

example_LDADD = \
	lib/libsome/libsome.a \
	lib/libsomeother/libsomeother.la

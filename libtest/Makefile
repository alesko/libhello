#
#
#

#TARGET = liblabjackusb.so.2.0.3
#TARGET = 
#DESTINATION = /usr/local/lib

#HEADER = globals.h
#HEADER_DESTINATION = /usr/local/include

CFLAGS +=  -Wall  -O2
LIBFLAGS = -ldc1394 -lGL -L/usr/include -L/usr/X11R6/lib -lX11  -lm -lpthread -I/usr/local/include -lgsl -lgslcblas  #-lXmu
SDLFLAGS= `sdl-config --cflags --libs`
CC = gcc

%.o: %.c
	$(CC) $(CFLAGS) -c $<

all: stereoviewGL.c
	$(CC) -o stereoviewGL questionare.c stereoviewGL.c -I. $(LIBFLAGS) $(SDLFLAGS)

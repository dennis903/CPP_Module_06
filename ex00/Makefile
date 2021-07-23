CC = clang++
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address -std=c++98
TARGET = convert

OBJS = Convertor.cpp 	\
		main.cpp

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean :
	rm -rf $(TARGET)

fclean : clean
	rm -rf $(TARGET)

re : clean all
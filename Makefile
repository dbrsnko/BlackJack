CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = BlackJack

SRCS = BlackJack.cpp Cards.cpp Dealer.cpp Deck.cpp Game.cpp Player.cpp

HEADERS = Cards.h Dealer.h Deck.h Game.h Player.h

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = Integer_Input_Val.o Containers.o randNoGen.o Main.o

SRCS = Integer_Input_Val.cpp Containers.cpp randNoGen.cpp Main.cpp

HEADERS = Integer_Input_Val.hpp Containers.hpp randNoGen.hpp
#main stuff/output
output: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS} -o output

#objects
${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)


clean:
	rm ${OBJS}


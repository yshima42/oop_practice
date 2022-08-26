NAME = bowling
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++17
SRCS_DIR = ./src
SRCS = $(SRCS_DIR)/main.cpp $(SRCS_DIR)/Frame.cpp $(SRCS_DIR)/Game.cpp $(SRCS_DIR)/Scorer.cpp 
GTEST_SRCS = $(SRCS_DIR)/Frame.cpp $(SRCS_DIR)/Game.cpp $(SRCS_DIR)/Scorer.cpp 
OBJS = $(SRCS:.cpp=.o)
DEPS = $(OBJS:.o=.d)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS) 
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@
	@printf "$(GREEN)Compile done:)\n$(END)"

.PHONY: clean
clean:
	@$(RM) $(OBJS) $(DEPS)

.PHONY: fclean
fclean: clean
	@$(RM) $(NAME)
	@$(RM) tester

.PHONY: re
re: fclean all

gtestdir	=	./test
gtest		=	$(gtestdir)/gtest $(gtestdir)/googletest-release-1.11.0

testdir = ./gtest

$(gtest):
	curl -OL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.tar.gz
	tar -xvzf release-1.11.0.tar.gz googletest-release-1.11.0
	$(RM) -rf release-1.11.0.tar.gz
	python3 googletest-release-1.11.0/googletest/scripts/fuse_gtest_files.py $(gtestdir)
	mv googletest-release-1.11.0 $(gtestdir)

test_compile = clang++ -std=c++11 \
	$(testdir)/gtest.cpp $(gtestdir)/googletest-release-1.11.0/googletest/src/gtest_main.cc $(gtestdir)/gtest/gtest-all.cc \
	$(GTEST_SRCS) \
	-I$(gtestdir) -I$(includes) -lpthread -o tester

.PHONY: test
test: $(gtest)
	$(test_compile)
	./tester # --gtest_filter=Vector.other

## Color
END		= \e[0m
BOLD	= \e[1m
THIN	= \e[2m
ITALIC	= \e[3m
U_LINE	= \e[4m
BLACK	= \e[30m
RED		= \e[31m
GREEN	= \e[32m
YELLOW	= \e[33m
BLUE	= \e[34m
PURPLE	= \e[35m
CYAN	= \e[36m
WHITE	= \e[37m

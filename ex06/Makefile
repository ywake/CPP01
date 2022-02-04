#############
# Functions #
#############

uniq = $(if $1,$(firstword $1) $(call uniq,$(filter-out $(firstword $1),$1)))

#############
# Variables #
#############

NAME	:= karenFilter
SRCS	:= main.cpp Karen.cpp
TEST_CPP:=

CXX		:= c++
CXXFLAGS:= -g -Wall -Werror -Wextra -std=c++98 -pedantic

SRCDIRS	:= $(call uniq, $(dir $(SRCS)))

OBJDIR	:= build/
OBJDIRS	:= $(addprefix $(OBJDIR), $(SRCDIRS))
OBJS	:= $(addprefix $(OBJDIR), $(SRCS:%.cpp=%.o))

DEPS	:= $(addprefix $(OBJDIR), $(SRCS:%.cpp=%.d))

DSTRCTR	:= ./destructor.cpp

#################
# General rules #
#################

all: $(NAME)

$(NAME): $(OBJDIRS) $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) $(LIBS)

clean: FORCE
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)
	$(RM) -r $(NAME).dSYM

re: fclean all

run: $(NAME)
	./$(NAME)

norm: FORCE
	@printf "$(RED)"; norminette | grep -v ": OK!" \
	&& exit 1 \
	|| printf "$(GREEN)%s\n$(END)" "Norm OK!"

$(OBJDIRS):
	mkdir -p $@

$(OBJDIR)%.o: %.cpp
	@printf "$(THIN)$(ITALIC)"
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@
	@printf "$(END)"

-include $(DEPS)

.PHONY: FORCE
FORCE:

###############
# Debug rules #
###############

$(DSTRCTR):
	curl https://gist.githubusercontent.com/ywake/793a72da8cdae02f093c02fc4d5dc874/raw/destructor.c > $(DSTRCTR)

sani: $(OBJDIRS) $(OBJS)
	$(CXX) $(CXXFLAGS) -fsanitize=address $(OBJS) -o $(NAME) $(LIBS)

Darwin_leak: $(DSTRCTR) $(OBJDIRS) $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(DSTRCTR) -o $(NAME) $(LIBS)

Linux_leak: sani

leak: $(shell uname)_leak

##############
# Test rules #
##############

S1=I have a dream
S2=I HAVE A DREAM

test1: $(NAME)
	@printf "[ DEBUG ]\n[ INFO ]\n[ WARNING ]\n[ ERROR ]\n" > expect
	./$(NAME) DEBUG | awk "NR==1 || NR==4 || NR==7 || NR==10" > out
	diff expect out

test2: $(NAME)
	@printf "[ INFO ]\n[ WARNING ]\n[ ERROR ]\n" > expect
	./$(NAME) INFO | awk "NR==1 || NR==4 || NR==7" > out
	diff expect out

test3: $(NAME)
	@printf "[ WARNING ]\n[ ERROR ]\n" > expect
	./$(NAME) WARNING | awk "NR==1 || NR==4" > out
	diff expect out

test4: $(NAME)
	@printf "[ ERROR ]\n" > expect
	./$(NAME) ERROR | awk "NR==1" > out
	diff expect out

test5: $(NAME)
	@printf "[ Probably complaining about insignificant problems ]\n" > expect
	./$(NAME) AAA > out
	diff expect out

test: $(NAME) test1 test2 test3 test4 test5

##########
# Colors #
##########

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

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
	private:
		void dontCare(void);
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		std::string level;
	public:
		Harl(std::string);
		~Harl(void);
		void complain(void);
};

#endif
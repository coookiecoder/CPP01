#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);
		const std::string &getType(void);
		void setType(std::string newType);
		bool exist(void);
};

#endif
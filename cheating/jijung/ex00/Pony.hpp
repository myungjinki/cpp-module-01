#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class	Pony {
public:
	Pony(std::string name, std::string food, std::string sentence);
	void	eat(void);
	void	speak(void);
	~Pony(void);

private:
	std::string		name_;
	std::string		food_;
	std::string		sentence_;
};

#endif

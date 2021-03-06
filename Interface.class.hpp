#ifndef INTERFACE_CLASS_HPP
# define INTERFACE_CLASS_HPP

# include <iostream>
# include <string>
# include "CPU.hpp"
# include "Name.hpp"
# include "Date.hpp"
# include "Network.hpp"
# include "RAM.hpp"
# include "Os_info.hpp"
# include "IMonitorDisplay.hpp"

class Interface: public IMonitorDisplay
{
	public:

		Interface(void);
		virtual ~Interface(void);

		virtual void	init(void);
		virtual int		getKey(CPU const & cpu, Name const & name, Date const & date, Network const & net, RAM const & ram, Os_info const & os);
		virtual void	start(void);

	private:

		int		_pos[6];
		int		_y;
		int		_module;
		Interface(const Interface & interface);
		Interface &operator=(const Interface & interface);
};

#endif

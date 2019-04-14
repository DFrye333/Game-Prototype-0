#ifndef BD3GE_INPUT_H
#define BD3GE_INPUT_H

#include <iostream>
#include <cstring>
#include <map>

#include "../system/constants.h"
#include "../system/globals.h"
#include "../utility/message.h"

namespace BD3GE
{
	class Input
	{
		public:

			void	handler(Message< std::pair <std::string, bool> > message);
			void	set_key_state(std::string key, bool state);
			bool	get_key_state(std::string key);

		protected:

			std::map<std::string, bool>	m_keys;
	};
}

#endif // BD3GE_INPUT_H

#pragma once

#include "../../lang/IllegalArgumentException.def.hpp"

namespace java::nio::channels
{
	class IllegalChannelGroupException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllegalChannelGroupException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalChannelGroupException(QAndroidJniObject obj) : java::lang::IllegalArgumentException(obj) {}
		
		// Constructors
		IllegalChannelGroupException();
		
		// Methods
	};
} // namespace java::nio::channels


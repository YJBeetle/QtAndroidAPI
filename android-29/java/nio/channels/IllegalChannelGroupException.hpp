#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace java::nio::channels
{
	class IllegalChannelGroupException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		IllegalChannelGroupException(QAndroidJniObject obj);
		// Constructors
		IllegalChannelGroupException();
		
		// Methods
	};
} // namespace java::nio::channels


#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace java::nio::channels
{
	class IllegalBlockingModeException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		IllegalBlockingModeException(QAndroidJniObject obj);
		// Constructors
		IllegalBlockingModeException();
		
		// Methods
	};
} // namespace java::nio::channels


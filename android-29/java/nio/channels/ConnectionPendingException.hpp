#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace java::nio::channels
{
	class ConnectionPendingException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		ConnectionPendingException(QAndroidJniObject obj);
		// Constructors
		ConnectionPendingException();
		
		// Methods
	};
} // namespace java::nio::channels


#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace java::nio::channels
{
	class NoConnectionPendingException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		NoConnectionPendingException(QAndroidJniObject obj);
		// Constructors
		NoConnectionPendingException();
		
		// Methods
	};
} // namespace java::nio::channels


#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace java::nio::channels
{
	class AcceptPendingException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		AcceptPendingException(QAndroidJniObject obj);
		// Constructors
		AcceptPendingException();
		
		// Methods
	};
} // namespace java::nio::channels


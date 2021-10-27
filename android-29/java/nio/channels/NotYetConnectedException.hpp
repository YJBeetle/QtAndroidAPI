#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace java::nio::channels
{
	class NotYetConnectedException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		NotYetConnectedException(QAndroidJniObject obj);
		// Constructors
		NotYetConnectedException();
		
		// Methods
	};
} // namespace java::nio::channels


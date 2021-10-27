#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace java::nio::channels
{
	class CancelledKeyException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		CancelledKeyException(QAndroidJniObject obj);
		// Constructors
		CancelledKeyException();
		
		// Methods
	};
} // namespace java::nio::channels


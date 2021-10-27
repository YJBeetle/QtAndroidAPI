#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace java::nio::channels
{
	class NonWritableChannelException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		NonWritableChannelException(QAndroidJniObject obj);
		// Constructors
		NonWritableChannelException();
		
		// Methods
	};
} // namespace java::nio::channels


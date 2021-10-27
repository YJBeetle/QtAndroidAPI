#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace java::nio::channels
{
	class NonReadableChannelException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		NonReadableChannelException(QAndroidJniObject obj);
		// Constructors
		NonReadableChannelException();
		
		// Methods
	};
} // namespace java::nio::channels


#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/UnsupportedOperationException.hpp"


namespace java::nio
{
	class ReadOnlyBufferException : public java::lang::UnsupportedOperationException
	{
	public:
		// Fields
		
		ReadOnlyBufferException(QAndroidJniObject obj);
		// Constructors
		ReadOnlyBufferException();
		
		// Methods
	};
} // namespace java::nio


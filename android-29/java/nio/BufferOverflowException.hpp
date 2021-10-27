#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace java::nio
{
	class BufferOverflowException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		BufferOverflowException(QAndroidJniObject obj);
		// Constructors
		BufferOverflowException();
		
		// Methods
	};
} // namespace java::nio


#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace java::nio
{
	class BufferUnderflowException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		BufferUnderflowException(QAndroidJniObject obj);
		// Constructors
		BufferUnderflowException();
		
		// Methods
	};
} // namespace java::nio


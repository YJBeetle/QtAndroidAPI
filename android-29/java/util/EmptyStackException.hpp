#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace java::util
{
	class EmptyStackException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		EmptyStackException(QAndroidJniObject obj);
		// Constructors
		EmptyStackException();
		
		// Methods
	};
} // namespace java::util


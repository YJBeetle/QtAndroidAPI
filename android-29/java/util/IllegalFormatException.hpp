#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"


namespace java::util
{
	class IllegalFormatException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		IllegalFormatException(QAndroidJniObject obj);
		// Constructors
		IllegalFormatException() = default;
		
		// Methods
	};
} // namespace java::util


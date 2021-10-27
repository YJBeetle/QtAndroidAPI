#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalStateException.hpp"


namespace java::util
{
	class FormatterClosedException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		FormatterClosedException(QAndroidJniObject obj);
		// Constructors
		FormatterClosedException();
		
		// Methods
	};
} // namespace java::util


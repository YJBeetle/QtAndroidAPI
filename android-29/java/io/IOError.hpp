#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Error.hpp"


namespace java::io
{
	class IOError : public java::lang::Error
	{
	public:
		// Fields
		
		IOError(QAndroidJniObject obj);
		// Constructors
		IOError(jthrowable &arg0);
		IOError() = default;
		
		// Methods
	};
} // namespace java::io


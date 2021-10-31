#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"


namespace java::util::concurrent
{
	class TimeoutException : public java::lang::Exception
	{
	public:
		// Fields
		
		TimeoutException(QAndroidJniObject obj);
		// Constructors
		TimeoutException();
		TimeoutException(jstring arg0);
		
		// Methods
	};
} // namespace java::util::concurrent


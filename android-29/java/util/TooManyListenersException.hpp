#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"


namespace java::util
{
	class TooManyListenersException : public java::lang::Exception
	{
	public:
		// Fields
		
		TooManyListenersException(QAndroidJniObject obj);
		// Constructors
		TooManyListenersException();
		TooManyListenersException(jstring arg0);
		
		// Methods
	};
} // namespace java::util


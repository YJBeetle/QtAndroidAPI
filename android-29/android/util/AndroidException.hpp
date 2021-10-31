#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"

namespace java::lang
{
	class Exception;
}

namespace android::util
{
	class AndroidException : public java::lang::Exception
	{
	public:
		// Fields
		
		AndroidException(QAndroidJniObject obj);
		// Constructors
		AndroidException();
		AndroidException(java::lang::Exception arg0);
		AndroidException(jstring arg0);
		AndroidException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::util


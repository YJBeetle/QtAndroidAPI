#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::util
{
	class NoSuchPropertyException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		NoSuchPropertyException(QAndroidJniObject obj);
		// Constructors
		NoSuchPropertyException(jstring arg0);
		NoSuchPropertyException() = default;
		
		// Methods
	};
} // namespace android::util


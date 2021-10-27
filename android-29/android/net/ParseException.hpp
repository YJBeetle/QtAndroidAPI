#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::net
{
	class ParseException : public java::lang::RuntimeException
	{
	public:
		// Fields
		jstring response();
		
		ParseException(QAndroidJniObject obj);
		// Constructors
		ParseException() = default;
		
		// Methods
	};
} // namespace android::net


#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Error.hpp"


namespace java::util
{
	class ServiceConfigurationError : public java::lang::Error
	{
	public:
		// Fields
		
		ServiceConfigurationError(QAndroidJniObject obj);
		// Constructors
		ServiceConfigurationError(jstring arg0);
		ServiceConfigurationError(jstring arg0, jthrowable arg1);
		ServiceConfigurationError() = default;
		
		// Methods
	};
} // namespace java::util


#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Error.hpp"


namespace java::util
{
	class ServiceConfigurationError : public java::lang::Error
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ServiceConfigurationError(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		ServiceConfigurationError(QAndroidJniObject obj);
		
		// Constructors
		ServiceConfigurationError(jstring arg0);
		ServiceConfigurationError(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::util


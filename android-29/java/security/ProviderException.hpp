#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace java::security
{
	class ProviderException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProviderException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ProviderException(QAndroidJniObject obj);
		
		// Constructors
		ProviderException();
		ProviderException(jstring arg0);
		ProviderException(jthrowable arg0);
		ProviderException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security


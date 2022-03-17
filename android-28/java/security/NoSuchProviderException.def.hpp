#pragma once

#include "./GeneralSecurityException.def.hpp"

class JString;

namespace java::security
{
	class NoSuchProviderException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NoSuchProviderException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchProviderException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
		
		// Constructors
		NoSuchProviderException();
		NoSuchProviderException(JString arg0);
		
		// Methods
	};
} // namespace java::security


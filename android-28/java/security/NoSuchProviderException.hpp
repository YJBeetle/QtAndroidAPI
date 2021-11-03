#pragma once

#include "./GeneralSecurityException.hpp"

class JString;

namespace java::security
{
	class NoSuchProviderException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoSuchProviderException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchProviderException(QJniObject obj);
		
		// Constructors
		NoSuchProviderException();
		NoSuchProviderException(JString arg0);
		
		// Methods
	};
} // namespace java::security


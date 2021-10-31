#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"


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
		NoSuchProviderException(jstring arg0);
		
		// Methods
	};
} // namespace java::security


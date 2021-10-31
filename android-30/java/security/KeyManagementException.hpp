#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"
#include "./KeyException.hpp"


namespace java::security
{
	class KeyManagementException : public java::security::KeyException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyManagementException(const char *className, const char *sig, Ts...agv) : java::security::KeyException(className, sig, std::forward<Ts>(agv)...) {}
		KeyManagementException(QJniObject obj);
		
		// Constructors
		KeyManagementException();
		KeyManagementException(jstring arg0);
		KeyManagementException(jthrowable arg0);
		KeyManagementException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security


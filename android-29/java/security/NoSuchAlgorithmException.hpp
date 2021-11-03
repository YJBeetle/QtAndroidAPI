#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"


namespace java::security
{
	class NoSuchAlgorithmException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoSuchAlgorithmException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchAlgorithmException(QJniObject obj);
		
		// Constructors
		NoSuchAlgorithmException();
		NoSuchAlgorithmException(jstring arg0);
		NoSuchAlgorithmException(jthrowable arg0);
		NoSuchAlgorithmException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security


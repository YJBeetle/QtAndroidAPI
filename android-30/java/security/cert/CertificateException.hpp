#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"


namespace java::security::cert
{
	class CertificateException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertificateException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateException(QAndroidJniObject obj);
		
		// Constructors
		CertificateException();
		CertificateException(jstring arg0);
		CertificateException(jthrowable arg0);
		CertificateException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security::cert


#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "./CertificateException.hpp"


namespace java::security::cert
{
	class CertificateExpiredException : public java::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertificateExpiredException(const char *className, const char *sig, Ts...agv) : java::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateExpiredException(QAndroidJniObject obj);
		
		// Constructors
		CertificateExpiredException();
		CertificateExpiredException(jstring arg0);
		
		// Methods
	};
} // namespace java::security::cert


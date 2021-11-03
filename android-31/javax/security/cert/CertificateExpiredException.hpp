#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./CertificateException.hpp"


namespace javax::security::cert
{
	class CertificateExpiredException : public javax::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertificateExpiredException(const char *className, const char *sig, Ts...agv) : javax::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateExpiredException(QAndroidJniObject obj);
		
		// Constructors
		CertificateExpiredException();
		CertificateExpiredException(jstring arg0);
		
		// Methods
	};
} // namespace javax::security::cert


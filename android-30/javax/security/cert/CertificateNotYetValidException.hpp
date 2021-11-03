#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./CertificateException.hpp"


namespace javax::security::cert
{
	class CertificateNotYetValidException : public javax::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertificateNotYetValidException(const char *className, const char *sig, Ts...agv) : javax::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateNotYetValidException(QAndroidJniObject obj);
		
		// Constructors
		CertificateNotYetValidException();
		CertificateNotYetValidException(jstring arg0);
		
		// Methods
	};
} // namespace javax::security::cert


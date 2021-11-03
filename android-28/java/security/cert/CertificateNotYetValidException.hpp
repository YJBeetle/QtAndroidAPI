#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "./CertificateException.hpp"


namespace java::security::cert
{
	class CertificateNotYetValidException : public java::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertificateNotYetValidException(const char *className, const char *sig, Ts...agv) : java::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateNotYetValidException(QJniObject obj);
		
		// Constructors
		CertificateNotYetValidException();
		CertificateNotYetValidException(jstring arg0);
		
		// Methods
	};
} // namespace java::security::cert


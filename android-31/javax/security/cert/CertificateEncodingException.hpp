#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./CertificateException.hpp"


namespace javax::security::cert
{
	class CertificateEncodingException : public javax::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertificateEncodingException(const char *className, const char *sig, Ts...agv) : javax::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateEncodingException(QJniObject obj);
		
		// Constructors
		CertificateEncodingException();
		CertificateEncodingException(jstring arg0);
		
		// Methods
	};
} // namespace javax::security::cert


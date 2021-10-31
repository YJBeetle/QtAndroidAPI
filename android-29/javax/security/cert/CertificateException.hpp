#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"


namespace javax::security::cert
{
	class CertificateException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertificateException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		CertificateException(QJniObject obj);
		
		// Constructors
		CertificateException();
		CertificateException(jstring arg0);
		
		// Methods
	};
} // namespace javax::security::cert


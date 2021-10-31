#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"


namespace java::security::cert
{
	class CertStoreException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertStoreException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		CertStoreException(QJniObject obj);
		
		// Constructors
		CertStoreException();
		CertStoreException(jstring arg0);
		CertStoreException(jthrowable arg0);
		CertStoreException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security::cert


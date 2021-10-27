#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security::cert
{
	class Certificate;
}

namespace java::security
{
	class KeyStore_PrivateKeyEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		KeyStore_PrivateKeyEntry(QAndroidJniObject obj);
		// Constructors
		KeyStore_PrivateKeyEntry(__JniBaseClass &arg0, jarray &arg1);
		KeyStore_PrivateKeyEntry(__JniBaseClass &arg0, jarray &arg1, __JniBaseClass &arg2);
		KeyStore_PrivateKeyEntry() = default;
		
		// Methods
		QAndroidJniObject getAttributes();
		QAndroidJniObject getCertificate();
		jarray getCertificateChain();
		QAndroidJniObject getPrivateKey();
		jstring toString();
	};
} // namespace java::security


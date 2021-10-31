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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyStore_PrivateKeyEntry(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyStore_PrivateKeyEntry(QAndroidJniObject obj);
		
		// Constructors
		KeyStore_PrivateKeyEntry(__JniBaseClass arg0, jarray arg1);
		KeyStore_PrivateKeyEntry(__JniBaseClass arg0, jarray arg1, __JniBaseClass arg2);
		
		// Methods
		__JniBaseClass getAttributes();
		java::security::cert::Certificate getCertificate();
		jarray getCertificateChain();
		__JniBaseClass getPrivateKey();
		jstring toString();
	};
} // namespace java::security


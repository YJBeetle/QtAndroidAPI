#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class AlgorithmParameters;
}
namespace java::security
{
	class Provider;
}
namespace java::security::spec
{
	class PKCS8EncodedKeySpec;
}
namespace javax::crypto
{
	class Cipher;
}

namespace javax::crypto
{
	class EncryptedPrivateKeyInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EncryptedPrivateKeyInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EncryptedPrivateKeyInfo(QAndroidJniObject obj);
		
		// Constructors
		EncryptedPrivateKeyInfo(jbyteArray arg0);
		EncryptedPrivateKeyInfo(jstring arg0, jbyteArray arg1);
		EncryptedPrivateKeyInfo(java::security::AlgorithmParameters arg0, jbyteArray arg1);
		
		// Methods
		jstring getAlgName();
		QAndroidJniObject getAlgParameters();
		jbyteArray getEncoded();
		jbyteArray getEncryptedData();
		QAndroidJniObject getKeySpec(__JniBaseClass arg0);
		QAndroidJniObject getKeySpec(javax::crypto::Cipher arg0);
		QAndroidJniObject getKeySpec(__JniBaseClass arg0, jstring arg1);
		QAndroidJniObject getKeySpec(__JniBaseClass arg0, java::security::Provider arg1);
	};
} // namespace javax::crypto


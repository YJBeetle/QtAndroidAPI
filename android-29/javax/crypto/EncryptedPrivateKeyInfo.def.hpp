#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JString;
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
	class EncryptedPrivateKeyInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EncryptedPrivateKeyInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EncryptedPrivateKeyInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		EncryptedPrivateKeyInfo(JByteArray arg0);
		EncryptedPrivateKeyInfo(JString arg0, JByteArray arg1);
		EncryptedPrivateKeyInfo(java::security::AlgorithmParameters arg0, JByteArray arg1);
		
		// Methods
		JString getAlgName() const;
		java::security::AlgorithmParameters getAlgParameters() const;
		JByteArray getEncoded() const;
		JByteArray getEncryptedData() const;
		java::security::spec::PKCS8EncodedKeySpec getKeySpec(JObject arg0) const;
		java::security::spec::PKCS8EncodedKeySpec getKeySpec(javax::crypto::Cipher arg0) const;
		java::security::spec::PKCS8EncodedKeySpec getKeySpec(JObject arg0, JString arg1) const;
		java::security::spec::PKCS8EncodedKeySpec getKeySpec(JObject arg0, java::security::Provider arg1) const;
	};
} // namespace javax::crypto


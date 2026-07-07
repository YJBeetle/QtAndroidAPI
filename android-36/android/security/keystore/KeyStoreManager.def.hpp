#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JString;
namespace java::security
{
	class KeyPair;
}

namespace android::security::keystore
{
	class KeyStoreManager : public JObject
	{
	public:
		// Fields
		static jint MODULE_HASH();
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyStoreManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyStoreManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getGrantedCertificateChainFromId(jlong arg0) const;
		JObject getGrantedKeyFromId(jlong arg0) const;
		java::security::KeyPair getGrantedKeyPairFromId(jlong arg0) const;
		JByteArray getSupplementaryAttestationInfo(jint arg0) const;
		jlong grantKeyAccess(JString arg0, jint arg1) const;
		void revokeKeyAccess(JString arg0, jint arg1) const;
	};
} // namespace android::security::keystore


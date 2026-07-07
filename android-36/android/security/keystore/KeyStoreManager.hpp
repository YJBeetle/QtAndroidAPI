#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/KeyPair.def.hpp"
#include "./KeyStoreManager.def.hpp"

namespace android::security::keystore
{
	// Fields
	inline jint KeyStoreManager::MODULE_HASH()
	{
		return getStaticField<jint>(
			"android.security.keystore.KeyStoreManager",
			"MODULE_HASH"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject KeyStoreManager::getGrantedCertificateChainFromId(jlong arg0) const
	{
		return callObjectMethod(
			"getGrantedCertificateChainFromId",
			"(J)Ljava/util/List;",
			arg0
		);
	}
	inline JObject KeyStoreManager::getGrantedKeyFromId(jlong arg0) const
	{
		return callObjectMethod(
			"getGrantedKeyFromId",
			"(J)Ljava/security/Key;",
			arg0
		);
	}
	inline java::security::KeyPair KeyStoreManager::getGrantedKeyPairFromId(jlong arg0) const
	{
		return callObjectMethod(
			"getGrantedKeyPairFromId",
			"(J)Ljava/security/KeyPair;",
			arg0
		);
	}
	inline JByteArray KeyStoreManager::getSupplementaryAttestationInfo(jint arg0) const
	{
		return callObjectMethod(
			"getSupplementaryAttestationInfo",
			"(I)[B",
			arg0
		);
	}
	inline jlong KeyStoreManager::grantKeyAccess(JString arg0, jint arg1) const
	{
		return callMethod<jlong>(
			"grantKeyAccess",
			"(Ljava/lang/String;I)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void KeyStoreManager::revokeKeyAccess(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"revokeKeyAccess",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::security::keystore

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security::keystore;
#endif

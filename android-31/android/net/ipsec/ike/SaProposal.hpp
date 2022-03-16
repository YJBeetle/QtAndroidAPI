#pragma once

#include "../../../../JObject.hpp"

class JObject;
class JString;

namespace android::net::ipsec::ike
{
	class SaProposal : public JObject
	{
	public:
		// Fields
		static jint DH_GROUP_1024_BIT_MODP();
		static jint DH_GROUP_1536_BIT_MODP();
		static jint DH_GROUP_2048_BIT_MODP();
		static jint DH_GROUP_3072_BIT_MODP();
		static jint DH_GROUP_4096_BIT_MODP();
		static jint DH_GROUP_CURVE_25519();
		static jint DH_GROUP_NONE();
		static jint ENCRYPTION_ALGORITHM_3DES();
		static jint ENCRYPTION_ALGORITHM_AES_CBC();
		static jint ENCRYPTION_ALGORITHM_AES_CTR();
		static jint ENCRYPTION_ALGORITHM_AES_GCM_12();
		static jint ENCRYPTION_ALGORITHM_AES_GCM_16();
		static jint ENCRYPTION_ALGORITHM_AES_GCM_8();
		static jint ENCRYPTION_ALGORITHM_CHACHA20_POLY1305();
		static jint INTEGRITY_ALGORITHM_AES_CMAC_96();
		static jint INTEGRITY_ALGORITHM_AES_XCBC_96();
		static jint INTEGRITY_ALGORITHM_HMAC_SHA1_96();
		static jint INTEGRITY_ALGORITHM_HMAC_SHA2_256_128();
		static jint INTEGRITY_ALGORITHM_HMAC_SHA2_384_192();
		static jint INTEGRITY_ALGORITHM_HMAC_SHA2_512_256();
		static jint INTEGRITY_ALGORITHM_NONE();
		static jint KEY_LEN_AES_128();
		static jint KEY_LEN_AES_192();
		static jint KEY_LEN_AES_256();
		static jint KEY_LEN_UNUSED();
		static jint PSEUDORANDOM_FUNCTION_AES128_CMAC();
		static jint PSEUDORANDOM_FUNCTION_AES128_XCBC();
		static jint PSEUDORANDOM_FUNCTION_HMAC_SHA1();
		static jint PSEUDORANDOM_FUNCTION_SHA2_256();
		static jint PSEUDORANDOM_FUNCTION_SHA2_384();
		static jint PSEUDORANDOM_FUNCTION_SHA2_512();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SaProposal(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SaProposal(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject getSupportedDhGroups();
		jboolean equals(JObject arg0) const;
		JObject getDhGroups() const;
		JObject getEncryptionAlgorithms() const;
		JObject getIntegrityAlgorithms() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::net::ipsec::ike


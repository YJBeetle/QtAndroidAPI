#pragma once

#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./SaProposal.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	inline jint SaProposal::DH_GROUP_1024_BIT_MODP()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"DH_GROUP_1024_BIT_MODP"
		);
	}
	inline jint SaProposal::DH_GROUP_1536_BIT_MODP()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"DH_GROUP_1536_BIT_MODP"
		);
	}
	inline jint SaProposal::DH_GROUP_2048_BIT_MODP()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"DH_GROUP_2048_BIT_MODP"
		);
	}
	inline jint SaProposal::DH_GROUP_3072_BIT_MODP()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"DH_GROUP_3072_BIT_MODP"
		);
	}
	inline jint SaProposal::DH_GROUP_4096_BIT_MODP()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"DH_GROUP_4096_BIT_MODP"
		);
	}
	inline jint SaProposal::DH_GROUP_CURVE_25519()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"DH_GROUP_CURVE_25519"
		);
	}
	inline jint SaProposal::DH_GROUP_NONE()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"DH_GROUP_NONE"
		);
	}
	inline jint SaProposal::ENCRYPTION_ALGORITHM_3DES()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"ENCRYPTION_ALGORITHM_3DES"
		);
	}
	inline jint SaProposal::ENCRYPTION_ALGORITHM_AES_CBC()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"ENCRYPTION_ALGORITHM_AES_CBC"
		);
	}
	inline jint SaProposal::ENCRYPTION_ALGORITHM_AES_CTR()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"ENCRYPTION_ALGORITHM_AES_CTR"
		);
	}
	inline jint SaProposal::ENCRYPTION_ALGORITHM_AES_GCM_12()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"ENCRYPTION_ALGORITHM_AES_GCM_12"
		);
	}
	inline jint SaProposal::ENCRYPTION_ALGORITHM_AES_GCM_16()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"ENCRYPTION_ALGORITHM_AES_GCM_16"
		);
	}
	inline jint SaProposal::ENCRYPTION_ALGORITHM_AES_GCM_8()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"ENCRYPTION_ALGORITHM_AES_GCM_8"
		);
	}
	inline jint SaProposal::ENCRYPTION_ALGORITHM_CHACHA20_POLY1305()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"ENCRYPTION_ALGORITHM_CHACHA20_POLY1305"
		);
	}
	inline jint SaProposal::INTEGRITY_ALGORITHM_AES_CMAC_96()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"INTEGRITY_ALGORITHM_AES_CMAC_96"
		);
	}
	inline jint SaProposal::INTEGRITY_ALGORITHM_AES_XCBC_96()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"INTEGRITY_ALGORITHM_AES_XCBC_96"
		);
	}
	inline jint SaProposal::INTEGRITY_ALGORITHM_HMAC_SHA1_96()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"INTEGRITY_ALGORITHM_HMAC_SHA1_96"
		);
	}
	inline jint SaProposal::INTEGRITY_ALGORITHM_HMAC_SHA2_256_128()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"INTEGRITY_ALGORITHM_HMAC_SHA2_256_128"
		);
	}
	inline jint SaProposal::INTEGRITY_ALGORITHM_HMAC_SHA2_384_192()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"INTEGRITY_ALGORITHM_HMAC_SHA2_384_192"
		);
	}
	inline jint SaProposal::INTEGRITY_ALGORITHM_HMAC_SHA2_512_256()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"INTEGRITY_ALGORITHM_HMAC_SHA2_512_256"
		);
	}
	inline jint SaProposal::INTEGRITY_ALGORITHM_NONE()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"INTEGRITY_ALGORITHM_NONE"
		);
	}
	inline jint SaProposal::KEY_LEN_AES_128()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"KEY_LEN_AES_128"
		);
	}
	inline jint SaProposal::KEY_LEN_AES_192()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"KEY_LEN_AES_192"
		);
	}
	inline jint SaProposal::KEY_LEN_AES_256()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"KEY_LEN_AES_256"
		);
	}
	inline jint SaProposal::KEY_LEN_UNUSED()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"KEY_LEN_UNUSED"
		);
	}
	inline jint SaProposal::PSEUDORANDOM_FUNCTION_AES128_CMAC()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"PSEUDORANDOM_FUNCTION_AES128_CMAC"
		);
	}
	inline jint SaProposal::PSEUDORANDOM_FUNCTION_AES128_XCBC()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"PSEUDORANDOM_FUNCTION_AES128_XCBC"
		);
	}
	inline jint SaProposal::PSEUDORANDOM_FUNCTION_HMAC_SHA1()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"PSEUDORANDOM_FUNCTION_HMAC_SHA1"
		);
	}
	inline jint SaProposal::PSEUDORANDOM_FUNCTION_SHA2_256()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"PSEUDORANDOM_FUNCTION_SHA2_256"
		);
	}
	inline jint SaProposal::PSEUDORANDOM_FUNCTION_SHA2_384()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"PSEUDORANDOM_FUNCTION_SHA2_384"
		);
	}
	inline jint SaProposal::PSEUDORANDOM_FUNCTION_SHA2_512()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"PSEUDORANDOM_FUNCTION_SHA2_512"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject SaProposal::getSupportedDhGroups()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.SaProposal",
			"getSupportedDhGroups",
			"()Ljava/util/Set;"
		);
	}
	inline jboolean SaProposal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject SaProposal::getDhGroups() const
	{
		return callObjectMethod(
			"getDhGroups",
			"()Ljava/util/List;"
		);
	}
	inline JObject SaProposal::getEncryptionAlgorithms() const
	{
		return callObjectMethod(
			"getEncryptionAlgorithms",
			"()Ljava/util/List;"
		);
	}
	inline JObject SaProposal::getIntegrityAlgorithms() const
	{
		return callObjectMethod(
			"getIntegrityAlgorithms",
			"()Ljava/util/List;"
		);
	}
	inline jint SaProposal::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString SaProposal::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ipsec::ike;
#endif

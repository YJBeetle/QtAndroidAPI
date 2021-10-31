#include "./SaProposal.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	jint SaProposal::DH_GROUP_1024_BIT_MODP()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"DH_GROUP_1024_BIT_MODP"
		);
	}
	jint SaProposal::DH_GROUP_1536_BIT_MODP()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"DH_GROUP_1536_BIT_MODP"
		);
	}
	jint SaProposal::DH_GROUP_2048_BIT_MODP()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"DH_GROUP_2048_BIT_MODP"
		);
	}
	jint SaProposal::DH_GROUP_3072_BIT_MODP()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"DH_GROUP_3072_BIT_MODP"
		);
	}
	jint SaProposal::DH_GROUP_4096_BIT_MODP()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"DH_GROUP_4096_BIT_MODP"
		);
	}
	jint SaProposal::DH_GROUP_CURVE_25519()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"DH_GROUP_CURVE_25519"
		);
	}
	jint SaProposal::DH_GROUP_NONE()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"DH_GROUP_NONE"
		);
	}
	jint SaProposal::ENCRYPTION_ALGORITHM_3DES()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"ENCRYPTION_ALGORITHM_3DES"
		);
	}
	jint SaProposal::ENCRYPTION_ALGORITHM_AES_CBC()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"ENCRYPTION_ALGORITHM_AES_CBC"
		);
	}
	jint SaProposal::ENCRYPTION_ALGORITHM_AES_CTR()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"ENCRYPTION_ALGORITHM_AES_CTR"
		);
	}
	jint SaProposal::ENCRYPTION_ALGORITHM_AES_GCM_12()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"ENCRYPTION_ALGORITHM_AES_GCM_12"
		);
	}
	jint SaProposal::ENCRYPTION_ALGORITHM_AES_GCM_16()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"ENCRYPTION_ALGORITHM_AES_GCM_16"
		);
	}
	jint SaProposal::ENCRYPTION_ALGORITHM_AES_GCM_8()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"ENCRYPTION_ALGORITHM_AES_GCM_8"
		);
	}
	jint SaProposal::ENCRYPTION_ALGORITHM_CHACHA20_POLY1305()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"ENCRYPTION_ALGORITHM_CHACHA20_POLY1305"
		);
	}
	jint SaProposal::INTEGRITY_ALGORITHM_AES_CMAC_96()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"INTEGRITY_ALGORITHM_AES_CMAC_96"
		);
	}
	jint SaProposal::INTEGRITY_ALGORITHM_AES_XCBC_96()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"INTEGRITY_ALGORITHM_AES_XCBC_96"
		);
	}
	jint SaProposal::INTEGRITY_ALGORITHM_HMAC_SHA1_96()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"INTEGRITY_ALGORITHM_HMAC_SHA1_96"
		);
	}
	jint SaProposal::INTEGRITY_ALGORITHM_HMAC_SHA2_256_128()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"INTEGRITY_ALGORITHM_HMAC_SHA2_256_128"
		);
	}
	jint SaProposal::INTEGRITY_ALGORITHM_HMAC_SHA2_384_192()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"INTEGRITY_ALGORITHM_HMAC_SHA2_384_192"
		);
	}
	jint SaProposal::INTEGRITY_ALGORITHM_HMAC_SHA2_512_256()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"INTEGRITY_ALGORITHM_HMAC_SHA2_512_256"
		);
	}
	jint SaProposal::INTEGRITY_ALGORITHM_NONE()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"INTEGRITY_ALGORITHM_NONE"
		);
	}
	jint SaProposal::KEY_LEN_AES_128()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"KEY_LEN_AES_128"
		);
	}
	jint SaProposal::KEY_LEN_AES_192()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"KEY_LEN_AES_192"
		);
	}
	jint SaProposal::KEY_LEN_AES_256()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"KEY_LEN_AES_256"
		);
	}
	jint SaProposal::KEY_LEN_UNUSED()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"KEY_LEN_UNUSED"
		);
	}
	jint SaProposal::PSEUDORANDOM_FUNCTION_AES128_CMAC()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"PSEUDORANDOM_FUNCTION_AES128_CMAC"
		);
	}
	jint SaProposal::PSEUDORANDOM_FUNCTION_AES128_XCBC()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"PSEUDORANDOM_FUNCTION_AES128_XCBC"
		);
	}
	jint SaProposal::PSEUDORANDOM_FUNCTION_HMAC_SHA1()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"PSEUDORANDOM_FUNCTION_HMAC_SHA1"
		);
	}
	jint SaProposal::PSEUDORANDOM_FUNCTION_SHA2_256()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"PSEUDORANDOM_FUNCTION_SHA2_256"
		);
	}
	jint SaProposal::PSEUDORANDOM_FUNCTION_SHA2_384()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"PSEUDORANDOM_FUNCTION_SHA2_384"
		);
	}
	jint SaProposal::PSEUDORANDOM_FUNCTION_SHA2_512()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.SaProposal",
			"PSEUDORANDOM_FUNCTION_SHA2_512"
		);
	}
	
	// QAndroidJniObject forward
	SaProposal::SaProposal(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass SaProposal::getSupportedDhGroups()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.SaProposal",
			"getSupportedDhGroups",
			"()Ljava/util/Set;"
		);
	}
	jboolean SaProposal::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass SaProposal::getDhGroups()
	{
		return callObjectMethod(
			"getDhGroups",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass SaProposal::getEncryptionAlgorithms()
	{
		return callObjectMethod(
			"getEncryptionAlgorithms",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass SaProposal::getIntegrityAlgorithms()
	{
		return callObjectMethod(
			"getIntegrityAlgorithms",
			"()Ljava/util/List;"
		);
	}
	jint SaProposal::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring SaProposal::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net::ipsec::ike


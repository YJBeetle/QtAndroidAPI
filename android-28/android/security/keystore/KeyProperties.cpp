#include "../../../JString.hpp"
#include "./KeyProperties.hpp"

namespace android::security::keystore
{
	// Fields
	JString KeyProperties::BLOCK_MODE_CBC()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"BLOCK_MODE_CBC",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::BLOCK_MODE_CTR()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"BLOCK_MODE_CTR",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::BLOCK_MODE_ECB()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"BLOCK_MODE_ECB",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::BLOCK_MODE_GCM()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"BLOCK_MODE_GCM",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::DIGEST_MD5()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"DIGEST_MD5",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::DIGEST_NONE()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"DIGEST_NONE",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::DIGEST_SHA1()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"DIGEST_SHA1",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::DIGEST_SHA224()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"DIGEST_SHA224",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::DIGEST_SHA256()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"DIGEST_SHA256",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::DIGEST_SHA384()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"DIGEST_SHA384",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::DIGEST_SHA512()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"DIGEST_SHA512",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::ENCRYPTION_PADDING_NONE()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"ENCRYPTION_PADDING_NONE",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::ENCRYPTION_PADDING_PKCS7()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"ENCRYPTION_PADDING_PKCS7",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::ENCRYPTION_PADDING_RSA_OAEP()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"ENCRYPTION_PADDING_RSA_OAEP",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::ENCRYPTION_PADDING_RSA_PKCS1()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"ENCRYPTION_PADDING_RSA_PKCS1",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::KEY_ALGORITHM_3DES()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_3DES",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::KEY_ALGORITHM_AES()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_AES",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::KEY_ALGORITHM_EC()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_EC",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::KEY_ALGORITHM_HMAC_SHA1()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_HMAC_SHA1",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::KEY_ALGORITHM_HMAC_SHA224()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_HMAC_SHA224",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::KEY_ALGORITHM_HMAC_SHA256()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_HMAC_SHA256",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::KEY_ALGORITHM_HMAC_SHA384()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_HMAC_SHA384",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::KEY_ALGORITHM_HMAC_SHA512()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_HMAC_SHA512",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::KEY_ALGORITHM_RSA()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_RSA",
			"Ljava/lang/String;"
		);
	}
	jint KeyProperties::ORIGIN_GENERATED()
	{
		return getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"ORIGIN_GENERATED"
		);
	}
	jint KeyProperties::ORIGIN_IMPORTED()
	{
		return getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"ORIGIN_IMPORTED"
		);
	}
	jint KeyProperties::ORIGIN_SECURELY_IMPORTED()
	{
		return getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"ORIGIN_SECURELY_IMPORTED"
		);
	}
	jint KeyProperties::ORIGIN_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"ORIGIN_UNKNOWN"
		);
	}
	jint KeyProperties::PURPOSE_DECRYPT()
	{
		return getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"PURPOSE_DECRYPT"
		);
	}
	jint KeyProperties::PURPOSE_ENCRYPT()
	{
		return getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"PURPOSE_ENCRYPT"
		);
	}
	jint KeyProperties::PURPOSE_SIGN()
	{
		return getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"PURPOSE_SIGN"
		);
	}
	jint KeyProperties::PURPOSE_VERIFY()
	{
		return getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"PURPOSE_VERIFY"
		);
	}
	jint KeyProperties::PURPOSE_WRAP_KEY()
	{
		return getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"PURPOSE_WRAP_KEY"
		);
	}
	JString KeyProperties::SIGNATURE_PADDING_RSA_PKCS1()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"SIGNATURE_PADDING_RSA_PKCS1",
			"Ljava/lang/String;"
		);
	}
	JString KeyProperties::SIGNATURE_PADDING_RSA_PSS()
	{
		return getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"SIGNATURE_PADDING_RSA_PSS",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	KeyProperties::KeyProperties(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::security::keystore


#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::security::keystore
{
	class KeyProperties : public JObject
	{
	public:
		// Fields
		static jint AUTH_BIOMETRIC_STRONG();
		static jint AUTH_DEVICE_CREDENTIAL();
		static JString BLOCK_MODE_CBC();
		static JString BLOCK_MODE_CTR();
		static JString BLOCK_MODE_ECB();
		static JString BLOCK_MODE_GCM();
		static JString DIGEST_MD5();
		static JString DIGEST_NONE();
		static JString DIGEST_SHA1();
		static JString DIGEST_SHA224();
		static JString DIGEST_SHA256();
		static JString DIGEST_SHA384();
		static JString DIGEST_SHA512();
		static JString ENCRYPTION_PADDING_NONE();
		static JString ENCRYPTION_PADDING_PKCS7();
		static JString ENCRYPTION_PADDING_RSA_OAEP();
		static JString ENCRYPTION_PADDING_RSA_PKCS1();
		static JString KEY_ALGORITHM_3DES();
		static JString KEY_ALGORITHM_AES();
		static JString KEY_ALGORITHM_EC();
		static JString KEY_ALGORITHM_HMAC_SHA1();
		static JString KEY_ALGORITHM_HMAC_SHA224();
		static JString KEY_ALGORITHM_HMAC_SHA256();
		static JString KEY_ALGORITHM_HMAC_SHA384();
		static JString KEY_ALGORITHM_HMAC_SHA512();
		static JString KEY_ALGORITHM_RSA();
		static jint ORIGIN_GENERATED();
		static jint ORIGIN_IMPORTED();
		static jint ORIGIN_SECURELY_IMPORTED();
		static jint ORIGIN_UNKNOWN();
		static jint PURPOSE_AGREE_KEY();
		static jint PURPOSE_ATTEST_KEY();
		static jint PURPOSE_DECRYPT();
		static jint PURPOSE_ENCRYPT();
		static jint PURPOSE_SIGN();
		static jint PURPOSE_VERIFY();
		static jint PURPOSE_WRAP_KEY();
		static jint SECURITY_LEVEL_SOFTWARE();
		static jint SECURITY_LEVEL_STRONGBOX();
		static jint SECURITY_LEVEL_TRUSTED_ENVIRONMENT();
		static jint SECURITY_LEVEL_UNKNOWN();
		static jint SECURITY_LEVEL_UNKNOWN_SECURE();
		static JString SIGNATURE_PADDING_RSA_PKCS1();
		static JString SIGNATURE_PADDING_RSA_PSS();
		static jint UNRESTRICTED_USAGE_COUNT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyProperties(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyProperties(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::security::keystore


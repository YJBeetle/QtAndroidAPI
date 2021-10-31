#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::security::keystore
{
	class KeyProperties : public __JniBaseClass
	{
	public:
		// Fields
		static jint AUTH_BIOMETRIC_STRONG();
		static jint AUTH_DEVICE_CREDENTIAL();
		static jstring BLOCK_MODE_CBC();
		static jstring BLOCK_MODE_CTR();
		static jstring BLOCK_MODE_ECB();
		static jstring BLOCK_MODE_GCM();
		static jstring DIGEST_MD5();
		static jstring DIGEST_NONE();
		static jstring DIGEST_SHA1();
		static jstring DIGEST_SHA224();
		static jstring DIGEST_SHA256();
		static jstring DIGEST_SHA384();
		static jstring DIGEST_SHA512();
		static jstring ENCRYPTION_PADDING_NONE();
		static jstring ENCRYPTION_PADDING_PKCS7();
		static jstring ENCRYPTION_PADDING_RSA_OAEP();
		static jstring ENCRYPTION_PADDING_RSA_PKCS1();
		static jstring KEY_ALGORITHM_3DES();
		static jstring KEY_ALGORITHM_AES();
		static jstring KEY_ALGORITHM_EC();
		static jstring KEY_ALGORITHM_HMAC_SHA1();
		static jstring KEY_ALGORITHM_HMAC_SHA224();
		static jstring KEY_ALGORITHM_HMAC_SHA256();
		static jstring KEY_ALGORITHM_HMAC_SHA384();
		static jstring KEY_ALGORITHM_HMAC_SHA512();
		static jstring KEY_ALGORITHM_RSA();
		static jint ORIGIN_GENERATED();
		static jint ORIGIN_IMPORTED();
		static jint ORIGIN_SECURELY_IMPORTED();
		static jint ORIGIN_UNKNOWN();
		static jint PURPOSE_DECRYPT();
		static jint PURPOSE_ENCRYPT();
		static jint PURPOSE_SIGN();
		static jint PURPOSE_VERIFY();
		static jint PURPOSE_WRAP_KEY();
		static jstring SIGNATURE_PADDING_RSA_PKCS1();
		static jstring SIGNATURE_PADDING_RSA_PSS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyProperties(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyProperties(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::security::keystore


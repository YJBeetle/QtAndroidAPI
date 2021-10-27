#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::security::keystore
{
	class KeyProperties : public __JniBaseClass
	{
	public:
		// Fields
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
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::security::keystore


namespace __jni_impl::android::security::keystore
{
	// Fields
	jstring KeyProperties::BLOCK_MODE_CBC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"BLOCK_MODE_CBC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::BLOCK_MODE_CTR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"BLOCK_MODE_CTR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::BLOCK_MODE_ECB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"BLOCK_MODE_ECB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::BLOCK_MODE_GCM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"BLOCK_MODE_GCM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::DIGEST_MD5()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"DIGEST_MD5",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::DIGEST_NONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"DIGEST_NONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::DIGEST_SHA1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"DIGEST_SHA1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::DIGEST_SHA224()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"DIGEST_SHA224",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::DIGEST_SHA256()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"DIGEST_SHA256",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::DIGEST_SHA384()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"DIGEST_SHA384",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::DIGEST_SHA512()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"DIGEST_SHA512",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::ENCRYPTION_PADDING_NONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"ENCRYPTION_PADDING_NONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::ENCRYPTION_PADDING_PKCS7()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"ENCRYPTION_PADDING_PKCS7",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::ENCRYPTION_PADDING_RSA_OAEP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"ENCRYPTION_PADDING_RSA_OAEP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::ENCRYPTION_PADDING_RSA_PKCS1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"ENCRYPTION_PADDING_RSA_PKCS1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::KEY_ALGORITHM_3DES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_3DES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::KEY_ALGORITHM_AES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_AES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::KEY_ALGORITHM_EC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_EC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::KEY_ALGORITHM_HMAC_SHA1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_HMAC_SHA1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::KEY_ALGORITHM_HMAC_SHA224()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_HMAC_SHA224",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::KEY_ALGORITHM_HMAC_SHA256()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_HMAC_SHA256",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::KEY_ALGORITHM_HMAC_SHA384()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_HMAC_SHA384",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::KEY_ALGORITHM_HMAC_SHA512()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_HMAC_SHA512",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::KEY_ALGORITHM_RSA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"KEY_ALGORITHM_RSA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint KeyProperties::ORIGIN_GENERATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"ORIGIN_GENERATED"
		);
	}
	jint KeyProperties::ORIGIN_IMPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"ORIGIN_IMPORTED"
		);
	}
	jint KeyProperties::ORIGIN_SECURELY_IMPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"ORIGIN_SECURELY_IMPORTED"
		);
	}
	jint KeyProperties::ORIGIN_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"ORIGIN_UNKNOWN"
		);
	}
	jint KeyProperties::PURPOSE_DECRYPT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"PURPOSE_DECRYPT"
		);
	}
	jint KeyProperties::PURPOSE_ENCRYPT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"PURPOSE_ENCRYPT"
		);
	}
	jint KeyProperties::PURPOSE_SIGN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"PURPOSE_SIGN"
		);
	}
	jint KeyProperties::PURPOSE_VERIFY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"PURPOSE_VERIFY"
		);
	}
	jint KeyProperties::PURPOSE_WRAP_KEY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.security.keystore.KeyProperties",
			"PURPOSE_WRAP_KEY"
		);
	}
	jstring KeyProperties::SIGNATURE_PADDING_RSA_PKCS1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"SIGNATURE_PADDING_RSA_PKCS1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyProperties::SIGNATURE_PADDING_RSA_PSS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.keystore.KeyProperties",
			"SIGNATURE_PADDING_RSA_PSS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void KeyProperties::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyProperties",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::security::keystore

namespace android::security::keystore
{
	class KeyProperties : public __jni_impl::android::security::keystore::KeyProperties
	{
	public:
		KeyProperties(QAndroidJniObject obj) { __thiz = obj; }
		KeyProperties()
		{
			__constructor();
		}
	};
} // namespace android::security::keystore


#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::security::keystore
{
	class KeyGenParameterSpec;
}
namespace __jni_impl::java::math
{
	class BigInteger;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::javax::security::auth::x500
{
	class X500Principal;
}

namespace __jni_impl::android::security::keystore
{
	class KeyGenParameterSpec_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jint arg1);
		void __constructor(const QString &arg0, jint arg1);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAlgorithmParameterSpec(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setAttestationChallenge(jbyteArray arg0);
		QAndroidJniObject setBlockModes(jarray arg0);
		QAndroidJniObject setCertificateNotAfter(__jni_impl::java::util::Date arg0);
		QAndroidJniObject setCertificateNotBefore(__jni_impl::java::util::Date arg0);
		QAndroidJniObject setCertificateSerialNumber(__jni_impl::java::math::BigInteger arg0);
		QAndroidJniObject setCertificateSubject(__jni_impl::javax::security::auth::x500::X500Principal arg0);
		QAndroidJniObject setDigests(jarray arg0);
		QAndroidJniObject setEncryptionPaddings(jarray arg0);
		QAndroidJniObject setInvalidatedByBiometricEnrollment(jboolean arg0);
		QAndroidJniObject setIsStrongBoxBacked(jboolean arg0);
		QAndroidJniObject setKeySize(jint arg0);
		QAndroidJniObject setKeyValidityEnd(__jni_impl::java::util::Date arg0);
		QAndroidJniObject setKeyValidityForConsumptionEnd(__jni_impl::java::util::Date arg0);
		QAndroidJniObject setKeyValidityForOriginationEnd(__jni_impl::java::util::Date arg0);
		QAndroidJniObject setKeyValidityStart(__jni_impl::java::util::Date arg0);
		QAndroidJniObject setRandomizedEncryptionRequired(jboolean arg0);
		QAndroidJniObject setSignaturePaddings(jarray arg0);
		QAndroidJniObject setUnlockedDeviceRequired(jboolean arg0);
		QAndroidJniObject setUserAuthenticationRequired(jboolean arg0);
		QAndroidJniObject setUserAuthenticationValidWhileOnBody(jboolean arg0);
		QAndroidJniObject setUserAuthenticationValidityDurationSeconds(jint arg0);
		QAndroidJniObject setUserConfirmationRequired(jboolean arg0);
		QAndroidJniObject setUserPresenceRequired(jboolean arg0);
	};
} // namespace __jni_impl::android::security::keystore

#include "./KeyGenParameterSpec.hpp"
#include "../../../java/math/BigInteger.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"

namespace __jni_impl::android::security::keystore
{
	// Fields
	
	// Constructors
	void KeyGenParameterSpec_Builder::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyGenParameterSpec$Builder",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void KeyGenParameterSpec_Builder::__constructor(const QString &arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyGenParameterSpec$Builder",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject KeyGenParameterSpec_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/security/keystore/KeyGenParameterSpec;"
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setAlgorithmParameterSpec(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setAlgorithmParameterSpec",
			"(Ljava/security/spec/AlgorithmParameterSpec;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setAttestationChallenge(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"setAttestationChallenge",
			"([B)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setBlockModes(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setBlockModes",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setCertificateNotAfter(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setCertificateNotAfter",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setCertificateNotBefore(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setCertificateNotBefore",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setCertificateSerialNumber(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"setCertificateSerialNumber",
			"(Ljava/math/BigInteger;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setCertificateSubject(__jni_impl::javax::security::auth::x500::X500Principal arg0)
	{
		return __thiz.callObjectMethod(
			"setCertificateSubject",
			"(Ljavax/security/auth/x500/X500Principal;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setDigests(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setDigests",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setEncryptionPaddings(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setEncryptionPaddings",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setInvalidatedByBiometricEnrollment(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setInvalidatedByBiometricEnrollment",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setIsStrongBoxBacked(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIsStrongBoxBacked",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setKeySize(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setKeySize",
			"(I)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setKeyValidityEnd(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setKeyValidityEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setKeyValidityForConsumptionEnd(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setKeyValidityForConsumptionEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setKeyValidityForOriginationEnd(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setKeyValidityForOriginationEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setKeyValidityStart(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setKeyValidityStart",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setRandomizedEncryptionRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setRandomizedEncryptionRequired",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setSignaturePaddings(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setSignaturePaddings",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setUnlockedDeviceRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setUnlockedDeviceRequired",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setUserAuthenticationRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setUserAuthenticationRequired",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setUserAuthenticationValidWhileOnBody(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setUserAuthenticationValidWhileOnBody",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setUserAuthenticationValidityDurationSeconds(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setUserAuthenticationValidityDurationSeconds",
			"(I)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setUserConfirmationRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setUserConfirmationRequired",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setUserPresenceRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setUserPresenceRequired",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::security::keystore

namespace android::security::keystore
{
	class KeyGenParameterSpec_Builder : public __jni_impl::android::security::keystore::KeyGenParameterSpec_Builder
	{
	public:
		KeyGenParameterSpec_Builder(QAndroidJniObject obj) { __thiz = obj; }
		KeyGenParameterSpec_Builder(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::security::keystore


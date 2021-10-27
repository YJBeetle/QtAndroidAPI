#include "./KeyGenParameterSpec.hpp"
#include "../../../java/math/BigInteger.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./KeyGenParameterSpec_Builder.hpp"

namespace android::security::keystore
{
	// Fields
	
	KeyGenParameterSpec_Builder::KeyGenParameterSpec_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyGenParameterSpec_Builder::KeyGenParameterSpec_Builder(jstring &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyGenParameterSpec$Builder",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	KeyGenParameterSpec_Builder::KeyGenParameterSpec_Builder(const QString &arg0, jint &arg1)
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
	QAndroidJniObject KeyGenParameterSpec_Builder::setAlgorithmParameterSpec(__JniBaseClass arg0)
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
	QAndroidJniObject KeyGenParameterSpec_Builder::setCertificateNotAfter(java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setCertificateNotAfter",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setCertificateNotBefore(java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setCertificateNotBefore",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setCertificateSerialNumber(java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"setCertificateSerialNumber",
			"(Ljava/math/BigInteger;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setCertificateSubject(javax::security::auth::x500::X500Principal arg0)
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
	QAndroidJniObject KeyGenParameterSpec_Builder::setKeyValidityEnd(java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setKeyValidityEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setKeyValidityForConsumptionEnd(java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setKeyValidityForConsumptionEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setKeyValidityForOriginationEnd(java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setKeyValidityForOriginationEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyGenParameterSpec_Builder::setKeyValidityStart(java::util::Date arg0)
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
} // namespace android::security::keystore


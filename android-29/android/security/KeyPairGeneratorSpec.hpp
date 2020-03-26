#pragma once

#ifndef ANDROID_SECURITY_KEYPAIRGENERATORSPEC
#define ANDROID_SECURITY_KEYPAIRGENERATORSPEC

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::javax::security::auth::x500
{
	class X500Principal;
}
namespace __jni_impl::java::math
{
	class BigInteger;
}
namespace __jni_impl::java::util
{
	class Date;
}

namespace __jni_impl::android::security
{
	class KeyPairGeneratorSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getContext();
		QAndroidJniObject getSubjectDN();
		jboolean isEncryptionRequired();
		QAndroidJniObject getStartDate();
		jstring getKeyType();
		QAndroidJniObject getEndDate();
		jint getKeySize();
		jstring getKeystoreAlias();
		QAndroidJniObject getSerialNumber();
		QAndroidJniObject getAlgorithmParameterSpec();
	};
} // namespace __jni_impl::android::security

#include "../content/Context.hpp"
#include "../../javax/security/auth/x500/X500Principal.hpp"
#include "../../java/math/BigInteger.hpp"
#include "../../java/util/Date.hpp"

namespace __jni_impl::android::security
{
	// Fields
	
	// Constructors
	void KeyPairGeneratorSpec::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyPairGeneratorSpec",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject KeyPairGeneratorSpec::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject KeyPairGeneratorSpec::getSubjectDN()
	{
		return __thiz.callObjectMethod(
			"getSubjectDN",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	jboolean KeyPairGeneratorSpec::isEncryptionRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isEncryptionRequired",
			"()Z"
		);
	}
	QAndroidJniObject KeyPairGeneratorSpec::getStartDate()
	{
		return __thiz.callObjectMethod(
			"getStartDate",
			"()Ljava/util/Date;"
		);
	}
	jstring KeyPairGeneratorSpec::getKeyType()
	{
		return __thiz.callObjectMethod(
			"getKeyType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject KeyPairGeneratorSpec::getEndDate()
	{
		return __thiz.callObjectMethod(
			"getEndDate",
			"()Ljava/util/Date;"
		);
	}
	jint KeyPairGeneratorSpec::getKeySize()
	{
		return __thiz.callMethod<jint>(
			"getKeySize",
			"()I"
		);
	}
	jstring KeyPairGeneratorSpec::getKeystoreAlias()
	{
		return __thiz.callObjectMethod(
			"getKeystoreAlias",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject KeyPairGeneratorSpec::getSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject KeyPairGeneratorSpec::getAlgorithmParameterSpec()
	{
		return __thiz.callObjectMethod(
			"getAlgorithmParameterSpec",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
} // namespace __jni_impl::android::security

namespace android::security
{
	class KeyPairGeneratorSpec : public __jni_impl::android::security::KeyPairGeneratorSpec
	{
	public:
		KeyPairGeneratorSpec(QAndroidJniObject obj) { __thiz = obj; }
		KeyPairGeneratorSpec()
		{
			__constructor();
		}
	};
} // namespace android::security

#endif // ANDROID_SECURITY_KEYPAIRGENERATORSPEC


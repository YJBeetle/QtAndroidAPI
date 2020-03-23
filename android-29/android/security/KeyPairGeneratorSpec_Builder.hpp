#pragma once

#ifndef ANDROID_SECURITY_KEYPAIRGENERATORSPEC_BUILDER
#define ANDROID_SECURITY_KEYPAIRGENERATORSPEC_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::security
{
	class KeyPairGeneratorSpec;
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
	class KeyPairGeneratorSpec_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setEncryptionRequired();
		QAndroidJniObject setAlgorithmParameterSpec(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setAlias(jstring arg0);
		QAndroidJniObject setKeyType(jstring arg0);
		QAndroidJniObject setKeySize(jint arg0);
		QAndroidJniObject setSubject(__jni_impl::javax::security::auth::x500::X500Principal arg0);
		QAndroidJniObject setSerialNumber(__jni_impl::java::math::BigInteger arg0);
		QAndroidJniObject setStartDate(__jni_impl::java::util::Date arg0);
		QAndroidJniObject setEndDate(__jni_impl::java::util::Date arg0);
	};
} // namespace __jni_impl::android::security

#include "../content/Context.hpp"
#include "KeyPairGeneratorSpec.hpp"
#include "../../javax/security/auth/x500/X500Principal.hpp"
#include "../../java/math/BigInteger.hpp"
#include "../../java/util/Date.hpp"

namespace __jni_impl::android::security
{
	// Fields
	
	// Constructors
	void KeyPairGeneratorSpec_Builder::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyPairGeneratorSpec$Builder",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject KeyPairGeneratorSpec_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/security/KeyPairGeneratorSpec;");
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setEncryptionRequired()
	{
		return __thiz.callObjectMethod(
			"setEncryptionRequired",
			"()Landroid/security/KeyPairGeneratorSpec$Builder;");
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setAlgorithmParameterSpec(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setAlgorithmParameterSpec",
			"(Ljava/security/spec/AlgorithmParameterSpec;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setAlias(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setAlias",
			"(Ljava/lang/String;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0);
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setKeyType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setKeyType",
			"(Ljava/lang/String;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0);
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setKeySize(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setKeySize",
			"(I)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0);
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setSubject(__jni_impl::javax::security::auth::x500::X500Principal arg0)
	{
		return __thiz.callObjectMethod(
			"setSubject",
			"(Ljavax/security/auth/x500/X500Principal;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setSerialNumber(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"setSerialNumber",
			"(Ljava/math/BigInteger;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setStartDate(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setStartDate",
			"(Ljava/util/Date;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setEndDate(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setEndDate",
			"(Ljava/util/Date;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::security

namespace android::security
{
	class KeyPairGeneratorSpec_Builder : public __jni_impl::android::security::KeyPairGeneratorSpec_Builder
	{
	public:
		KeyPairGeneratorSpec_Builder(QAndroidJniObject obj) { __thiz = obj; }
		KeyPairGeneratorSpec_Builder(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::security

#endif // ANDROID_SECURITY_KEYPAIRGENERATORSPEC_BUILDER


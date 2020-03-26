#pragma once

#ifndef ANDROID_SECURITY_KEYSTOREPARAMETER_BUILDER
#define ANDROID_SECURITY_KEYSTOREPARAMETER_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::security
{
	class KeyStoreParameter;
}

namespace __jni_impl::android::security
{
	class KeyStoreParameter_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setEncryptionRequired(jboolean arg0);
	};
} // namespace __jni_impl::android::security

#include "../content/Context.hpp"
#include "KeyStoreParameter.hpp"

namespace __jni_impl::android::security
{
	// Fields
	
	// Constructors
	void KeyStoreParameter_Builder::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyStoreParameter$Builder",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject KeyStoreParameter_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/security/KeyStoreParameter;"
		);
	}
	QAndroidJniObject KeyStoreParameter_Builder::setEncryptionRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setEncryptionRequired",
			"(Z)Landroid/security/KeyStoreParameter$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::security

namespace android::security
{
	class KeyStoreParameter_Builder : public __jni_impl::android::security::KeyStoreParameter_Builder
	{
	public:
		KeyStoreParameter_Builder(QAndroidJniObject obj) { __thiz = obj; }
		KeyStoreParameter_Builder(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::security

#endif // ANDROID_SECURITY_KEYSTOREPARAMETER_BUILDER


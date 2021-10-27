#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::security
{
	class KeyStoreParameter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isEncryptionRequired();
	};
} // namespace __jni_impl::android::security


namespace __jni_impl::android::security
{
	// Fields
	
	// Constructors
	void KeyStoreParameter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyStoreParameter",
			"(V)V");
	}
	
	// Methods
	jboolean KeyStoreParameter::isEncryptionRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isEncryptionRequired",
			"()Z"
		);
	}
} // namespace __jni_impl::android::security

namespace android::security
{
	class KeyStoreParameter : public __jni_impl::android::security::KeyStoreParameter
	{
	public:
		KeyStoreParameter(QAndroidJniObject obj) { __thiz = obj; }
		KeyStoreParameter()
		{
			__constructor();
		}
	};
} // namespace android::security


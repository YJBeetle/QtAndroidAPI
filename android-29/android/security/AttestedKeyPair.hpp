#pragma once

#ifndef ANDROID_SECURITY_ATTESTEDKEYPAIR
#define ANDROID_SECURITY_ATTESTEDKEYPAIR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class KeyPair;
}

namespace __jni_impl::android::security
{
	class AttestedKeyPair : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getAttestationRecord();
		QAndroidJniObject getKeyPair();
	};
} // namespace __jni_impl::android::security

#include "../../java/security/KeyPair.hpp"

namespace __jni_impl::android::security
{
	// Fields
	
	// Constructors
	void AttestedKeyPair::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.AttestedKeyPair",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AttestedKeyPair::getAttestationRecord()
	{
		return __thiz.callObjectMethod(
			"getAttestationRecord",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AttestedKeyPair::getKeyPair()
	{
		return __thiz.callObjectMethod(
			"getKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
} // namespace __jni_impl::android::security

namespace android::security
{
	class AttestedKeyPair : public __jni_impl::android::security::AttestedKeyPair
	{
	public:
		AttestedKeyPair(QAndroidJniObject obj) { __thiz = obj; }
		AttestedKeyPair()
		{
			__constructor();
		}
	};
} // namespace android::security

#endif // ANDROID_SECURITY_ATTESTEDKEYPAIR


#pragma once

#ifndef ANDROID_SECURITY_KEYSTORE_WRAPPEDKEYENTRY
#define ANDROID_SECURITY_KEYSTORE_WRAPPEDKEYENTRY

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::security::keystore
{
	class WrappedKeyEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jbyteArray arg0, jstring arg1, jstring arg2, __jni_impl::__JniBaseClass arg3);
		void __constructor(jbyteArray arg0, const QString &arg1, const QString &arg2, __jni_impl::__JniBaseClass arg3);
		
		// Methods
		QAndroidJniObject getAlgorithmParameterSpec();
		jstring getTransformation();
		jbyteArray getWrappedKeyBytes();
		jstring getWrappingKeyAlias();
	};
} // namespace __jni_impl::android::security::keystore


namespace __jni_impl::android::security::keystore
{
	// Fields
	
	// Constructors
	void WrappedKeyEntry::__constructor(jbyteArray arg0, jstring arg1, jstring arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.WrappedKeyEntry",
			"([BLjava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void WrappedKeyEntry::__constructor(jbyteArray arg0, const QString &arg1, const QString &arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.WrappedKeyEntry",
			"([BLjava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject WrappedKeyEntry::getAlgorithmParameterSpec()
	{
		return __thiz.callObjectMethod(
			"getAlgorithmParameterSpec",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	jstring WrappedKeyEntry::getTransformation()
	{
		return __thiz.callObjectMethod(
			"getTransformation",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray WrappedKeyEntry::getWrappedKeyBytes()
	{
		return __thiz.callObjectMethod(
			"getWrappedKeyBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jstring WrappedKeyEntry::getWrappingKeyAlias()
	{
		return __thiz.callObjectMethod(
			"getWrappingKeyAlias",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::security::keystore

namespace android::security::keystore
{
	class WrappedKeyEntry : public __jni_impl::android::security::keystore::WrappedKeyEntry
	{
	public:
		WrappedKeyEntry(QAndroidJniObject obj) { __thiz = obj; }
		WrappedKeyEntry(jbyteArray arg0, jstring arg1, jstring arg2, __jni_impl::__JniBaseClass arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::security::keystore

#endif // ANDROID_SECURITY_KEYSTORE_WRAPPEDKEYENTRY


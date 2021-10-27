#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../../../java/security/ProviderException.hpp"


namespace __jni_impl::android::security::keystore
{
	class SecureKeyImportUnavailableException : public __jni_impl::java::security::ProviderException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::security::keystore


namespace __jni_impl::android::security::keystore
{
	// Fields
	
	// Constructors
	void SecureKeyImportUnavailableException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"()V"
		);
	}
	void SecureKeyImportUnavailableException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecureKeyImportUnavailableException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SecureKeyImportUnavailableException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void SecureKeyImportUnavailableException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void SecureKeyImportUnavailableException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::security::keystore

namespace android::security::keystore
{
	class SecureKeyImportUnavailableException : public __jni_impl::android::security::keystore::SecureKeyImportUnavailableException
	{
	public:
		SecureKeyImportUnavailableException(QAndroidJniObject obj) { __thiz = obj; }
		SecureKeyImportUnavailableException()
		{
			__constructor();
		}
		SecureKeyImportUnavailableException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SecureKeyImportUnavailableException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		SecureKeyImportUnavailableException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::security::keystore


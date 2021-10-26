#pragma once

#ifndef ANDROID_NFC_FORMATEXCEPTION
#define ANDROID_NFC_FORMATEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace __jni_impl::android::nfc
{
	class FormatException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::nfc


namespace __jni_impl::android::nfc
{
	// Fields
	
	// Constructors
	void FormatException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.FormatException",
			"()V"
		);
	}
	void FormatException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.FormatException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void FormatException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.FormatException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void FormatException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.FormatException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void FormatException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.FormatException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::nfc

namespace android::nfc
{
	class FormatException : public __jni_impl::android::nfc::FormatException
	{
	public:
		FormatException(QAndroidJniObject obj) { __thiz = obj; }
		FormatException()
		{
			__constructor();
		}
		FormatException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		FormatException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::nfc

#endif // ANDROID_NFC_FORMATEXCEPTION


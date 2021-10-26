#pragma once

#ifndef ANDROID_NFC_TAGLOSTEXCEPTION
#define ANDROID_NFC_TAGLOSTEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"


namespace __jni_impl::android::nfc
{
	class TagLostException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::nfc


namespace __jni_impl::android::nfc
{
	// Fields
	
	// Constructors
	void TagLostException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.TagLostException",
			"()V"
		);
	}
	void TagLostException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.TagLostException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TagLostException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.TagLostException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::nfc

namespace android::nfc
{
	class TagLostException : public __jni_impl::android::nfc::TagLostException
	{
	public:
		TagLostException(QAndroidJniObject obj) { __thiz = obj; }
		TagLostException()
		{
			__constructor();
		}
		TagLostException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::nfc

#endif // ANDROID_NFC_TAGLOSTEXCEPTION


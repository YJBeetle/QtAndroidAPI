#pragma once

#ifndef ANDROID_SAX_ROOTELEMENT
#define ANDROID_SAX_ROOTELEMENT

#include "../../__JniBaseClass.hpp"
#include "Element.hpp"


namespace __jni_impl::android::sax
{
	class RootElement : public __jni_impl::android::sax::Element
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		QAndroidJniObject getContentHandler();
	};
} // namespace __jni_impl::android::sax


namespace __jni_impl::android::sax
{
	// Fields
	
	// Constructors
	void RootElement::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.sax.RootElement",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void RootElement::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.sax.RootElement",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void RootElement::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.sax.RootElement",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RootElement::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.sax.RootElement",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject RootElement::getContentHandler()
	{
		return __thiz.callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
} // namespace __jni_impl::android::sax

namespace android::sax
{
	class RootElement : public __jni_impl::android::sax::RootElement
	{
	public:
		RootElement(QAndroidJniObject obj) { __thiz = obj; }
		RootElement(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RootElement(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::sax

#endif // ANDROID_SAX_ROOTELEMENT


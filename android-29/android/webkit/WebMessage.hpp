#pragma once

#ifndef ANDROID_WEBKIT_WEBMESSAGE
#define ANDROID_WEBKIT_WEBMESSAGE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::webkit
{
	class WebMessage : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jarray arg1);
		void __constructor(const QString &arg0, jarray arg1);
		
		// Methods
		jstring getData();
		jarray getPorts();
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebMessage::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebMessage",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebMessage::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebMessage",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebMessage::__constructor(jstring arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebMessage",
			"(Ljava/lang/String;[Landroid/webkit/WebMessagePort;)V",
			arg0,
			arg1
		);
	}
	void WebMessage::__constructor(const QString &arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebMessage",
			"(Ljava/lang/String;[Landroid/webkit/WebMessagePort;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	jstring WebMessage::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray WebMessage::getPorts()
	{
		return __thiz.callObjectMethod(
			"getPorts",
			"()[Landroid/webkit/WebMessagePort;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebMessage : public __jni_impl::android::webkit::WebMessage
	{
	public:
		WebMessage(QAndroidJniObject obj) { __thiz = obj; }
		WebMessage(jstring arg0)
		{
			__constructor(
				arg0);
		}
		WebMessage(jstring arg0, jarray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBMESSAGE


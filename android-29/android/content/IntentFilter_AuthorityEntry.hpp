#pragma once

#ifndef ANDROID_CONTENT_INTENTFILTER_AUTHORITYENTRY
#define ANDROID_CONTENT_INTENTFILTER_AUTHORITYENTRY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::content
{
	class IntentFilter_AuthorityEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint match(__jni_impl::android::net::Uri arg0);
		jstring getHost();
		jint getPort();
	};
} // namespace __jni_impl::android::content

#include "../net/Uri.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void IntentFilter_AuthorityEntry::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentFilter$AuthorityEntry",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void IntentFilter_AuthorityEntry::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentFilter$AuthorityEntry",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jboolean IntentFilter_AuthorityEntry::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint IntentFilter_AuthorityEntry::match(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callMethod<jint>(
			"match",
			"(Landroid/net/Uri;)I",
			arg0.__jniObject().object()
		);
	}
	jstring IntentFilter_AuthorityEntry::getHost()
	{
		return __thiz.callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IntentFilter_AuthorityEntry::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class IntentFilter_AuthorityEntry : public __jni_impl::android::content::IntentFilter_AuthorityEntry
	{
	public:
		IntentFilter_AuthorityEntry(QAndroidJniObject obj) { __thiz = obj; }
		IntentFilter_AuthorityEntry(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_INTENTFILTER_AUTHORITYENTRY


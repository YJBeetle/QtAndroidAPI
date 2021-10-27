#pragma once

#ifndef ANDROID_CONTENT_URIMATCHER
#define ANDROID_CONTENT_URIMATCHER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::content
{
	class UriMatcher : public __JniBaseClass
	{
	public:
		// Fields
		static jint NO_MATCH();
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		void addURI(jstring arg0, jstring arg1, jint arg2);
		void addURI(const QString &arg0, const QString &arg1, jint arg2);
		jint match(__jni_impl::android::net::Uri arg0);
	};
} // namespace __jni_impl::android::content

#include "../net/Uri.hpp"

namespace __jni_impl::android::content
{
	// Fields
	jint UriMatcher::NO_MATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.UriMatcher",
			"NO_MATCH"
		);
	}
	
	// Constructors
	void UriMatcher::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.UriMatcher",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	void UriMatcher::addURI(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"addURI",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void UriMatcher::addURI(const QString &arg0, const QString &arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"addURI",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jint UriMatcher::match(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callMethod<jint>(
			"match",
			"(Landroid/net/Uri;)I",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class UriMatcher : public __jni_impl::android::content::UriMatcher
	{
	public:
		UriMatcher(QAndroidJniObject obj) { __thiz = obj; }
		UriMatcher(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_URIMATCHER


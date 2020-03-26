#pragma once

#ifndef ANDROID_CONTENT_CONTENTURIS
#define ANDROID_CONTENT_CONTENTURIS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::net
{
	class Uri_Builder;
}

namespace __jni_impl::android::content
{
	class ContentUris : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jlong parseId(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject appendId(__jni_impl::android::net::Uri_Builder arg0, jlong arg1);
		static QAndroidJniObject withAppendedId(__jni_impl::android::net::Uri arg0, jlong arg1);
		static QAndroidJniObject removeId(__jni_impl::android::net::Uri arg0);
	};
} // namespace __jni_impl::android::content

#include "../net/Uri.hpp"
#include "../net/Uri_Builder.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void ContentUris::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentUris",
			"()V");
	}
	
	// Methods
	jlong ContentUris::parseId(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.content.ContentUris",
			"parseId",
			"(Landroid/net/Uri;)J",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentUris::appendId(__jni_impl::android::net::Uri_Builder arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentUris",
			"appendId",
			"(Landroid/net/Uri$Builder;J)Landroid/net/Uri$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ContentUris::withAppendedId(__jni_impl::android::net::Uri arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentUris",
			"withAppendedId",
			"(Landroid/net/Uri;J)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ContentUris::removeId(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentUris",
			"removeId",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class ContentUris : public __jni_impl::android::content::ContentUris
	{
	public:
		ContentUris(QAndroidJniObject obj) { __thiz = obj; }
		ContentUris()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_CONTENTURIS


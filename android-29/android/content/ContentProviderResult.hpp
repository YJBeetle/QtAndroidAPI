#pragma once

#ifndef ANDROID_CONTENT_CONTENTPROVIDERRESULT
#define ANDROID_CONTENT_CONTENTPROVIDERRESULT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::lang
{
	class Integer;
}

namespace __jni_impl::android::content
{
	class ContentProviderResult : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		QAndroidJniObject count();
		QAndroidJniObject uri();
		
		// Constructors
		void __constructor(__jni_impl::android::net::Uri arg0);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jint arg0);
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content

#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "../../java/lang/Integer.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject ContentProviderResult::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentProviderResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject ContentProviderResult::count()
	{
		return __thiz.getObjectField(
			"count",
			"Ljava/lang/Integer;"
		);
	}
	QAndroidJniObject ContentProviderResult::uri()
	{
		return __thiz.getObjectField(
			"uri",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void ContentProviderResult::__constructor(__jni_impl::android::net::Uri arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentProviderResult",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void ContentProviderResult::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentProviderResult",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void ContentProviderResult::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentProviderResult",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint ContentProviderResult::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring ContentProviderResult::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ContentProviderResult::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class ContentProviderResult : public __jni_impl::android::content::ContentProviderResult
	{
	public:
		ContentProviderResult(QAndroidJniObject obj) { __thiz = obj; }
		ContentProviderResult(__jni_impl::android::net::Uri arg0)
		{
			__constructor(
				arg0);
		}
		ContentProviderResult(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		ContentProviderResult(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_CONTENTPROVIDERRESULT


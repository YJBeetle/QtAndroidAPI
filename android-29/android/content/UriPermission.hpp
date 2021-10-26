#pragma once

#ifndef ANDROID_CONTENT_URIPERMISSION
#define ANDROID_CONTENT_URIPERMISSION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::content
{
	class UriPermission : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jlong INVALID_TIME();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jboolean isReadPermission();
		jboolean isWritePermission();
		jlong getPersistedTime();
		QAndroidJniObject getUri();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content

#include "../os/Parcel.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject UriPermission::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.UriPermission",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong UriPermission::INVALID_TIME()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.content.UriPermission",
			"INVALID_TIME"
		);
	}
	
	// Constructors
	void UriPermission::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.UriPermission",
			"(V)V");
	}
	
	// Methods
	jstring UriPermission::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean UriPermission::isReadPermission()
	{
		return __thiz.callMethod<jboolean>(
			"isReadPermission",
			"()Z"
		);
	}
	jboolean UriPermission::isWritePermission()
	{
		return __thiz.callMethod<jboolean>(
			"isWritePermission",
			"()Z"
		);
	}
	jlong UriPermission::getPersistedTime()
	{
		return __thiz.callMethod<jlong>(
			"getPersistedTime",
			"()J"
		);
	}
	QAndroidJniObject UriPermission::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jint UriPermission::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void UriPermission::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class UriPermission : public __jni_impl::android::content::UriPermission
	{
	public:
		UriPermission(QAndroidJniObject obj) { __thiz = obj; }
		UriPermission()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_URIPERMISSION


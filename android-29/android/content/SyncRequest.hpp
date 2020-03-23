#pragma once

#ifndef ANDROID_CONTENT_SYNCREQUEST
#define ANDROID_CONTENT_SYNCREQUEST

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content
{
	class SyncRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content

#include "../os/Parcel.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject SyncRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.SyncRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void SyncRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncRequest",
			"(V)V");
	}
	
	// Methods
	jint SyncRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void SyncRequest::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class SyncRequest : public __jni_impl::android::content::SyncRequest
	{
	public:
		SyncRequest(QAndroidJniObject obj) { __thiz = obj; }
		SyncRequest()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_SYNCREQUEST


#pragma once

#ifndef ANDROID_CONTENT_SYNCINFO
#define ANDROID_CONTENT_SYNCINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::accounts
{
	class Account;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content
{
	class SyncInfo : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject account();
		jstring authority();
		jlong startTime();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content

#include "../accounts/Account.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject SyncInfo::account()
	{
		return __thiz.getObjectField(
			"account",
			"Landroid/accounts/Account;"
		);
	}
	jstring SyncInfo::authority()
	{
		return __thiz.getObjectField(
			"authority",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jlong SyncInfo::startTime()
	{
		return __thiz.getField<jlong>(
			"startTime"
		);
	}
	
	// Constructors
	void SyncInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncInfo",
			"(V)V");
	}
	
	// Methods
	jint SyncInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void SyncInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class SyncInfo : public __jni_impl::android::content::SyncInfo
	{
	public:
		SyncInfo(QAndroidJniObject obj) { __thiz = obj; }
		SyncInfo()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_SYNCINFO


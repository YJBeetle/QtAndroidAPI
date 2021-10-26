#pragma once

#ifndef ANDROID_APP_ADMIN_NETWORKEVENT
#define ANDROID_APP_ADMIN_NETWORKEVENT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app::admin
{
	class NetworkEvent : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getPackageName();
		jlong getId();
		jlong getTimestamp();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app::admin

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::app::admin
{
	// Fields
	QAndroidJniObject NetworkEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.NetworkEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void NetworkEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.NetworkEvent",
			"(V)V");
	}
	
	// Methods
	jstring NetworkEvent::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong NetworkEvent::getId()
	{
		return __thiz.callMethod<jlong>(
			"getId",
			"()J"
		);
	}
	jlong NetworkEvent::getTimestamp()
	{
		return __thiz.callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	jint NetworkEvent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void NetworkEvent::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::app::admin

namespace android::app::admin
{
	class NetworkEvent : public __jni_impl::android::app::admin::NetworkEvent
	{
	public:
		NetworkEvent(QAndroidJniObject obj) { __thiz = obj; }
		NetworkEvent()
		{
			__constructor();
		}
	};
} // namespace android::app::admin

#endif // ANDROID_APP_ADMIN_NETWORKEVENT


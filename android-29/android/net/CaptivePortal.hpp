#pragma once

#ifndef ANDROID_NET_CAPTIVEPORTAL
#define ANDROID_NET_CAPTIVEPORTAL

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net
{
	class CaptivePortal : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		void ignoreNetwork();
		void reportCaptivePortalDismissed();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net

#include "../os/Parcel.hpp"

namespace __jni_impl::android::net
{
	// Fields
	QAndroidJniObject CaptivePortal::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.CaptivePortal",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void CaptivePortal::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.CaptivePortal",
			"(V)V");
	}
	
	// Methods
	void CaptivePortal::ignoreNetwork()
	{
		__thiz.callMethod<void>(
			"ignoreNetwork",
			"()V"
		);
	}
	void CaptivePortal::reportCaptivePortalDismissed()
	{
		__thiz.callMethod<void>(
			"reportCaptivePortalDismissed",
			"()V"
		);
	}
	jint CaptivePortal::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void CaptivePortal::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class CaptivePortal : public __jni_impl::android::net::CaptivePortal
	{
	public:
		CaptivePortal(QAndroidJniObject obj) { __thiz = obj; }
		CaptivePortal()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_CAPTIVEPORTAL


#pragma once

#ifndef ANDROID_NET_WIFI_AWARE_PARCELABLEPEERHANDLE
#define ANDROID_NET_WIFI_AWARE_PARCELABLEPEERHANDLE

#include "../../../../__JniBaseClass.hpp"
#include "PeerHandle.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	class PeerHandle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::aware
{
	class ParcelablePeerHandle : public __jni_impl::android::net::wifi::aware::PeerHandle
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::net::wifi::aware::PeerHandle arg0);
		
		// Methods
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::aware

#include "PeerHandle.hpp"
#include "../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	QAndroidJniObject ParcelablePeerHandle::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.aware.ParcelablePeerHandle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void ParcelablePeerHandle::__constructor(__jni_impl::android::net::wifi::aware::PeerHandle arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.ParcelablePeerHandle",
			"(Landroid/net/wifi/aware/PeerHandle;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint ParcelablePeerHandle::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ParcelablePeerHandle::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class ParcelablePeerHandle : public __jni_impl::android::net::wifi::aware::ParcelablePeerHandle
	{
	public:
		ParcelablePeerHandle(QAndroidJniObject obj) { __thiz = obj; }
		ParcelablePeerHandle(__jni_impl::android::net::wifi::aware::PeerHandle arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net::wifi::aware

#endif // ANDROID_NET_WIFI_AWARE_PARCELABLEPEERHANDLE


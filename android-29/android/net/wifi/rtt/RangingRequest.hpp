#pragma once

#ifndef ANDROID_NET_WIFI_RTT_RANGINGREQUEST
#define ANDROID_NET_WIFI_RTT_RANGINGREQUEST

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::rtt
{
	class RangingRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		static jint getMaxPeers();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::rtt

#include "../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::rtt
{
	// Fields
	QAndroidJniObject RangingRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.rtt.RangingRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void RangingRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.rtt.RangingRequest",
			"(V)V");
	}
	
	// Methods
	jboolean RangingRequest::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring RangingRequest::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint RangingRequest::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint RangingRequest::getMaxPeers()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.net.wifi.rtt.RangingRequest",
			"getMaxPeers",
			"()I"
		);
	}
	jint RangingRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void RangingRequest::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net::wifi::rtt

namespace android::net::wifi::rtt
{
	class RangingRequest : public __jni_impl::android::net::wifi::rtt::RangingRequest
	{
	public:
		RangingRequest(QAndroidJniObject obj) { __thiz = obj; }
		RangingRequest()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::rtt

#endif // ANDROID_NET_WIFI_RTT_RANGINGREQUEST


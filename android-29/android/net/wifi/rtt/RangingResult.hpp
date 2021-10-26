#pragma once

#ifndef ANDROID_NET_WIFI_RTT_RANGINGRESULT
#define ANDROID_NET_WIFI_RTT_RANGINGRESULT

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class MacAddress;
}
namespace __jni_impl::android::net::wifi::rtt
{
	class ResponderLocation;
}
namespace __jni_impl::android::net::wifi::aware
{
	class PeerHandle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::rtt
{
	class RangingResult : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint STATUS_FAIL();
		static jint STATUS_RESPONDER_DOES_NOT_SUPPORT_IEEE80211MC();
		static jint STATUS_SUCCESS();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint getStatus();
		jint getRssi();
		QAndroidJniObject getPeerHandle();
		jint getDistanceMm();
		jint getDistanceStdDevMm();
		jint getNumAttemptedMeasurements();
		jint getNumSuccessfulMeasurements();
		QAndroidJniObject getUnverifiedResponderLocation();
		jlong getRangingTimestampMillis();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getMacAddress();
	};
} // namespace __jni_impl::android::net::wifi::rtt

#include "../../MacAddress.hpp"
#include "ResponderLocation.hpp"
#include "../aware/PeerHandle.hpp"
#include "../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::rtt
{
	// Fields
	QAndroidJniObject RangingResult::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.rtt.RangingResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint RangingResult::STATUS_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.RangingResult",
			"STATUS_FAIL"
		);
	}
	jint RangingResult::STATUS_RESPONDER_DOES_NOT_SUPPORT_IEEE80211MC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.RangingResult",
			"STATUS_RESPONDER_DOES_NOT_SUPPORT_IEEE80211MC"
		);
	}
	jint RangingResult::STATUS_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.RangingResult",
			"STATUS_SUCCESS"
		);
	}
	
	// Constructors
	void RangingResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.rtt.RangingResult",
			"(V)V");
	}
	
	// Methods
	jboolean RangingResult::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring RangingResult::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint RangingResult::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint RangingResult::getStatus()
	{
		return __thiz.callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	jint RangingResult::getRssi()
	{
		return __thiz.callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	QAndroidJniObject RangingResult::getPeerHandle()
	{
		return __thiz.callObjectMethod(
			"getPeerHandle",
			"()Landroid/net/wifi/aware/PeerHandle;"
		);
	}
	jint RangingResult::getDistanceMm()
	{
		return __thiz.callMethod<jint>(
			"getDistanceMm",
			"()I"
		);
	}
	jint RangingResult::getDistanceStdDevMm()
	{
		return __thiz.callMethod<jint>(
			"getDistanceStdDevMm",
			"()I"
		);
	}
	jint RangingResult::getNumAttemptedMeasurements()
	{
		return __thiz.callMethod<jint>(
			"getNumAttemptedMeasurements",
			"()I"
		);
	}
	jint RangingResult::getNumSuccessfulMeasurements()
	{
		return __thiz.callMethod<jint>(
			"getNumSuccessfulMeasurements",
			"()I"
		);
	}
	QAndroidJniObject RangingResult::getUnverifiedResponderLocation()
	{
		return __thiz.callObjectMethod(
			"getUnverifiedResponderLocation",
			"()Landroid/net/wifi/rtt/ResponderLocation;"
		);
	}
	jlong RangingResult::getRangingTimestampMillis()
	{
		return __thiz.callMethod<jlong>(
			"getRangingTimestampMillis",
			"()J"
		);
	}
	jint RangingResult::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void RangingResult::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject RangingResult::getMacAddress()
	{
		return __thiz.callObjectMethod(
			"getMacAddress",
			"()Landroid/net/MacAddress;"
		);
	}
} // namespace __jni_impl::android::net::wifi::rtt

namespace android::net::wifi::rtt
{
	class RangingResult : public __jni_impl::android::net::wifi::rtt::RangingResult
	{
	public:
		RangingResult(QAndroidJniObject obj) { __thiz = obj; }
		RangingResult()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::rtt

#endif // ANDROID_NET_WIFI_RTT_RANGINGRESULT


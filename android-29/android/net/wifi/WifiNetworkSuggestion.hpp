#pragma once

#ifndef ANDROID_NET_WIFI_WIFINETWORKSUGGESTION
#define ANDROID_NET_WIFI_WIFINETWORKSUGGESTION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi
{
	class WifiNetworkSuggestion : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi
{
	// Fields
	QAndroidJniObject WifiNetworkSuggestion::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiNetworkSuggestion",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void WifiNetworkSuggestion::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiNetworkSuggestion",
			"(V)V");
	}
	
	// Methods
	jint WifiNetworkSuggestion::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiNetworkSuggestion::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint WifiNetworkSuggestion::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring WifiNetworkSuggestion::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiNetworkSuggestion::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiNetworkSuggestion : public __jni_impl::android::net::wifi::WifiNetworkSuggestion
	{
	public:
		WifiNetworkSuggestion(QAndroidJniObject obj) { __thiz = obj; }
		WifiNetworkSuggestion()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_WIFINETWORKSUGGESTION


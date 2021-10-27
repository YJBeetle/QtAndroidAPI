#pragma once

#ifndef ANDROID_NET_WIFI_WIFINETWORKSPECIFIER
#define ANDROID_NET_WIFI_WIFINETWORKSPECIFIER

#include "../../../__JniBaseClass.hpp"
#include "../NetworkSpecifier.hpp"

namespace __jni_impl::android::net::wifi
{
	class WifiConfiguration;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class PatternMatcher;
}
namespace __jni_impl::android::util
{
	class Pair;
}

namespace __jni_impl::android::net::wifi
{
	class WifiNetworkSpecifier : public __jni_impl::android::net::NetworkSpecifier
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

#include "WifiConfiguration.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/PatternMatcher.hpp"
#include "../../util/Pair.hpp"

namespace __jni_impl::android::net::wifi
{
	// Fields
	QAndroidJniObject WifiNetworkSpecifier::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiNetworkSpecifier",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void WifiNetworkSpecifier::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiNetworkSpecifier",
			"(V)V");
	}
	
	// Methods
	jint WifiNetworkSpecifier::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiNetworkSpecifier::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint WifiNetworkSpecifier::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring WifiNetworkSpecifier::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiNetworkSpecifier::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class WifiNetworkSpecifier : public __jni_impl::android::net::wifi::WifiNetworkSpecifier
	{
	public:
		WifiNetworkSpecifier(QAndroidJniObject obj) { __thiz = obj; }
		WifiNetworkSpecifier()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_WIFINETWORKSPECIFIER


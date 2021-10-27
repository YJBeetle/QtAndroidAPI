#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../../NetworkSpecifier.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::aware
{
	class WifiAwareNetworkSpecifier : public __jni_impl::android::net::NetworkSpecifier
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
} // namespace __jni_impl::android::net::wifi::aware

#include "../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	QAndroidJniObject WifiAwareNetworkSpecifier::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.aware.WifiAwareNetworkSpecifier",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void WifiAwareNetworkSpecifier::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.WifiAwareNetworkSpecifier",
			"(V)V");
	}
	
	// Methods
	jint WifiAwareNetworkSpecifier::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiAwareNetworkSpecifier::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint WifiAwareNetworkSpecifier::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring WifiAwareNetworkSpecifier::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiAwareNetworkSpecifier::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class WifiAwareNetworkSpecifier : public __jni_impl::android::net::wifi::aware::WifiAwareNetworkSpecifier
	{
	public:
		WifiAwareNetworkSpecifier(QAndroidJniObject obj) { __thiz = obj; }
		WifiAwareNetworkSpecifier()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::aware


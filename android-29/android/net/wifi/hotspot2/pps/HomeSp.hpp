#pragma once

#ifndef ANDROID_NET_WIFI_HOTSPOT2_PPS_HOMESP
#define ANDROID_NET_WIFI_HOTSPOT2_PPS_HOMESP

#include "../../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::hotspot2::pps
{
	class HomeSp : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::net::wifi::hotspot2::pps::HomeSp arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		void setFriendlyName(jstring arg0);
		void setFqdn(jstring arg0);
		QAndroidJniObject getFqdn();
		QAndroidJniObject getFriendlyName();
		void setRoamingConsortiumOis(jlongArray arg0);
		QAndroidJniObject getRoamingConsortiumOis();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::hotspot2::pps

#include "../../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::hotspot2::pps
{
	// Fields
	QAndroidJniObject HomeSp::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.hotspot2.pps.HomeSp",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void HomeSp::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.HomeSp",
			"()V");
	}
	void HomeSp::__constructor(__jni_impl::android::net::wifi::hotspot2::pps::HomeSp arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.HomeSp",
			"(Landroid/net/wifi/hotspot2/pps/HomeSp;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean HomeSp::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject HomeSp::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint HomeSp::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	void HomeSp::setFriendlyName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFriendlyName",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void HomeSp::setFqdn(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFqdn",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject HomeSp::getFqdn()
	{
		return __thiz.callObjectMethod(
			"getFqdn",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject HomeSp::getFriendlyName()
	{
		return __thiz.callObjectMethod(
			"getFriendlyName",
			"()Ljava/lang/String;");
	}
	void HomeSp::setRoamingConsortiumOis(jlongArray arg0)
	{
		__thiz.callMethod<void>(
			"setRoamingConsortiumOis",
			"([J)V",
			arg0);
	}
	QAndroidJniObject HomeSp::getRoamingConsortiumOis()
	{
		return __thiz.callObjectMethod(
			"getRoamingConsortiumOis",
			"()[J");
	}
	jint HomeSp::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void HomeSp::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::net::wifi::hotspot2::pps

namespace android::net::wifi::hotspot2::pps
{
	class HomeSp : public __jni_impl::android::net::wifi::hotspot2::pps::HomeSp
	{
	public:
		HomeSp(QAndroidJniObject obj) { __thiz = obj; }
		HomeSp()
		{
			__constructor();
		}
		HomeSp(__jni_impl::android::net::wifi::hotspot2::pps::HomeSp arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net::wifi::hotspot2::pps

#endif // ANDROID_NET_WIFI_HOTSPOT2_PPS_HOMESP


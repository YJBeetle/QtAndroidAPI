#pragma once

#ifndef ANDROID_NET_WIFI_WPSINFO
#define ANDROID_NET_WIFI_WPSINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi
{
	class WpsInfo : public __JniBaseClass
	{
	public:
		// Fields
		jstring BSSID();
		static QAndroidJniObject CREATOR();
		static jint DISPLAY();
		static jint INVALID();
		static jint KEYPAD();
		static jint LABEL();
		static jint PBC();
		jstring pin();
		jint setup();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::net::wifi::WpsInfo arg0);
		
		// Methods
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi
{
	// Fields
	jstring WpsInfo::BSSID()
	{
		return __thiz.getObjectField(
			"BSSID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject WpsInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WpsInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint WpsInfo::DISPLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"DISPLAY"
		);
	}
	jint WpsInfo::INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"INVALID"
		);
	}
	jint WpsInfo::KEYPAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"KEYPAD"
		);
	}
	jint WpsInfo::LABEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"LABEL"
		);
	}
	jint WpsInfo::PBC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"PBC"
		);
	}
	jstring WpsInfo::pin()
	{
		return __thiz.getObjectField(
			"pin",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WpsInfo::setup()
	{
		return __thiz.getField<jint>(
			"setup"
		);
	}
	
	// Constructors
	void WpsInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WpsInfo",
			"()V");
	}
	void WpsInfo::__constructor(__jni_impl::android::net::wifi::WpsInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WpsInfo",
			"(Landroid/net/wifi/WpsInfo;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jstring WpsInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WpsInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void WpsInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class WpsInfo : public __jni_impl::android::net::wifi::WpsInfo
	{
	public:
		WpsInfo(QAndroidJniObject obj) { __thiz = obj; }
		WpsInfo()
		{
			__constructor();
		}
		WpsInfo(__jni_impl::android::net::wifi::WpsInfo arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_WPSINFO


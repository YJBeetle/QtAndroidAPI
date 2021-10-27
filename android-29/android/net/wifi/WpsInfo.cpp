#include "../../os/Parcel.hpp"
#include "./WpsInfo.hpp"

namespace android::net::wifi
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
	
	WpsInfo::WpsInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WpsInfo::WpsInfo()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WpsInfo",
			"()V"
		);
	}
	WpsInfo::WpsInfo(android::net::wifi::WpsInfo &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WpsInfo",
			"(Landroid/net/wifi/WpsInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint WpsInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring WpsInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WpsInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::wifi


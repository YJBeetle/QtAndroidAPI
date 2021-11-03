#include "../../os/Parcel.hpp"
#include "./WpsInfo.hpp"

namespace android::net::wifi
{
	// Fields
	jstring WpsInfo::BSSID()
	{
		return getObjectField(
			"BSSID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	JObject WpsInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.WpsInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint WpsInfo::DISPLAY()
	{
		return getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"DISPLAY"
		);
	}
	jint WpsInfo::INVALID()
	{
		return getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"INVALID"
		);
	}
	jint WpsInfo::KEYPAD()
	{
		return getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"KEYPAD"
		);
	}
	jint WpsInfo::LABEL()
	{
		return getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"LABEL"
		);
	}
	jint WpsInfo::PBC()
	{
		return getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"PBC"
		);
	}
	jstring WpsInfo::pin()
	{
		return getObjectField(
			"pin",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WpsInfo::setup()
	{
		return getField<jint>(
			"setup"
		);
	}
	
	// QAndroidJniObject forward
	WpsInfo::WpsInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	WpsInfo::WpsInfo()
		: JObject(
			"android.net.wifi.WpsInfo",
			"()V"
		) {}
	WpsInfo::WpsInfo(android::net::wifi::WpsInfo &arg0)
		: JObject(
			"android.net.wifi.WpsInfo",
			"(Landroid/net/wifi/WpsInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint WpsInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring WpsInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WpsInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

